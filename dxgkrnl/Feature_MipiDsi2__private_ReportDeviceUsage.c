/*
 * XREFs of Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C0026CBC
 * Callers:
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1C03CABEC (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03CAD84 (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03CAF54 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C03CB2A8 (-_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_MipiDsi2__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_MipiDsi2__private_featureState;
  if ( (Feature_MipiDsi2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_MipiDsi2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_MipiDsi2__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_MipiDsi2__private_descriptor);
  }
}
