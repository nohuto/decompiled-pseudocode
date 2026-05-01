/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ @ 0x1800C0CAC
 * Callers:
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180088B58 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800895A0 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C0150 (-LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1802761E4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802778BC (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1802778BC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BF5BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C03EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
