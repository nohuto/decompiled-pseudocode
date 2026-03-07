__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  char v3; // bl
  __int64 v4; // rdi

  v3 = a1;
  if ( (a1 & 2) != 0 )
  {
    v4 = (unsigned int)a1;
  }
  else
  {
    v4 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           wil_details_featureDescriptors_a,
           a1,
           (__int64)&wil_details_featureDescriptors_a);
    v3 = v4;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a1, v4, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v4, a2);
  }
  return v3 & 1;
}
