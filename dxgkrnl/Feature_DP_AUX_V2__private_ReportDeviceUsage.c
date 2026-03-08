/*
 * XREFs of Feature_DP_AUX_V2__private_ReportDeviceUsage @ 0x1C0025FB8
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004A830 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_DP_AUX_V2__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_DP_AUX_V2__private_featureState;
  if ( (Feature_DP_AUX_V2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_DP_AUX_V2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_DP_AUX_V2__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_DP_AUX_V2__private_descriptor);
  }
}
