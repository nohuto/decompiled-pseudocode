/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140832A7C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x140832AB0 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_OnFeatureConfigurationChange @ 0x1409116D0 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B15550 (wil_InitializeFeatureStagingFromBuffers.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x140832AB0 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x80u) == 0 )
    return *a1;
  else
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
