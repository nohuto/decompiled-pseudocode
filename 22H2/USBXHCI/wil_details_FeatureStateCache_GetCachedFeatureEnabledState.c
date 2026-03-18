/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C001F398
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C001F4CC (wil_details_GetCurrentFeatureEnabledState.c)
 *     Feature_USB4PowerImprovements__private_IsEnabled @ 0x1C001F694 (Feature_USB4PowerImprovements__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001F3CC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
