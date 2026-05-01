/*
 * XREFs of ?IsPPIEdition@@YA_NXZ @ 0x18000E758
 * Callers:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18000D1C0 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18000E0C0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_::Invoke @ 0x18000E6F0 (CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__-_--Invoke.c)
 *     _lambda_195f040505ee80ab9bd0c27fbd97ae40_::operator() @ 0x1800256A8 (_lambda_195f040505ee80ab9bd0c27fbd97ae40_--operator().c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18003CF80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x18009AE6C (-IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x18009B130 (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     ?IsWindowTabHostEnabled@PCShellImmersiveShellBuilder@@YA_NXZ @ 0x1800C7010 (-IsWindowTabHostEnabled@PCShellImmersiveShellBuilder@@YA_NXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5368 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1800D7140 (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1800D75E8 (-IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8604 (-PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x180210F54 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180217C78 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021BF40 (-SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18027952C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180280554 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_180280554.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1802822FC (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x180296CA8 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x1802CF954 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180340BD8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18039BA14 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18039DBB4 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1803A3830 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A5E50 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6710 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4128 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4318 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4BAC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5338 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C59D4 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18041A09C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434520 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x180434980 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180435040 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 *     ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x180447F8C (-RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ.c)
 *     ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180448280 (-TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1804644C0 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180465F38 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180469AF4 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x18046B23C (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EDC0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1804720D0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180481CBC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180484C80 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x180485760 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180485BF8 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180486380 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x180486C30 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490928 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180490A54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0FA8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsPPIEdition(void)
{
  DWORD v0; // eax

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  return v0 == 119;
}
