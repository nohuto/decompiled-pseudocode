/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0
 * Callers:
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180010F24 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800120FC (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007D7D0 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007DB10 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     ?ShowWithStart@SearchAppExperienceManager@@UEAAJE@Z @ 0x18008B660 (-ShowWithStart@SearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18008C2C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@SearchAppExperienceManager@@UEAAJXZ @ 0x18008CB80 (-Uncloak@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?OnViewUncloaked@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BA330 (-OnViewUncloaked@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?MinimizeToBoxMode@SearchAppExperienceManager@@UEAAJXZ @ 0x180265680 (-MinimizeToBoxMode@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x180265970 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266474 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266678 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x180266750 (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A382C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActiva.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8AF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
