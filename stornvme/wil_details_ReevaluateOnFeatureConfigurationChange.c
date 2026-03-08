/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C0034300
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C003413C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C003431C (wil_details_UpdateFeatureConfiguredStates.c)
 */

_QWORD *wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
