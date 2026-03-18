/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSendMinRectMessages @ 0x1C000E188 (xxxSendMinRectMessages.c)
 *     xxxRedrawTitle @ 0x1C001F9E4 (xxxRedrawTitle.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDesktopThreadWaiter @ 0x1C006A140 (xxxDesktopThreadWaiter.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     xxxSetTrayWindow @ 0x1C0096ECC (xxxSetTrayWindow.c)
 *     xxxCallCtfHook @ 0x1C00A0F14 (xxxCallCtfHook.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00A61F8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C00B9EA0 (EditionNotifyShellLanguageHook.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxGetInputEvent @ 0x1C011DA20 (xxxGetInputEvent.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCallMsgFilter @ 0x1C015208E (xxxCallMsgFilter.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C6110 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     EditionCallAccessibilityHook @ 0x1C01C85A0 (EditionCallAccessibilityHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F50B4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0227A1C (xxxRedrawFrameAndHook.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     IsPointerInputHookCall @ 0x1C00D32E4 (IsPointerInputHookCall.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxPointerCallHook @ 0x1C01C4E30 (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  PERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PERESOURCE *v14; // rax
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PERESOURCE *v21; // rax
  __int64 Valid; // rcx

  v5 = (int)a4;
  v7 = a1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v8 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v8) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL()
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  if ( (unsigned int)IsPointerInputHookCall((unsigned int)v5, a3) )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v5, dword_1C0318FD4[v5]);
  v14 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v10, v9, v11, v12);
  if ( !ExIsResourceAcquiredSharedLite(*v14) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  if ( !gbInDestroyHandleTableObjects )
  {
    v21 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v18, v17, v19, v20);
    if ( ExIsResourceAcquiredExclusiveLite(*v21) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL()
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  Valid = *(_QWORD *)(v15 + 8 * v5 + 928);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v15 + 464) + 8 * v5 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v7, a2, a3, 0LL, 0);
}
