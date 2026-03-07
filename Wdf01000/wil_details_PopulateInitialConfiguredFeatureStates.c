const wil_details_FeatureDescriptor *wil_details_PopulateInitialConfiguredFeatureStates()
{
  const wil_details_FeatureDescriptor *v0; // rcx
  const wil_details_FeatureDescriptor *v1; // rax
  const wil_details_FeatureDescriptor *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  wil_details_FeatureStateCache result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  v0 = wil_details_featureDescriptors_a;
  while ( 1 )
  {
    v1 = wil_details_FeatureDescriptors_SkipPadding(v0);
    v2 = v1;
    if ( !v1 )
      break;
    changeStamp = 0LL;
    result.exchange64 = 0LL;
    *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
    featureConfiguration.VariantPayload = 0;
    if ( v1->isAlwaysDisabled || v1->isAlwaysEnabled )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = RtlQueryFeatureConfiguration(
             v1->featureId,
             (unsigned __int8)(v1->changeTime - 2) > 1u,
             &changeStamp,
             &featureConfiguration);
      if ( v3 == -2147483614 )
      {
        result.exchange64 = 518LL;
        v4 = 518LL;
        do
        {
          v2->featureStateCache->exchange64 = v4;
          v1 = wil_details_FeatureDescriptors_SkipPadding(v2 + 1);
          v2 = v1;
        }
        while ( v1 );
        return v1;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v3, &featureConfiguration, &result);
    v0 = v2 + 1;
    v2->featureStateCache->exchange64 = result.exchange64;
  }
  return v1;
}
