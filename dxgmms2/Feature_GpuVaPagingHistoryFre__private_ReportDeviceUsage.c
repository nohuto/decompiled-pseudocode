/*
 * XREFs of Feature_GpuVaPagingHistoryFre__private_ReportDeviceUsage @ 0x1C001A558
 * Callers:
 *     ?ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00C1DD0 (-ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0019FFC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C001A274 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_GpuVaPagingHistoryFre__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_GpuVaPagingHistoryFre__private_featureState;
  if ( (Feature_GpuVaPagingHistoryFre__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_GpuVaPagingHistoryFre__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&wil_details_featureDescriptors_a, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&wil_details_featureDescriptors_a);
  }
}
