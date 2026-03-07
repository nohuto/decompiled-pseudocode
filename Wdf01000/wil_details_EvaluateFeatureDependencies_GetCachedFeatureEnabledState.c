wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        const wil_details_FeatureDescriptor *descriptor)
{
  if ( (featureState->exchange & 0x200) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
             featureState,
             (wil_details_FeatureStateCache)featureState->exchange,
             descriptor);
  return (wil_details_FeatureStateCache)featureState->exchange;
}
