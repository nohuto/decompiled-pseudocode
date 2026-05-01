/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList@@@details@wil@@QEAA_NXZ @ 0x1800AB6A4
 * Callers:
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3728 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8A6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddBingPackageNameToSysprepIgnoreList>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
