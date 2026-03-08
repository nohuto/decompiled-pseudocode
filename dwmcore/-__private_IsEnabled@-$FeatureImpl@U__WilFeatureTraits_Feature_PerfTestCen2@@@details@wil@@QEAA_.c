/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801165EC
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801153F8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011225C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115814 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
