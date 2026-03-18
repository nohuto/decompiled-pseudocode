/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C003B30C (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00445A0 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005D5B0 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C4240 (NtUserRegisterTouchPadCapable.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E82B6 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     NtUserEnableTouchPad @ 0x1C0158800 (NtUserEnableTouchPad.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C01E8148 (PostEvent.c)
 *     PostThreadEvent @ 0x1C01E825C (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F90E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F9294 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     GetData @ 0x1C0029E80 (GetData.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(
        AtomicExecutionCheck *this,
        __int64 a2,
        __int64 a3)
{
  _DWORD *Data; // rax

  *(_BYTE *)this = 0;
  if ( !gpresUser || !IS_USERCRIT_OWNED_SHARED() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  Data = (_DWORD *)GetData();
  if ( Data )
  {
    ++*Data;
    *(_BYTE *)this = 1;
  }
  return this;
}
