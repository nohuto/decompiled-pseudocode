/*
 * XREFs of Feature_DelayedForceEviction__private_ReportDeviceUsage @ 0x1C0019AE0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00E2184 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0019FFC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C001A274 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_DelayedForceEviction__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DelayedForceEviction__private_featureState;
  if ( (Feature_DelayedForceEviction__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DelayedForceEviction__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_DelayedForceEviction__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_DelayedForceEviction__private_descriptor);
  }
  return result;
}
