/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1C00322F0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0032148 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C0032370 (wil_details_UpdateFeatureConfiguredStates.c)
 */

_QWORD *wil_details_OnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
