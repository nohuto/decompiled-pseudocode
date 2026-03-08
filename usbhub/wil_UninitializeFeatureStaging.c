/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C0073008
 * Callers:
 *     DriverEntry @ 0x1C0041964 (DriverEntry.c)
 *     UsbhDriverUnload @ 0x1C00429E0 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
