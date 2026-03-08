/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140818F14
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x140818F4C (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x140A0F624 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140B538E0 (wil_InitializeFeatureStagingFromBuffers.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x140818F4C (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
  else
    return *a1;
}
