__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v5 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = wil_details_featureDescriptors_a; ; i = v2 + 56 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      return v0;
    if ( !v2[29] && !v2[30] && !v2[28] )
      break;
  }
  v3 = RtlRegisterFeatureConfigurationChangeNotification(
         wil_details_ReevaluateOnFeatureConfigurationChange,
         0LL,
         &v5,
         &wil_details_featureChangeNotification);
  if ( v3 )
  {
    wil_details_featureChangeNotification = 0LL;
    return v3;
  }
  return 0LL;
}
