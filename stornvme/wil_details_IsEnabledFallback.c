/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C0003E74
 * Callers:
 *     Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledFallback @ 0x1C0003654 (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003A6C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0003BD4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0003CD4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  char v3; // bl
  __int64 v4; // rdi

  v3 = a1;
  if ( (a1 & 2) != 0 )
  {
    v4 = (unsigned int)a1;
  }
  else
  {
    v4 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           wil_details_featureDescriptors_a,
           a1,
           (__int64)&wil_details_featureDescriptors_a);
    v3 = v4;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a1, v4, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v4, a2);
  }
  return v3 & 1;
}
