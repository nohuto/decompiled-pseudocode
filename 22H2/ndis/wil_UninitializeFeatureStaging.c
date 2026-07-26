/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C00F9328
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS wil_UninitializeFeatureStaging()
{
  NTSTATUS result; // eax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification(wil_details_featureChangeNotification);
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
