/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@QEAA_NXZ @ 0x1800BA0A8
 * Callers:
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FC0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B3044 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B6EE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56309635>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56309635>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56309635>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
