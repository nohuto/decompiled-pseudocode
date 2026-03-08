/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C007A230
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C007A070 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C007A24C (wil_details_UpdateFeatureConfiguredStates.c)
 */

_QWORD *wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
