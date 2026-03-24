/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900
 * Callers:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004818 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000E488 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetTrayWindow @ 0x1C003CF18 (xxxSetTrayWindow.c)
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     xxxRedrawTitle @ 0x1C00469E0 (xxxRedrawTitle.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxCallCtfHook @ 0x1C0052914 (xxxCallCtfHook.c)
 *     xxxGetInputEvent @ 0x1C00530F0 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDesktopThreadWaiter @ 0x1C00D9FF4 (xxxDesktopThreadWaiter.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxNotifyIMEStatus @ 0x1C0113928 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C0124CA8 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C0133440 (EditionNotifyShellLanguageHook.c)
 *     xxxRedrawFrameAndHook @ 0x1C0161CA0 (xxxRedrawFrameAndHook.c)
 *     NtUserCallMsgFilter @ 0x1C0162200 (NtUserCallMsgFilter.c)
 *     EditionCallAccessibilityHook @ 0x1C01D7790 (EditionCallAccessibilityHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6A44 (xxxCallJournalPlaybackHook.c)
 *     xxxCallMsgFilter @ 0x1C01E6F9C (xxxCallMsgFilter.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F16AC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 *     xxxIsDragging @ 0x1C0248D98 (xxxIsDragging.c)
 * Callees:
 *     PhkNextValid @ 0x1C0020370 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxPointerCallHook @ 0x1C01F048C (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(int a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 Valid; // rcx

  v4 = a2;
  v5 = a1;
  if ( a4 == 3 )
    goto LABEL_2;
  if ( a4 == 4 )
  {
    v6 = *(_DWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    if ( a4 )
    {
      if ( a4 != -1 && a4 != 6 )
      {
        if ( a4 != 12 )
        {
          v6 = 0;
          LOWORD(v7) = 0;
          goto LABEL_5;
        }
        v6 = *(_DWORD *)(a3 + 24);
        goto LABEL_3;
      }
LABEL_2:
      v6 = *(_DWORD *)(a3 + 8);
LABEL_3:
      v7 = *(_QWORD *)(a3 + 16);
      goto LABEL_4;
    }
    v6 = *(_DWORD *)a3;
    LOWORD(v7) = 0;
  }
LABEL_4:
  if ( v6 - 577 > 3 )
  {
LABEL_5:
    if ( v6 < 0x245 || v6 > 0x257 || v6 == 589 )
      goto LABEL_6;
  }
  if ( v6 != 595 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02ED294[a4]);
LABEL_6:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(a1, v4, a3, dword_1C02ED294[a4]);
  Valid = *(_QWORD *)(gptiCurrent + 8LL * a4 + 920);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 8LL * a4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v5, v4, a3, 0LL, 0);
}
