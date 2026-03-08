/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C00CC088
 * Callers:
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1C00DD738 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0155280 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0155180 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
