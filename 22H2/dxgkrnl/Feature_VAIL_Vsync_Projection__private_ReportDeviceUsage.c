/*
 * XREFs of Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C0026E44
 * Callers:
 *     _lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_::operator() @ 0x1C0167720 (_lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_--operator().c)
 *     _lambda_e7624565a55af25c5c5aa1d22c9a7051_::operator() @ 0x1C016798C (_lambda_e7624565a55af25c5c5aa1d22c9a7051_--operator().c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00245B0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024828 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
