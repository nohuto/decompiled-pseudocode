/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034774
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     xxxFocusSetInputContext @ 0x1C0034A7C (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034B6C (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034BF4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C003508C (zzzInputFocusReceivedWindowEvent.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rcx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  _QWORD v16[4]; // [rsp+50h] [rbp-28h] BYREF

  v16[2] = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) &= ~0x800u;
  if ( !a2 )
  {
    v12 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v12 + 120) )
      *(_DWORD *)(v12 + 388) |= 0x800u;
  }
  v4 = *(_QWORD *)(a1 + 432);
  v5 = *(__int64 **)(v4 + 112);
  v16[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v16;
  v16[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v4 = *(_QWORD *)(a1 + 432);
  }
  *((_QWORD *)&v14 + 1) = a2;
  *(_QWORD *)&v14 = v4 + 112;
  HMAssignmentLock(&v14);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
    {
      v7 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
      v15 = 0LL;
      v8 = 0;
      v14 = 0LL;
      if ( v7 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread(v7, &v14);
        v7 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
        v8 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v7, a2);
      if ( v8 )
        PopAndFreeW32ThreadLock(&v14);
    }
    v6 = *(_QWORD *)(a1 + 432);
    v9 = v6;
    if ( v6 == gpqForeground && a2 == *(struct tagWND **)(v6 + 112) )
    {
      v6 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v6 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v6, v9);
        v9 = *(_QWORD *)(a1 + 432);
      }
    }
    if ( v5 )
    {
      if ( v9 == gpqForeground )
        zzzInputFocusLostWindowEvent(v5, 2LL);
      xxxSendMessage(v5, 8LL, *(_QWORD *)a2, 0LL);
      v6 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0LL, 0LL);
    }
    if ( a2 == *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, 0);
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 1232LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
      {
        if ( v5 )
          v13 = *v5;
        else
          v13 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v13, 0LL, 1);
      }
      else
      {
        if ( v5 )
          v10 = *v5;
        else
          v10 = 0LL;
        xxxSendMessage(a2, 7LL, v10, 0LL);
      }
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v5, 3LL);
    xxxWindowEvent(0x8005u, 0);
    xxxSendMessage(v5, 8LL, 0LL, 0LL);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0LL, 0LL);
  }
  return ThreadUnlock1(v6);
}
