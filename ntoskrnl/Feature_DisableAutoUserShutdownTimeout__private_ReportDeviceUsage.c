/*
 * XREFs of Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x14040B7EC
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownScenarioInitialize @ 0x140B46CF0 (PopUserShutdownScenarioInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_DisableAutoUserShutdownTimeout__private_featureState;
  if ( (Feature_DisableAutoUserShutdownTimeout__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_DisableAutoUserShutdownTimeout__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DisableAutoUserShutdownTimeout__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_DisableAutoUserShutdownTimeout__private_descriptor);
  }
}
