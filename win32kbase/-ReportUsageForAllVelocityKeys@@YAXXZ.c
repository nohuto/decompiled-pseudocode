/*
 * XREFs of ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1C00DD738
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C00CC088 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void ReportUsageForAllVelocityKeys(void)
{
  __int64 CachedFeatureEnabledState; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_NiWin32kReliabilityJune2024__private_featureState,
                                (__int64)&Feature_NiWin32kReliabilityJune2024__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_NiWin32kReliabilityJune2024__private_descriptor,
    CachedFeatureEnabledState,
    1LL);
  v1 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
         (unsigned int *)&Feature_NI_EssentialsBundle_A__private_featureState,
         (__int64)&Feature_NI_EssentialsBundle_A__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(&Feature_NI_EssentialsBundle_A__private_descriptor, v1, 1LL);
  v2 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
         (unsigned int *)&Feature_NI_EssentialsBundle_B__private_featureState,
         (__int64)&Feature_NI_EssentialsBundle_B__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(&Feature_NI_EssentialsBundle_B__private_descriptor, v2, 1LL);
  v3 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
         (unsigned int *)&Feature_NI_EssentialsBundle_C__private_featureState,
         (__int64)&Feature_NI_EssentialsBundle_C__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(&Feature_NI_EssentialsBundle_C__private_descriptor, v3, 1LL);
}
