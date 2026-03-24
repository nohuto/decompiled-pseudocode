/*
 * XREFs of Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage @ 0x1C00265EC
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022F8CC (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0025174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_EnableGpuPVFor2_4Drivers__private_featureState;
  if ( (Feature_EnableGpuPVFor2_4Drivers__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_EnableGpuPVFor2_4Drivers__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_descriptor);
  }
}
