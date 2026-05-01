/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800D1D7C
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BE218 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B93B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementF.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BF6C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::__private_IsEnabled(
        __int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::ReportUsage(a1, v3);
  return v2;
}
