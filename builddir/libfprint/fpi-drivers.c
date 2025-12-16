#include <glib-object.h>
#include "fpi-context.h"

extern GType (fpi_device_upektc_img_get_type) (void);
extern GType (fpi_device_vfs5011_get_type) (void);
extern GType (fpi_device_vfs7552_get_type) (void);
extern GType (fpi_device_aes3500_get_type) (void);
extern GType (fpi_device_aes4000_get_type) (void);
extern GType (fpi_device_aes1610_get_type) (void);
extern GType (fpi_device_aes1660_get_type) (void);
extern GType (fpi_device_aes2660_get_type) (void);
extern GType (fpi_device_aes2501_get_type) (void);
extern GType (fpi_device_aes2550_get_type) (void);
extern GType (fpi_device_vfs101_get_type) (void);
extern GType (fpi_device_vfs301_get_type) (void);
extern GType (fpi_device_vfs0050_get_type) (void);
extern GType (fpi_device_etes603_get_type) (void);
extern GType (fpi_device_egis0570_get_type) (void);
extern GType (fpi_device_egismoc_get_type) (void);
extern GType (fpi_device_vcom5s_get_type) (void);
extern GType (fpi_device_synaptics_get_type) (void);
extern GType (fpi_device_elan_get_type) (void);
extern GType (fpi_device_elanmoc_get_type) (void);
extern GType (fpi_device_uru4000_get_type) (void);
extern GType (fpi_device_upektc_get_type) (void);
extern GType (fpi_device_upeksonly_get_type) (void);
extern GType (fpi_device_upekts_get_type) (void);
extern GType (fpi_device_goodixmoc_get_type) (void);
extern GType (fpi_device_nb1010_get_type) (void);
extern GType (fpi_device_fpcmoc_get_type) (void);
extern GType (fpi_device_realtek_get_type) (void);
extern GType (fpi_device_focaltech_moc_get_type) (void);
extern GType (fpi_device_elanspi_get_type) (void);

GArray *
fpi_get_driver_types (void)
{
  GArray *drivers = g_array_new (TRUE, FALSE, sizeof (GType));
  GType t;

  t = fpi_device_upektc_img_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vfs5011_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vfs7552_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes3500_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes4000_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes1610_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes1660_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes2660_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes2501_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_aes2550_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vfs101_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vfs301_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vfs0050_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_etes603_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_egis0570_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_egismoc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_vcom5s_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_synaptics_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_elan_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_elanmoc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_uru4000_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_upektc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_upeksonly_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_upekts_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_goodixmoc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_nb1010_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_fpcmoc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_realtek_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_focaltech_moc_get_type ();
  g_array_append_val (drivers, t);

  t = fpi_device_elanspi_get_type ();
  g_array_append_val (drivers, t);

  return drivers;
}
