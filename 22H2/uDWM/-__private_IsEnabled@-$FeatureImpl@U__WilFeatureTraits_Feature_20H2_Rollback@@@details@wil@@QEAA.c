/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180056CD0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180056720 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detai.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056414 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056AD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Rollback>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
