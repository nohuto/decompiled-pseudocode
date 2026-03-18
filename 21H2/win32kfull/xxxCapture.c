/*
 * XREFs of xxxCapture @ 0x1C00AA7F8
 * Callers:
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00AA44C (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02104C0 (xxxCancelTrackingForThread.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     LockCaptureWindow @ 0x1C00AAA80 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00AAB18 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     IsMiPEnabledForThread @ 0x1C00AD354 (IsMiPEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCapture(__int64 a1, struct tagWND *a2, int a3)
{
  struct tagWND *v5; // rsi
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rbx
  struct tagWND *v9; // rax
  __int64 v10; // rax
  int v11; // ebp
  int v12; // ecx
  __int64 v13; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int *v24; // rdx
  int v25; // ecx
  int v26; // ecx
  struct tagQ *v27; // rbx
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF
  struct tagWND *v29; // [rsp+58h] [rbp-40h]
  __int64 v30; // [rsp+60h] [rbp-38h]
  char v31; // [rsp+B0h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( a3 == 6 )
  {
    v28 = gspwndInternalCapture;
    v29 = a2;
    HMAssignmentLock(&v28, 0LL);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 432), a2, 1);
    v6 = 2;
  }
  else
  {
    v6 = a3;
    if ( !a3 && gspwndInternalCapture && a1 == *(_QWORD *)(gspwndInternalCapture + 16LL) )
    {
      HMAssignmentUnlock(gspwndInternalCapture);
      InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 432), 0LL, 1);
    }
  }
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 456);
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(struct tagWND **)(v8 + 184), v9 == a2) && v6 != 2
        || v9 == *(struct tagWND **)(v7 + 104) && *(_DWORD *)(v7 + 148) != 2 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v31);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 184), *(_DWORD *)(v8 + 192), 192);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31, v21, v22);
      }
    }
    v10 = LockCaptureWindow((struct tagQ *)v7, a2);
    *(_DWORD *)(v7 + 148) = v6;
    v5 = (struct tagWND *)v10;
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForThread(*((_QWORD *)a2 + 2)) )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(a2) )
        {
          v24 = *(int **)(v23 + 1312);
          if ( v24 )
          {
            v25 = *v24;
            if ( (*v24 & 4) == 0 && (v25 & 2) == 0 && (v25 & 0x10) == 0 && (v25 & 1) != 0 )
            {
              if ( (v25 & 0x20) != 0 || (v24[9] & 0x1F0) != 0 )
                v26 = v25 | 4;
              else
                v26 = v25 | 2;
              *v24 = v26;
              **(_DWORD **)(v23 + 1312) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  v11 = 3;
  ++gdwDeferWinEvent;
  if ( a2 )
  {
    if ( !v5 )
    {
LABEL_15:
      if ( !gdwDeferWinEvent )
        v11 = 1;
      xxxWindowEvent(8u, a2, 0, 0, v11);
      goto LABEL_18;
    }
  }
  else
  {
    if ( !v5 )
    {
LABEL_31:
      zzzEndDeferWinEventNotify();
      return;
    }
    v20 = *((_QWORD *)v5 + 2);
    if ( _bittest64((const signed __int64 *)(v20 + 648), 0x3Cu) )
    {
      v27 = *(struct tagQ **)(v20 + 432);
      *((_DWORD *)v27 + 97) |= 0x20u;
      SetSystemInputSource((char *)v27 + 412);
      WakeSomeone(v27, (struct tagTHREADINFO *)v20, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v12 = 3;
  if ( !gdwDeferWinEvent )
    v12 = 1;
  xxxWindowEvent(9u, v5, 0, 0, v12);
  if ( a2 )
    goto LABEL_15;
LABEL_18:
  if ( !v5 )
    goto LABEL_31;
  v13 = *((_QWORD *)v5 + 5);
  if ( (*(_BYTE *)(v13 + 21) & 2) == 0 || *(__int16 *)(v13 + 42) < 0 )
    goto LABEL_31;
  v30 = 0LL;
  if ( *(_QWORD *)(a1 + 608) && a2 )
    *(_DWORD *)(v7 + 388) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v28;
  v29 = v5;
  HMLockObject(v5);
  zzzEndDeferWinEventNotify();
  xxxSendMessageCallback(v5, 0x215u, 0LL, 0LL, 0, 0, 1);
  ThreadUnlock1(v16, v15, v17);
  v19 = *(_QWORD *)(a1 + 432);
  if ( !v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  *(_DWORD *)(v19 + 388) &= ~0x100000u;
}
