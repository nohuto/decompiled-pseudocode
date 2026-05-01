/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@QEAA_NXZ @ 0x1801165D0
 * Callers:
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x18011545C (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010928C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116110 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54144259@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54144259>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54144259>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54144259>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
