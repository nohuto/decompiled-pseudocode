/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ValConf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180116664
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18011408C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmac.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ValConf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180113E64 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ValConf@@@details@wil@@A.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ValConf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801164B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ValConf@@@details@wil@@QEAAX_NW4Reporting.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValConf>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValConf>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ValConf>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
