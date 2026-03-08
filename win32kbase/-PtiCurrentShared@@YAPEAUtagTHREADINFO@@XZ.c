/*
 * XREFs of ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     NtUserVkKeyScanEx @ 0x1C0006E40 (NtUserVkKeyScanEx.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C000C154 (UserGetDesktopIdForCurrentThread.c)
 *     _GetDC @ 0x1C000D070 (_GetDC.c)
 *     _GetKeyNameText @ 0x1C00114E0 (_GetKeyNameText.c)
 *     NtUserQueryDisplayConfig @ 0x1C0021A60 (NtUserQueryDisplayConfig.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C003B5D4 (GetCurrentThreadCompositedDpi.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 *     UserIsWindowGdiScaled @ 0x1C003E220 (UserIsWindowGdiScaled.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x1C004F5B0 (NtUserGetHDevName.c)
 *     LeaveCrit @ 0x1C004F860 (LeaveCrit.c)
 *     ValidateHmenu @ 0x1C00796D0 (ValidateHmenu.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C007D560 (CoalesceInputSourceMouseMoves.c)
 *     NtUserGetKeyboardState @ 0x1C007F9C0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C007FBB0 (NtUserGetAsyncKeyState.c)
 *     NtUserMapVirtualKeyEx @ 0x1C00818E0 (NtUserMapVirtualKeyEx.c)
 *     _GetKeyboardLayout @ 0x1C00827AC (_GetKeyboardLayout.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0084240 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?Init@InputThreadState@CInputThreadBase@@QEAAXXZ @ 0x1C009AD58 (-Init@InputThreadState@CInputThreadBase@@QEAAXXZ.c)
 *     NtUserSetInputServiceState @ 0x1C00BD570 (NtUserSetInputServiceState.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     ?IsHandleILChecksEnabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C00D3CB0 (-IsHandleILChecksEnabledForCurrentThread@tagTHREADINFO@@SA_NXZ.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00D83A0 (UserIsCurrentThreadGdiScaled.c)
 *     IsPointerDeviceAccessible @ 0x1C00ED350 (IsPointerDeviceAccessible.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00F1DF6 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C0156570 (-IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ.c)
 *     UserGetCurrentDesktopId @ 0x1C0157144 (UserGetCurrentDesktopId.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1C0157830 (ValidateHbwndOwnedByCallingThread.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0169140 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1C016BB10 (NtMITPostWindowEventMessage.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C016F1A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetPointerInfoList @ 0x1C01706B0 (NtUserGetPointerInfoList.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C01718B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0173440 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01746E0 (NtUserInjectPointerInput.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0175280 (NtUserIsMouseInPointerEnabled.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0175990 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0176950 (NtUserSetFeatureReportResponse.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01F7774 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTHREADINFO *__fastcall PtiCurrentShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(struct tagTHREADINFO **)ThreadWin32Thread;
  return (struct tagTHREADINFO *)v5;
}
