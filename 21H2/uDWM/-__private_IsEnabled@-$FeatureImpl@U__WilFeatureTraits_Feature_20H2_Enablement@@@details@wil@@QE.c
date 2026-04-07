/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180056D44
 * Callers:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_20H2_Enablement@@@wil@@@details@wil@@SA_NXZ @ 0x180056A94 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_20H2_Enablement@@@wil@@@det.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800563C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056AF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
