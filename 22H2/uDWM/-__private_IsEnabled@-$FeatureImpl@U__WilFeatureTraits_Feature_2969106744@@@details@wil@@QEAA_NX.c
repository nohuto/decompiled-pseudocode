/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil@@QEAA_NXZ @ 0x180057C80
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BAAB0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057A44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057BEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2969106744>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2969106744>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2969106744>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
