/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1C01A7660
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B81B0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A6A60 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool PTPTelemetry::ShouldPtpSettingFire(void)
{
  bool result; // al

  result = 0;
  if ( !PTPTelemetry::s_SettingsFired )
    return PTPTelemetry::s_SettingsReady;
  return result;
}
