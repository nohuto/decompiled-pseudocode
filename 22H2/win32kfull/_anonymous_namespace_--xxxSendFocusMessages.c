/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C004BB10 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C004BD48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C004C1E8 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1C013A9F0 (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1C013AA2C (zzzDelegateInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, struct tagWND *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]

  v15[2] = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 396LL) &= ~0x800u;
  if ( !a2 )
  {
    v4 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v4 + 128) )
      *(_DWORD *)(v4 + 396) |= 0x800u;
  }
  v5 = *(_QWORD *)(a1 + 432);
  v6 = *(struct tagWND **)(v5 + 120);
  v15[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v15;
  v15[1] = v6;
  if ( v6 )
  {
    HMLockObject(v6);
    v5 = *(_QWORD *)(a1 + 432);
  }
  if ( a2 && v5 != *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) && *(char *)(*((_QWORD *)a2 + 5) + 19LL) >= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 195LL);
  tagQ::LockFocusWnd(*(_QWORD *)(a1 + 432), a2, 1LL);
  if ( !a2 )
  {
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      {
        zzzInputFocusLostWindowEventImpl(v6, gpqForeground, 3LL);
      }
      else if ( (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v6 + 2)) )
      {
        zzzDelegateInputFocusLostWindowEvent(v6, 16LL);
      }
      xxxWindowEvent(0x8005u, 0);
      xxxSendMessage(v6, 8LL, 0LL, 0LL);
      v7 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v6, 0, 0);
    }
    return ThreadUnlock1(v8, v7, v9);
  }
  if ( *(_QWORD *)(a1 + 432) == gpqForeground )
  {
    v10 = *((_QWORD *)a2 + 2);
    v17 = 0LL;
    v11 = 0;
    v16 = 0LL;
    if ( v10 != gptiCurrent )
    {
      LockW32Thread(v10, &v16);
      v11 = 1;
    }
    xxxSetForegroundThreadWithWindowHint(*((struct tagTHREADINFO **)a2 + 2), a2);
    if ( v11 )
      PopAndFreeW32ThreadLock(&v16);
  }
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 == gpqForeground )
    goto LABEL_26;
  if ( (unsigned __int8)IsKeyboardDelegationTarget(a1) )
  {
    v8 = *(_QWORD *)(a1 + 432);
LABEL_26:
    if ( a2 == *(struct tagWND **)(v8 + 120) )
    {
      v8 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v8 & 0x80u) == 0LL )
        xxxApplyGlobalInputSettings(v8);
    }
  }
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
    {
      zzzInputFocusLostWindowEventImpl(v6, gpqForeground, 2LL);
    }
    else if ( (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v6 + 2))
           && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) != *(_QWORD *)(*((_QWORD *)v6 + 2) + 432LL) )
    {
      zzzDelegateInputFocusLostWindowEvent(v6, 16LL);
    }
    xxxSendMessage(v6, 8LL, *(_QWORD *)a2, 0LL);
    v8 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v6, 0, 0);
  }
  if ( a2 == *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 120LL) )
  {
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(a2, 1, 0);
    xxxWindowEvent(0x8005u, 0);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 1272LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    {
      v12 = 0LL;
      if ( v6 )
        v12 = *(_QWORD *)v6;
      xxxSendNotifyMessage(a2, 7LL, v12, 0LL, 1);
    }
    else
    {
      v13 = 0LL;
      if ( v6 )
        v13 = *(_QWORD *)v6;
      xxxSendMessage(a2, 7LL, v13, 0LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a2 )
    {
      zzzInputFocusReceivedWindowEvent(2LL);
    }
    else if ( (unsigned __int8)IsKeyboardDelegationTarget(a1)
           && a2 == *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 120LL) )
    {
      zzzDelegateInputFocusReceivedWindowEvent(15LL);
    }
  }
  return ThreadUnlock1(v8, v7, v9);
}
