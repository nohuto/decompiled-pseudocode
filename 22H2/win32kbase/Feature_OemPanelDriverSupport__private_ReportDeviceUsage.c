/*
 * XREFs of Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CB3A0
 * Callers:
 *     DrvSetMonitorBrightness @ 0x1C0079A9C (DrvSetMonitorBrightness.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CAF28 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C72FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114434 (wil_details_FeatureReporting_ReportUsageToService.c)
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
