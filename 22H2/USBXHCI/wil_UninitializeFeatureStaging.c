/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C006A008
 * Callers:
 *     DriverEntry @ 0x1C007112C (DriverEntry.c)
 *     DriverCleanup @ 0x1C0076110 (DriverCleanup.c)
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
