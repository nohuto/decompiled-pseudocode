/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800C0C4C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800BFB68 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BF59C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C03CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
