/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0022C5C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C009DE3C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     xxxCancelTracking @ 0x1C00D22FC (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzActiveCursorTracking @ 0x1C01B8530 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rbx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  struct tagWND *v10; // rbx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3654LL);
  v2 = *((_QWORD *)a1 + 5);
  v12 = 0LL;
  v11 = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v2 )
  {
    v9 = HMValidateHandleNoSecure(v2, 1);
    v10 = (struct tagWND *)v9;
    if ( !v9 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v9 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3721LL);
    ThreadLock(v10, &v11);
    if ( gpqForeground )
    {
      if ( v10 == *(struct tagWND **)(v3 + 128) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage(v10, v3 == gpqForeground);
        if ( v3 == gpqForeground )
        {
          xxxUpdateTray(v10);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos(v10, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(v10, *((_DWORD *)a1 + 8), *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v7 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v10);
      }
    }
    else
    {
      xxxSetForegroundWindow2((__int64)v10, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 0x20) != 0 )
      PostMessage(v10, 274LL, 61728LL, 0LL);
    goto LABEL_27;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v5 = *(struct tagWND **)(v4 + 128);
    if ( v5 )
    {
      if ( v4 == gpqForeground )
      {
        ThreadLock(*(_QWORD *)(v4 + 128), &v11);
        if ( *(_QWORD *)(v4 + 120) )
          zzzInputFocusReceivedWindowEvent(7u);
        anonymous_namespace_::xxxSendNCActivateMessage(v5, 1LL);
        xxxUpdateTray(v5);
        xxxSetWindowPos(v5, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_27:
        ThreadUnlock1(v7, v6, v8);
        return;
      }
    }
  }
  if ( v4 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
