/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180116648
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18010969C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180109494 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116218 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@@@details@wil@@QE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Feeds_LockScreenContent>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Feeds_LockScreenContent>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Feeds_LockScreenContent>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
