/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x140388E28
 * Callers:
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14067CE9C (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x140A0F624 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A0F6D8 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B538E0 (wil_InitializeFeatureStagingFromBuffers.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B5399C (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 (__fastcall **a1)()))()
{
  while ( a1 < &wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
