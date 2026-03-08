/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C0017930
 * Callers:
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1C00B002C (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00B00D8 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00B029C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1C00BD0AC (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00BD1B8 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const wil_details_FeatureDescriptor *p)
{
  while ( 1 )
  {
    if ( p >= wil_details_featureDescriptors_a )
      return 0LL;
    if ( p->featureStateCache )
      break;
    p = (const wil_details_FeatureDescriptor *)((char *)p + 8);
  }
  return p;
}
