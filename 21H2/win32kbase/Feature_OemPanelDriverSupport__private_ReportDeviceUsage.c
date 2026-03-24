/*
 * XREFs of Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CAE50
 * Callers:
 *     DrvSetMonitorBrightness @ 0x1C00783BC (DrvSetMonitorBrightness.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CA9D8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C6F6C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114164 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_OemPanelDriverSupport__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_OemPanelDriverSupport__private_featureState;
  if ( (Feature_OemPanelDriverSupport__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_OemPanelDriverSupport__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_OemPanelDriverSupport__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_OemPanelDriverSupport__private_descriptor);
  }
}
