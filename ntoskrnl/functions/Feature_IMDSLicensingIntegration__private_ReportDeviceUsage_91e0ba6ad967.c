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
