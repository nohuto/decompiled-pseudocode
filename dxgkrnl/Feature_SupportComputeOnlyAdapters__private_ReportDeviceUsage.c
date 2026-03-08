/*
 * XREFs of Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C00245D8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_SupportComputeOnlyAdapters__private_featureState;
  if ( (Feature_SupportComputeOnlyAdapters__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_SupportComputeOnlyAdapters__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_SupportComputeOnlyAdapters__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_SupportComputeOnlyAdapters__private_descriptor);
  }
  return result;
}
