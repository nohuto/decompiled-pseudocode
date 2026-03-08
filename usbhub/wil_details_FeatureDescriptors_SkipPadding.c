/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C0022AE0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00730A0 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C007327C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1C0075078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0075104 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_a )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
