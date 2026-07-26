/*
 * XREFs of Feature_ScreenON_NAPS__private_ReportDeviceUsage @ 0x1C004017C
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8398 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C003DEAC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C003E11C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_ScreenON_NAPS__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_ScreenON_NAPS__private_featureState;
  if ( (Feature_ScreenON_NAPS__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_ScreenON_NAPS__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&wil_details_featureDescriptors_a, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&wil_details_featureDescriptors_a);
  }
}
