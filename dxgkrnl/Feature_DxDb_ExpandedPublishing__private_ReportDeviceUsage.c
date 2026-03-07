__int64 Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DxDb_ExpandedPublishing__private_featureState;
  if ( (Feature_DxDb_ExpandedPublishing__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DxDb_ExpandedPublishing__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_DxDb_ExpandedPublishing__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_DxDb_ExpandedPublishing__private_descriptor);
  }
  return result;
}
