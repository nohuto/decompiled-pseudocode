/*
 * XREFs of StorNVMe_wil_deinit @ 0x1C000E8E0
 * Callers:
 *     DriverEntry @ 0x1C000E12C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 StorNVMe_wil_deinit()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
