/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140374EA4
 * Callers:
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14067EE8C (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x140A12370 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A12424 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B3BFE4 (wil_InitializeFeatureStagingFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B3C0A0 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 *a1)
{
  while ( a1 < &wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
