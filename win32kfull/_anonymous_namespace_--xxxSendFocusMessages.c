/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C009AC64 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C009AD2C (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1C012E030 (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1C012E06C (zzzDelegateInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, __int64 a2)
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
  _QWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  v14[2] = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 396LL) &= ~0x800u;
  if ( !a2 )
  {
    v4 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v4 + 128) )
      *(_DWORD *)(v4 + 396) |= 0x800u;
  }
  v5 = *(_QWORD *)(a1 + 432);
  v6 = *(struct tagWND **)(v5 + 120);
  v14[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v14;
  v14[1] = v6;
  if ( v6 )
  {
    HMLockObject(v6);
    v5 = *(_QWORD *)(a1 + 432);
  }
  if ( a2 && v5 != *(_QWORD *)(*(_QWORD *)(a2 + 16) + 432LL) && *(char *)(*(_QWORD *)(a2 + 40) + 19LL) >= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  tagQ::LockFocusWnd(*(_QWORD *)(a1 + 432), a2, 1LL);
  if ( !a2 )
  {
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      {
        zzzInputFocusLostWindowEvent(v6, 3LL);
      }
      else if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage()
             && (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v6 + 2)) )
      {
        zzzDelegateInputFocusLostWindowEvent(v6, 16LL);
      }
      xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
      xxxSendMessage(v6, 8u);
      v7 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v6, 0, 0);
    }
    return ThreadUnlock1(v8, v7, v9);
  }
  if ( *(_QWORD *)(a1 + 432) == gpqForeground )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v16 = 0LL;
    v11 = 0;
    v15 = 0LL;
    if ( v10 != gptiCurrent )
    {
      LockW32Thread(v10, &v15);
      v11 = 1;
    }
    xxxSetForegroundThreadWithWindowHint(*(struct tagTHREADINFO **)(a2 + 16), (struct tagWND *)a2);
    if ( v11 )
      PopAndFreeW32ThreadLock(&v15);
  }
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 == gpqForeground )
    goto LABEL_28;
  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() && (unsigned __int8)IsKeyboardDelegationTarget(a1) )
  {
    v8 = *(_QWORD *)(a1 + 432);
LABEL_28:
    if ( a2 == *(_QWORD *)(v8 + 120) )
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
      zzzInputFocusLostWindowEvent(v6, 2LL);
    }
    else if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage()
           && (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)v6 + 2))
           && *(_QWORD *)(*(_QWORD *)(a2 + 16) + 432LL) != *(_QWORD *)(*((_QWORD *)v6 + 2) + 432LL) )
    {
      zzzDelegateInputFocusLostWindowEvent(v6, 16LL);
    }
    xxxSendMessage(v6, 8u);
    v8 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v6, 0, 0);
  }
  if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 120LL) )
  {
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((struct tagWND *)a2, 1, 0);
    xxxWindowEvent(0x8005u, (struct tagWND *)a2, -4, 0, 0);
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 1272LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    {
      v12 = 0LL;
      if ( v6 )
        v12 = *(_QWORD *)v6;
      xxxSendNotifyMessage(a2, 7LL, v12, 0LL, 1);
    }
    else
    {
      xxxSendMessage((struct tagWND *)a2, 7u);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == a2 )
    {
      zzzInputFocusReceivedWindowEvent(2LL);
    }
    else if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage()
           && (unsigned __int8)IsKeyboardDelegationTarget(a1)
           && a2 == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 120LL) )
    {
      zzzDelegateInputFocusReceivedWindowEvent(15LL);
    }
  }
  return ThreadUnlock1(v8, v7, v9);
}
