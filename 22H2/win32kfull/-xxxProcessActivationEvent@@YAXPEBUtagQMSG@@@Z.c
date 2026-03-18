/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C004C1E8 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxCancelTracking @ 0x1C005DB7C (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C005E09C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C0066B58 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzActiveCursorTracking @ 0x1C01B7390 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  struct tagWND *v11; // rbx
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3742LL);
  v3 = *((_QWORD *)a1 + 5);
  v13 = 0LL;
  v12 = 0LL;
  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v3 )
  {
    LOBYTE(a2) = 1;
    v10 = HMValidateHandleNoSecure(v3, a2);
    v11 = (struct tagWND *)v10;
    if ( !v10 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v10 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3809LL);
    ThreadLock(v11, &v12);
    if ( gpqForeground )
    {
      if ( v11 == *(struct tagWND **)(v4 + 128) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage(v11, v4 == gpqForeground, 0LL);
        if ( v4 == gpqForeground )
        {
          xxxUpdateTray(v11);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos(v11, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  v11,
                  *((unsigned int *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v8 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v11);
      }
    }
    else
    {
      xxxSetForegroundWindow2((__int64)v11, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0x20) != 0 )
      PostMessage(v11, 274LL, 61728LL, 0LL);
    goto LABEL_27;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  v5 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v6 = *(struct tagWND **)(v5 + 128);
    if ( v6 )
    {
      if ( v5 == gpqForeground )
      {
        ThreadLock(*(_QWORD *)(v5 + 128), &v12);
        if ( *(_QWORD *)(v5 + 120) )
          zzzInputFocusReceivedWindowEvent(7u);
        anonymous_namespace_::xxxSendNCActivateMessage(v6, 1uLL, 0LL);
        xxxUpdateTray(v6);
        xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_27:
        ThreadUnlock1(v8, v7, v9);
        return;
      }
    }
  }
  if ( v5 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
