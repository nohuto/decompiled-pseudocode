/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0034078
 * Callers:
 *     DumpPreInitialize @ 0x1C000E8C0 (DumpPreInitialize.c)
 *     StorNVMe_wil_init @ 0x1C000FC84 (StorNVMe_wil_init.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0032148 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C003230C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00340BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx

  RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification();
  return v0;
}
