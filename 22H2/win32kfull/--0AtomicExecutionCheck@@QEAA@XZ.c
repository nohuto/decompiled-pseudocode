/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000DF3C (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C00101F0 (NtUserGetLayeredWindowAttributes.c)
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     NtUserSetActivationFilter @ 0x1C0011E00 (NtUserSetActivationFilter.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0013EE0 (NtUserCopyAcceleratorTable.c)
 *     xxxCompositedPaint @ 0x1C0016544 (xxxCompositedPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserDrawIconEx @ 0x1C0028220 (NtUserDrawIconEx.c)
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     NtUserShellRegisterHotKey @ 0x1C0041040 (NtUserShellRegisterHotKey.c)
 *     NtUserUnregisterHotKey @ 0x1C0042B50 (NtUserUnregisterHotKey.c)
 *     NtUserRegisterHotKey @ 0x1C0043150 (NtUserRegisterHotKey.c)
 *     NtUserRegisterUserApiHook @ 0x1C00494C0 (NtUserRegisterUserApiHook.c)
 *     NtUserRegisterDManipHook @ 0x1C0049760 (NtUserRegisterDManipHook.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C004AA20 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C004C7AC (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     NtUserSetGestureConfig @ 0x1C0051290 (NtUserSetGestureConfig.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C005A99C (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00603F4 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     NtUserDestroyMenu @ 0x1C0061490 (NtUserDestroyMenu.c)
 *     SendDwmIconChange @ 0x1C00625D0 (SendDwmIconChange.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     NtUserUnhookWinEvent @ 0x1C006F080 (NtUserUnhookWinEvent.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0094D9C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     NtUserRegisterRawInputDevices @ 0x1C009EA80 (NtUserRegisterRawInputDevices.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2F0C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserUpdateInputContext @ 0x1C00A7070 (NtUserUpdateInputContext.c)
 *     SuspendThreadQueue @ 0x1C00A7F30 (SuspendThreadQueue.c)
 *     NtUserSetMenuDefaultItem @ 0x1C00A8C30 (NtUserSetMenuDefaultItem.c)
 *     ?OnTimer@RapidHPD@@YAXXZ @ 0x1C00A9310 (-OnTimer@RapidHPD@@YAXXZ.c)
 *     NtUserGetPointerDevices @ 0x1C00AB820 (NtUserGetPointerDevices.c)
 *     xxxCsDdeInitialize @ 0x1C00AC42C (xxxCsDdeInitialize.c)
 *     NtUserGetPointerDeviceRects @ 0x1C00AC770 (NtUserGetPointerDeviceRects.c)
 *     _GetPointerDeviceRects @ 0x1C00AC894 (_GetPointerDeviceRects.c)
 *     NtUserBuildHimcList @ 0x1C00B0140 (NtUserBuildHimcList.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C00B3960 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserSetWindowStationUser @ 0x1C00B5B00 (NtUserSetWindowStationUser.c)
 *     NtUserSetTaskmanWindow @ 0x1C00BA290 (NtUserSetTaskmanWindow.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BAFA0 (NtUserSetBrokeredForeground.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C00BFD54 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C00BFF48 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D04DC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     UserJobCallout @ 0x1C00E2D70 (UserJobCallout.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01159A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     NtUserKillTimer @ 0x1C011B3E0 (NtUserKillTimer.c)
 *     NtUserCanCurrentThreadChangeForeground @ 0x1C013C5D0 (NtUserCanCurrentThreadChangeForeground.c)
 *     NtUserSetMaxTouchpadSensitivity @ 0x1C013C620 (NtUserSetMaxTouchpadSensitivity.c)
 *     ProcessHidRawInput @ 0x1C014EAA0 (ProcessHidRawInput.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150B38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     NtUserGetRawInputData @ 0x1C01543B0 (NtUserGetRawInputData.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0154660 (NtUserGetRawInputDeviceList.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     HideAutorunCursor @ 0x1C01A9030 (HideAutorunCursor.c)
 *     EditionIVSyncForeground @ 0x1C01AE4C0 (EditionIVSyncForeground.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B5194 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B6350 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01BC7A0 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzAnimateFade @ 0x1C01BD378 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01BD5FC (zzzStartSonar.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01BF9E0 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01CBE48 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     NtUserAssociateInputContext @ 0x1C01CCC50 (NtUserAssociateInputContext.c)
 *     NtUserBlockInput @ 0x1C01CCF30 (NtUserBlockInput.c)
 *     NtUserCheckMenuItem @ 0x1C01CD620 (NtUserCheckMenuItem.c)
 *     NtUserClearForeground @ 0x1C01CD7F0 (NtUserClearForeground.c)
 *     NtUserDestroyInputContext @ 0x1C01CE5C0 (NtUserDestroyInputContext.c)
 *     NtUserGetGestureConfig @ 0x1C01D12B0 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D18B0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C01D2B50 (NtUserGetOwnerTransformedMonitorRect.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C01D2C80 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetPointerDevice @ 0x1C01D2DA0 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C01D2EB0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C01D30A0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D3540 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01D38B0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01D3D60 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C01D4F40 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C01D52A0 (NtUserInjectGesture.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01D93A0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserRegisterForTooltipDismissNotification @ 0x1C01D9640 (NtUserRegisterForTooltipDismissNotification.c)
 *     NtUserSetCalibrationData @ 0x1C01DA720 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C01DB8A0 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C01DBB30 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C01DC170 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C01DC250 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C01DC540 (NtUserSetObjectInformation.c)
 *     NtUserSetProgmanWindow @ 0x1C01DC900 (NtUserSetProgmanWindow.c)
 *     NtUserShellMigrateWindow @ 0x1C01DDCB0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 *     NtUserUnregisterUserApiHook @ 0x1C01DF320 (NtUserUnregisterUserApiHook.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C01E437C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3C68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021F0A8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FFA0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0224FD4 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 *     ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C023B0D4 (-SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D940 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PERESOURCE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentThreadWin32Thread; // rax
  AtomicExecutionCheck *result; // rax

  *(_BYTE *)this = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(this) + 8)
    || (v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v3, v2, v4, v5),
        !ExIsResourceAcquiredSharedLite(*v6)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
