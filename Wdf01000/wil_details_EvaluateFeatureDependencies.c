/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C00B00D8
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C00B0010 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0017930 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00B018C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

const wil_details_FeatureDescriptor *wil_details_EvaluateFeatureDependencies()
{
  const wil_details_FeatureDescriptor *v0; // rdx
  int v1; // r9d
  unsigned int exchange; // r8d
  int v3; // eax
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *result; // rax
  const wil_details_FeatureDescriptor *v6; // rbx

  v0 = wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      exchange = v0->featureStateCache->exchange;
      if ( (exchange & 0x200) != 0 )
      {
        if ( (exchange & 0x180) != 0 )
          v3 = (v0->featureStateCache->exchange64 & 0x180) == 256;
        else
          v3 = v0->isEnabledByDefault != 0;
        _InterlockedXor(
          (volatile signed __int32 *)v0->featureStateCache,
          v1 & 0xFFFFFFBF | (v3 << 6) ^ v0->featureStateCache->exchange64 & 0x40);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 1);
    }
    while ( v0 );
  }
  for ( i = wil_details_featureDescriptors_a; ; i = v6 + 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(result->featureStateCache, result);
  }
  return result;
}
