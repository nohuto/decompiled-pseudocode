/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x180056D0C
 * Callers:
 *     ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x180056A08 (-IsWindowTab@CWindowData@@QEAA_NXZ.c)
 *     ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x180056F8C (-GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180057000 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z @ 0x18005767C (-SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x180057CCC (-GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056518 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056B60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
