/*
 * XREFs of Feature_DeliverViaSendMessage__private_ReportDeviceUsage @ 0x1C01679CC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00D37A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C01665E8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_DeliverViaSendMessage__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_DeliverViaSendMessage__private_featureState;
  if ( (Feature_DeliverViaSendMessage__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_DeliverViaSendMessage__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DeliverViaSendMessage__private_descriptor,
      v0,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_DeliverViaSendMessage__private_descriptor);
  }
}
