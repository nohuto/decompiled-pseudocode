/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB778
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A5900 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSys.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3A54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchP.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8C14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
