/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C008F2F0
 * Callers:
 *     ACPIUnload @ 0x1C0052F10 (ACPIUnload.c)
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
