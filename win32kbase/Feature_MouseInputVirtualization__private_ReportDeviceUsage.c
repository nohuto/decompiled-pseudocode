/*
 * XREFs of Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00E11F8
 * Callers:
 *     IsMouseIVEnabled @ 0x1C007AFD0 (IsMouseIVEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_MouseInputVirtualization__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_MouseInputVirtualization__private_featureState;
  if ( (Feature_MouseInputVirtualization__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_MouseInputVirtualization__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_MouseInputVirtualization__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_MouseInputVirtualization__private_descriptor);
  }
}
