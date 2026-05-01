/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@QEAA_NXZ @ 0x1800AB5B4
 * Callers:
 *     ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6D98 (-GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3318 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_47503639@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_47503639>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_47503639>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_47503639>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
