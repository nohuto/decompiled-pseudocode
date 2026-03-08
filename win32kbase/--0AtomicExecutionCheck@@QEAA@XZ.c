/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     xxxInitProcessInfo @ 0x1C0070EFC (xxxInitProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x1C0079C40 (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C007A39C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00C8EE0 (-ResetSystemColors@@YAXXZ.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00D0D70 (NtUserRegisterTouchPadCapable.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DA244 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00F295E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     NtUserEnableTouchPad @ 0x1C016ECE0 (NtUserEnableTouchPad.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0170EE0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0177910 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C02181A8 (PostEvent.c)
 *     PostThreadEvent @ 0x1C02182E0 (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C022AC34 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C022AE68 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C023E7B4 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(
        AtomicExecutionCheck *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentThreadWin32Thread; // rax
  AtomicExecutionCheck *result; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-38h]

  *(_BYTE *)this = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(this, a2, a3, a4) + 8)
    || (v9 = SGDGetUserSessionState(v6, v5, v7, v8), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v9 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, BugCheckParameter4);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
