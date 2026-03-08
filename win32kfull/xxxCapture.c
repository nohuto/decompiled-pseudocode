/*
 * XREFs of xxxCapture @ 0x1C0010A5C
 * Callers:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00109E4 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F3CF0 (xxxCancelTrackingForThread.c)
 *     xxxMNSetCapture @ 0x1C021CCC4 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C0010C8C (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C0010D24 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsMiPEnabledForThread @ 0x1C00D7F08 (IsMiPEnabledForThread.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsMiPEnabledForWindow @ 0x1C014417A (IsMiPEnabledForWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCapture(__int64 a1, struct tagWND *a2, int a3)
{
  const struct tagQ **v3; // r12
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rcx
  const struct tagQ *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r15
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 result; // rax
  const struct tagQ *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct tagWND *v24; // rax
  __int64 v25; // r9
  unsigned int *v26; // rdx
  struct tagQ *v27; // rbx
  __int128 v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+60h] [rbp-38h]
  int v30; // [rsp+B0h] [rbp+18h] BYREF

  v3 = (const struct tagQ **)(a1 + 432);
  v6 = 0LL;
  v7 = 2LL;
  if ( a3 == 6 )
  {
    *((_QWORD *)&v28 + 1) = a2;
    *(_QWORD *)&v28 = SGDGetUserSessionState(2LL) + 15904;
    HMAssignmentLock(&v28, 0LL);
    InputTraceLogging::Mouse::SetCapture(*v3, a2, 1);
    v7 = 2LL;
    v8 = 2;
  }
  else
  {
    v8 = a3;
    if ( !a3 )
    {
      if ( *(_QWORD *)(SGDGetUserSessionState(2LL) + 15904)
        && a1 == *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v9) + 15904) + 16LL) )
      {
        v23 = SGDGetUserSessionState(v22);
        HMAssignmentUnlock(v23 + 15904);
        InputTraceLogging::Mouse::SetCapture(*v3, 0LL, 1);
      }
      v7 = 2LL;
    }
  }
  v10 = *v3;
  if ( *v3 )
  {
    v11 = *(_QWORD *)(a1 + 456);
    if ( (*(_DWORD *)(v11 + 48) & 0xC0) != 0 && *(_DWORD *)(v11 + 192) == 1 )
    {
      if ( (v24 = *(struct tagWND **)(v11 + 184), v24 == a2) && v8 != 2
        || v24 == *((struct tagWND **)v10 + 14) && *((_DWORD *)v10 + 39) != 2 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v30);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v11 + 48),
          *(_QWORD *)(v11 + 184),
          *(unsigned int *)(v11 + 192),
          192LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v30);
      }
    }
    v12 = LockCaptureWindow(v10, a2);
    *((_DWORD *)v10 + 39) = v8;
    v6 = (struct tagWND *)v12;
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForThread(*((_QWORD *)a2 + 2)) )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(a2) )
        {
          v26 = *(unsigned int **)(v25 + 1352);
          if ( v26 )
          {
            v7 = *v26;
            if ( (v7 & 4) == 0 && (v7 & 2) == 0 && (v7 & 0x10) == 0 && (v7 & 1) != 0 )
            {
              if ( (v7 & 0x20) != 0 || (v26[9] & 0x1F0) != 0 )
                v7 = (unsigned int)v7 | 4;
              else
                v7 = (unsigned int)v7 | 2;
              *v26 = v7;
              **(_DWORD **)(v25 + 1352) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  v13 = 3;
  ++gdwDeferWinEvent;
  if ( a2 )
  {
    if ( !v6 )
    {
LABEL_19:
      if ( !gdwDeferWinEvent )
        v13 = 1;
      xxxWindowEvent(8u, v13);
      goto LABEL_22;
    }
  }
  else
  {
    if ( !v6 )
      return zzzEndDeferWinEventNotify(v7);
    v14 = *((_QWORD *)v6 + 2);
    if ( _bittest64((const signed __int64 *)(v14 + 648), 0x3Cu) )
    {
      v27 = *(struct tagQ **)(v14 + 432);
      *((_DWORD *)v27 + 99) |= 0x20u;
      SetSystemInputSource((char *)v27 + 420);
      WakeSomeone(v27, (struct tagTHREADINFO *)v14, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v15 = 3;
  if ( !gdwDeferWinEvent )
    v15 = 1;
  xxxWindowEvent(9u, v15);
  if ( a2 )
    goto LABEL_19;
LABEL_22:
  if ( !v6 )
    return zzzEndDeferWinEventNotify(v7);
  v7 = *((_QWORD *)v6 + 5);
  if ( (*(_BYTE *)(v7 + 21) & 2) == 0 || *(__int16 *)(v7 + 42) < 0 )
    return zzzEndDeferWinEventNotify(v7);
  v28 = 0LL;
  v29 = 0LL;
  if ( *(_QWORD *)(a1 + 608) && a2 )
    *((_DWORD *)v10 + 99) |= 0x100000u;
  ThreadLockAlways(v6, &v28);
  zzzEndDeferWinEventNotify(v16);
  xxxSendMessageCallback(v6, 0x215u, 0LL, 0LL, 0, 0, 1);
  result = ThreadUnlock1(v18, v17, v19);
  v21 = *v3;
  if ( !*v3 )
  {
    v30 = 0x20000;
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 363LL);
  }
  *((_DWORD *)v21 + 99) &= ~0x100000u;
  return result;
}
