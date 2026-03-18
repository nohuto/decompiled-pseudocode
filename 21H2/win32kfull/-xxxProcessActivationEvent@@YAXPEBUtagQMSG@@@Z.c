/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00DCB94 (xxxCancelTracking.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     zzzActiveCursorTracking @ 0x1C01DD5E8 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  struct tagWND *v11; // rdi
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = *((_QWORD *)a1 + 5);
  v13 = 0LL;
  v12 = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v2 )
  {
    v4 = HMValidateHandleNoSecure(v2, 1);
    v6 = (struct tagWND *)v4;
    if ( !v4 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v4 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    ThreadLock((__int64)v6, (__int64 *)&v12);
    if ( gpqForeground )
    {
      if ( v6 == *(struct tagWND **)(v3 + 120) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage(v6, v3 == gpqForeground);
        if ( v3 == gpqForeground )
        {
          xxxUpdateTray(v6);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(v6, *((_DWORD *)a1 + 8), *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v8 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v6);
      }
    }
    else
    {
      xxxSetForegroundWindow2((__int64)v6, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x20) != 0 )
      PostMessage((int)v6, 274, 61728, 0);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL);
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v11 = *(struct tagWND **)(v10 + 120);
    if ( v11 )
    {
      if ( v10 == gpqForeground )
      {
        ThreadLock(*(_QWORD *)(v10 + 120), (__int64 *)&v12);
        if ( *(_QWORD *)(v10 + 112) )
          zzzInputFocusReceivedWindowEvent(7u);
        anonymous_namespace_::xxxSendNCActivateMessage(v11, 1LL);
        xxxUpdateTray(v11);
        xxxSetWindowPos(v11, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v8, v7, v9);
        return;
      }
    }
  }
  if ( v10 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
