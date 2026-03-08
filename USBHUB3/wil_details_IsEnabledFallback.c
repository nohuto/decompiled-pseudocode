/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C000CD00
 * Callers:
 *     Feature_USB4PowerImprovements__private_IsEnabledFallback @ 0x1C000CDE8 (Feature_USB4PowerImprovements__private_IsEnabledFallback.c)
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback @ 0x1C000CE3C (Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C97C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000CAA8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C000CD94 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
