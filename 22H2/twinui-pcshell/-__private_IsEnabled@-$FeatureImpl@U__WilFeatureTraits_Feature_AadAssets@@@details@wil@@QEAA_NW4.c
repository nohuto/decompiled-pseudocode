/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AadAssets@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801272C8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180121F70 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBacku.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AadAssets@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18012162C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AadAssets@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AadAssets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180125394 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AadAssets@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AadAssets>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AadAssets>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AadAssets>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
