/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAA_NXZ @ 0x18009A094
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18020C140 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18020D830 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180099BAC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefau.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180099FDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
