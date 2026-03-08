/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C039C1F0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C039C13C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C039C228 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C039C228 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
  else
    return *a1;
}
