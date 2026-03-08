/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14067CE80
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x140A0F624 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A0F6D8 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 wil_details_ReevaluateOnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
