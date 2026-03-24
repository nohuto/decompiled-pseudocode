/*
 * XREFs of Feature_MinQMouseAndMiP__private_ReportDeviceUsage @ 0x1C00CDD2C
 * Callers:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00458F4 (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0045EF8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C72FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114434 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_MinQMouseAndMiP__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_MinQMouseAndMiP__private_featureState;
  if ( (Feature_MinQMouseAndMiP__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_MinQMouseAndMiP__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_MinQMouseAndMiP__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_MinQMouseAndMiP__private_descriptor);
  }
}
