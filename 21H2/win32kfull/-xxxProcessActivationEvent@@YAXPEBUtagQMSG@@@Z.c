/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C003508C (zzzInputFocusReceivedWindowEvent.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003A730 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C003A884 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AF8C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DDFC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C003DE90 (xxxCancelTracking.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzActiveCursorTracking @ 0x1C01E2B98 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rsi
  struct tagWND *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3566LL);
  v2 = *((_QWORD *)a1 + 5);
  v17 = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v2 )
  {
    v4 = HMValidateHandleNoSecure(v2, 1);
    v5 = v4;
    if ( !v4 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v4 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3633LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v15 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
    v16 = v5;
    HMLockObject(v5);
    if ( gpqForeground )
    {
      if ( v5 == *(_QWORD *)(v3 + 120) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v5, v3 == gpqForeground, 0LL);
        if ( v3 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v5);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  (struct tagWND *)v5,
                  *((_DWORD *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v7 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v5);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v5, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      PostMessage(v5, 274, 61728, 0);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v13 = *(struct tagWND **)(v12 + 120);
    if ( v13 )
    {
      if ( v12 == gpqForeground )
      {
        v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v15 = *(_QWORD *)(v14 + 416);
        *(_QWORD *)(v14 + 416) = &v15;
        v16 = (__int64)v13;
        HMLockObject(v13);
        if ( *(_QWORD *)(v12 + 112) )
          zzzInputFocusReceivedWindowEvent();
        anonymous_namespace_::xxxSendNCActivateMessage(v13, 1LL, 0LL);
        xxxUpdateTray(v13);
        xxxSetWindowPos(v13, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v7);
        return;
      }
    }
  }
  if ( v12 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate(v9, v8, v10, v11);
}
