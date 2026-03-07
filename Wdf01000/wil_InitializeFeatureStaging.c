__int64 __fastcall wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  const wil_details_FeatureDescriptor *v1; // rdx
  int v2; // r9d
  unsigned int exchange; // ecx
  int v4; // eax
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *v6; // rax
  const wil_details_FeatureDescriptor *v7; // rdi
  unsigned int v8; // eax
  unsigned __int64 initialChangeStamp; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  initialChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  v1 = wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  if ( v1 )
  {
    v2 = 0;
    do
    {
      exchange = v1->featureStateCache->exchange;
      if ( (exchange & 0x200) != 0 )
      {
        v4 = 0;
        if ( (exchange & 0x180) != 0 )
          LOBYTE(v4) = (v1->featureStateCache->exchange64 & 0x180) == 256;
        else
          LOBYTE(v4) = v1->isEnabledByDefault != 0;
        _InterlockedXor(
          (volatile signed __int32 *)v1->featureStateCache,
          v2 & 0xFFFFFFBF | (v4 << 6) ^ v1->featureStateCache->exchange64 & 0x40);
      }
      v1 = wil_details_FeatureDescriptors_SkipPadding(v1 + 1);
    }
    while ( v1 );
  }
  for ( i = wil_details_featureDescriptors_a; ; i = v7 + 1 )
  {
    v6 = wil_details_FeatureDescriptors_SkipPadding(i);
    v7 = v6;
    if ( !v6 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v6->featureStateCache, v6);
  }
  if ( !(unsigned int)wil_details_ShouldRegisterFeatureStagingChangeNotification() )
    return v0;
  v8 = RtlRegisterFeatureConfigurationChangeNotification(
         wil_details_ReevaluateOnFeatureConfigurationChange,
         0LL,
         &initialChangeStamp,
         &wil_details_featureChangeNotification);
  if ( v8 )
  {
    wil_details_featureChangeNotification = 0LL;
    return v8;
  }
  return 0LL;
}
