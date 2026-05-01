/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@QEAA_NXZ @ 0x1800D5ADC
 * Callers:
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180419D0C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D58B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImag.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D5A48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
