/*
 * XREFs of Feature_Brightness3dxgkrnl__private_ReportDeviceUsage @ 0x1C00286A8
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C018B94C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0025174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_Brightness3dxgkrnl__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_Brightness3dxgkrnl__private_featureState;
  if ( (Feature_Brightness3dxgkrnl__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_Brightness3dxgkrnl__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_Brightness3dxgkrnl__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_Brightness3dxgkrnl__private_descriptor);
  }
}
