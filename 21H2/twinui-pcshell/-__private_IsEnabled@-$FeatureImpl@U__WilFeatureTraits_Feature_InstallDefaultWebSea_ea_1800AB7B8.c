/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@QEAA_NXZ @ 0x1800AB7B8
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18007D920 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3A54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchP.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8C14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
