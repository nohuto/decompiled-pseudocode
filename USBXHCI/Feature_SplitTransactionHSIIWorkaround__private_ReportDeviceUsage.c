/*
 * XREFs of Feature_SplitTransactionHSIIWorkaround__private_ReportDeviceUsage @ 0x1C001EE54
 * Callers:
 *     Endpoint_IsCandidateForSplitTransactionHSIIWorkaround @ 0x1C001EDF8 (Endpoint_IsCandidateForSplitTransactionHSIIWorkaround.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001F210 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C001F488 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_SplitTransactionHSIIWorkaround__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_SplitTransactionHSIIWorkaround__private_featureState;
  if ( (Feature_SplitTransactionHSIIWorkaround__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_SplitTransactionHSIIWorkaround__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_SplitTransactionHSIIWorkaround__private_descriptor,
      v1,
      3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_SplitTransactionHSIIWorkaround__private_descriptor);
  }
  return result;
}
