/*
 * XREFs of Feature_CopyDriverToSystem32__private_ReportDeviceUsage @ 0x1C00260C8
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0305F44 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_CopyDriverToSystem32__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_CopyDriverToSystem32__private_featureState;
  if ( (Feature_CopyDriverToSystem32__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_CopyDriverToSystem32__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&wil_details_featureDescriptors_a, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&wil_details_featureDescriptors_a);
  }
}
