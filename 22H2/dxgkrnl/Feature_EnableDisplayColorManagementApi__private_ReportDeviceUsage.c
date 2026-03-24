/*
 * XREFs of Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025C44
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C015F084 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0223100 (DxgkAdjustFullscreenGamma.c)
 *     ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02FC4F4 (-_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0025174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_EnableDisplayColorManagementApi__private_featureState;
  if ( (Feature_EnableDisplayColorManagementApi__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_EnableDisplayColorManagementApi__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnableDisplayColorManagementApi__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_EnableDisplayColorManagementApi__private_descriptor);
  }
}
