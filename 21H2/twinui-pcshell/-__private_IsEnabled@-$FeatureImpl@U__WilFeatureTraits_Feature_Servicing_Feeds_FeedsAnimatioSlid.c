/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight@@@details@wil@@QEAA_NXZ @ 0x1800C5E58
 * Callers:
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4BB8 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C2BA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAni.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C5668 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRig.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
