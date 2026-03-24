/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C037B190
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C0127670 (EditionBaseDriverUnloadUninitialize.c)
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
