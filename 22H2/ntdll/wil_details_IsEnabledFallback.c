/*
 * XREFs of wil_details_IsEnabledFallback @ 0x18009C3E4
 * Callers:
 *     Feature_SearchPackagePaths__private_IsEnabledFallback @ 0x18009BC88 (Feature_SearchPackagePaths__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009BFCC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009C130 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18009C224 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bl
  unsigned __int64 v5; // rdi

  v4 = a1;
  if ( (a1 & 2) != 0 )
  {
    v5 = __PAIR64__(HIDWORD(a3), a1);
  }
  else
  {
    v5 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           Feature_SearchPackagePaths__private_descriptor,
           a1,
           (__int64)&Feature_SearchPackagePaths__private_descriptor);
    v4 = v5;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a1, v5, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v5, a2);
  }
  return v4 & 1;
}
