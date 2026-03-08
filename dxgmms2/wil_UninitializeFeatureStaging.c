/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C0085008
 * Callers:
 *     DriverUnload @ 0x1C002CF70 (DriverUnload.c)
 *     DriverEntry @ 0x1C010D1E8 (DriverEntry.c)
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
