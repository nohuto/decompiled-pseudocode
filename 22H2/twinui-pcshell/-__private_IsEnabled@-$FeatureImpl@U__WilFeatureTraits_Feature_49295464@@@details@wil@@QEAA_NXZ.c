/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49295464@@@details@wil@@QEAA_NXZ @ 0x1800B9F10
 * Callers:
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x1800B1478 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78B4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49295464@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B2C14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49295464@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49295464@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B6C9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49295464@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49295464>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49295464>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49295464>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
