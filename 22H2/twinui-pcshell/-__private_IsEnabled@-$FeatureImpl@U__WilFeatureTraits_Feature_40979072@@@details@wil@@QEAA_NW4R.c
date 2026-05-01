/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB53C
 * Callers:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_40979072@@@wil@@@details@wil@@SA_NXZ @ 0x1800A7B40 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_40979072@@@wil@@@details@wi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A3110 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A875C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
