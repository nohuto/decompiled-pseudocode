/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C00DD800
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0301070 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C030124C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStaging @ 0x1C031D078 (wil_InitializeFeatureStaging.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C031D104 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
