/*
 * XREFs of Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00E01B0
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0086990 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088EA0 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ShouldEnableInputVirtualization @ 0x1C00982F4 (ShouldEnableInputVirtualization.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C0E0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_InputVirtualization__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_InputVirtualization__private_featureState;
  if ( (Feature_InputVirtualization__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_InputVirtualization__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_InputVirtualization__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_InputVirtualization__private_descriptor);
  }
}
