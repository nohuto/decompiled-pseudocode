/*
 * XREFs of ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1C00D0D28
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C00BCE80 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012DA74 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void ReportUsageForAllVelocityKeys(void)
{
  __int64 CachedFeatureEnabledState; // rax
  __int64 v1; // rax

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_NI_EssentialsBundle_A__private_featureState,
                                (__int64)&Feature_NI_EssentialsBundle_A__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_NI_EssentialsBundle_A__private_descriptor,
    CachedFeatureEnabledState,
    1LL);
  v1 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
         (unsigned int *)&Feature_NI_EssentialsBundle_C__private_featureState,
         (__int64)&Feature_NI_EssentialsBundle_C__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(&Feature_NI_EssentialsBundle_C__private_descriptor, v1, 1LL);
}
