/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8
 * Callers:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSendMinRectMessages @ 0x1C000D518 (xxxSendMinRectMessages.c)
 *     xxxGetInputEvent @ 0x1C0047670 (xxxGetInputEvent.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006D360 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopThreadWaiter @ 0x1C0094300 (xxxDesktopThreadWaiter.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxCallCtfHook @ 0x1C00D6FB4 (xxxCallCtfHook.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00DC278 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C00F1D90 (EditionNotifyShellLanguageHook.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 *     xxxSetTrayWindow @ 0x1C0109D38 (xxxSetTrayWindow.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BC8CC (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7270 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     EditionCallAccessibilityHook @ 0x1C01C9700 (EditionCallAccessibilityHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F6280 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C022A73C (xxxRedrawFrameAndHook.c)
 *     xxxIsDragging @ 0x1C0232C4C (xxxIsDragging.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     IsPointerInputHookCall @ 0x1C0109A04 (IsPointerInputHookCall.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxPointerCallHook @ 0x1C01C5F94 (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 Valid; // rcx

  v5 = a4;
  v7 = a1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v8 = SGDGetUserSessionState(a1);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v9)
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  if ( (unsigned int)IsPointerInputHookCall((unsigned int)v5, a3) )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v5, dword_1C031A904[v5]);
  v11 = SGDGetUserSessionState(v10);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( !gbInDestroyHandleTableObjects )
  {
    v15 = SGDGetUserSessionState(v14);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v15 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v16)
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  Valid = *(_QWORD *)(v12 + 8 * v5 + 928);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v12 + 464) + 8 * v5 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v7, a2, a3, 0LL, 0);
}
