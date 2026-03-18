/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012878 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?CancelForegroundActivate@@YAXXZ @ 0x1C0017BCC (-CancelForegroundActivate@@YAXXZ.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0026FA0 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C004C34C (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C005B640 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXXZ @ 0x1C005D334 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXXZ.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C005E09C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserSetWindowsHookEx @ 0x1C006F550 (NtUserSetWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0097160 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?OnTimer@RapidHPD@@YAXXZ @ 0x1C00A9310 (-OnTimer@RapidHPD@@YAXXZ.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00AC170 (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C00C1260 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1394 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00E3594 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     EditionPushExitingAppForegroundPolicy @ 0x1C00E5000 (EditionPushExitingAppForegroundPolicy.c)
 *     _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C00E51C4 (_anonymous_namespace_--RecordParentPidLegacyPolicy.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E52A0 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     _anonymous_namespace_::ApplyForegroundPolicy @ 0x1C00E55C0 (_anonymous_namespace_--ApplyForegroundPolicy.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 *     _lambda_d6aeea60be8ba0a18c32151e3588814d_::operator() @ 0x1C013B8F8 (_lambda_d6aeea60be8ba0a18c32151e3588814d_--operator().c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AB63C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x1C01ADD10 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01AF7D0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
 *     zzzUnhookWindowsHook @ 0x1C01BBC8C (zzzUnhookWindowsHook.c)
 *     NtUserInjectTouchInput @ 0x1C01D55B0 (NtUserInjectTouchInput.c)
 *     NtUserSetCursorPos @ 0x1C01DB500 (NtUserSetCursorPos.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01ED128 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01ED340 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C023A8A8 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_D(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, va, 4LL, 0LL);
  }
  return result;
}
