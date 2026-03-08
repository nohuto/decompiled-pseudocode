/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C0001B4C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C007A070 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C007A24C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1C00A7078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00A7104 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
