/*
 * XREFs of ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801BCAE8
 * Callers:
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800493E0 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C20F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18045A370 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18045AA30 (-DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x18045BD80 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18045D4C0 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800974E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 */

char __fastcall CDesktopPositioner::HasWindowingEnvironmentManager(CDesktopPositioner *this, __int64 a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    a3);
  return 1;
}
