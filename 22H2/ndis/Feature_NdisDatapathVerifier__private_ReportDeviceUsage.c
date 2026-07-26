/*
 * XREFs of Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x1C003DB14
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0145710 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C003DEAC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C003E11C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_NdisDatapathVerifier__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_NdisDatapathVerifier__private_featureState;
  if ( (Feature_NdisDatapathVerifier__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_NdisDatapathVerifier__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_NdisDatapathVerifier__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_NdisDatapathVerifier__private_descriptor);
  }
  return result;
}
