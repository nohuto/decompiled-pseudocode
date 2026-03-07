void Feature_CursorDeadzoneJump__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_CursorDeadzoneJump__private_featureState;
  if ( (Feature_CursorDeadzoneJump__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_CursorDeadzoneJump__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_CursorDeadzoneJump__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_CursorDeadzoneJump__private_descriptor);
  }
}
