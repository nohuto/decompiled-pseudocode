/*
 * XREFs of Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00266D8
 * Callers:
 *     _lambda_42ee479a8e982a1e9231e91789050ae8_::operator() @ 0x1C036D608 (_lambda_42ee479a8e982a1e9231e91789050ae8_--operator().c)
 *     _lambda_c820ae13d6b077cc6710fe5fbb8b13a3_::operator() @ 0x1C036D794 (_lambda_c820ae13d6b077cc6710fe5fbb8b13a3_--operator().c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_VAIL_Vsync_Projection__private_featureState;
  if ( (Feature_VAIL_Vsync_Projection__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_VAIL_Vsync_Projection__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_VAIL_Vsync_Projection__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_VAIL_Vsync_Projection__private_descriptor);
  }
}
