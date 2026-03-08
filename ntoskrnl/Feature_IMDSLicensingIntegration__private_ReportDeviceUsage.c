/*
 * XREFs of Feature_IMDSLicensingIntegration__private_ReportDeviceUsage @ 0x140411744
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_IMDSLicensingIntegration__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_IMDSLicensingIntegration__private_featureState;
  if ( (Feature_IMDSLicensingIntegration__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_IMDSLicensingIntegration__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_IMDSLicensingIntegration__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_IMDSLicensingIntegration__private_descriptor);
  }
}
