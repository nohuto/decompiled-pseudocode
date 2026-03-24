/*
 * XREFs of xxxCapture @ 0x1C00C062C
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C02113F0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C023B474 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0245C00 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 * Callees:
 *     xxxCancelMouseMoveTracking @ 0x1C002D9FC (xxxCancelMouseMoveTracking.c)
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0051608 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DF44 (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     LockCaptureWindow @ 0x1C00C09C4 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00C0A84 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     IsMiPEnabledForThread @ 0x1C00C1580 (IsMiPEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1E88 (IsMiPEnabledForWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCapture(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  int *v12; // rdx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r15
  __int64 v16; // rbx
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int128 v24; // [rsp+50h] [rbp-78h]
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v26[11]; // [rsp+70h] [rbp-58h] BYREF
  char v27; // [rsp+D0h] [rbp+8h] BYREF
  int v28; // [rsp+E0h] [rbp+18h]

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    *(_QWORD *)&v24 = gspwndInternalCapture;
    *((_QWORD *)&v24 + 1) = a2;
    v25 = v24;
    HMAssignmentLock(&v25);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 432), (struct tagWND *)a2, 1);
    v3 = 2;
  }
  if ( !v3 && gspwndInternalCapture && a1 == *(_QWORD *)(gspwndInternalCapture + 16LL) )
  {
    HMAssignmentUnlock(gspwndInternalCapture);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 432), 0LL, 1);
  }
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 456);
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(_QWORD *)(v8 + 184), v9 == a2) && v3 != 2
        || v9 == *(_QWORD *)(v7 + 104) && *(_DWORD *)(v7 + 148) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 184), *(_DWORD *)(v8 + 192), 192);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
      }
    }
    v10 = LockCaptureWindow((struct tagQ *)v7, (struct tagWND *)a2);
    *(_DWORD *)(v7 + 148) = v3;
    v6 = v10;
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForThread(*(_QWORD *)(a2 + 16)) )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(a2) )
        {
          v12 = *(int **)(v11 + 1280);
          if ( v12 )
          {
            v13 = *v12;
            v14 = 4;
            if ( (*v12 & 4) == 0 && (v13 & 2) == 0 && (v13 & 0x10) == 0 && (v13 & 1) != 0 )
            {
              if ( (v13 & 0x20) == 0 && (v12[9] & 0x1F0) == 0 )
                v14 = 2;
              *v12 = v14 | v13;
              **(_DWORD **)(v11 + 1280) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v6 )
    {
LABEL_51:
      zzzEndDeferWinEventNotify();
      return;
    }
    v15 = *(_QWORD *)(v6 + 16);
    if ( (*(_QWORD *)(v15 + 648) & 0x1000000000000000LL) != 0 )
    {
      v16 = *(_QWORD *)(v15 + 432);
      *(_DWORD *)(v16 + 388) |= 0x20u;
      SetSystemInputSource(v16 + 420);
      WakeSomeone((struct tagQ *)v16, (struct tagTHREADINFO *)v15, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v17 = 3;
  if ( v6 )
  {
    v18 = 3;
    if ( !gdwDeferWinEvent )
      v18 = 1;
    xxxWindowEvent(9u, (struct tagWND *)v6, 0, 0, v18);
  }
  if ( a2 )
  {
    if ( !gdwDeferWinEvent )
      v17 = 1;
    xxxWindowEvent(8u, (struct tagWND *)a2, 0, 0, v17);
  }
  if ( !v6 )
    goto LABEL_51;
  v19 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v19 + 21) & 2) == 0 || *(__int16 *)(v19 + 42) < 0 )
    goto LABEL_51;
  v26[2] = 0LL;
  if ( *(_QWORD *)(a1 + 608) && a2 )
    *(_DWORD *)(v7 + 388) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v26;
  v26[1] = v6;
  HMLockObject(v6);
  zzzEndDeferWinEventNotify();
  v21 = 0LL;
  if ( a2 )
    v21 = *(_QWORD *)a2;
  xxxSendMessageCallback((unsigned __int64 *)v6, 0x215u, 0LL, v21, 0LL, 0LL, 0, 0, 1);
  ThreadUnlock1(v22);
  v23 = *(_QWORD *)(a1 + 432);
  if ( !v23 )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 356LL);
  }
  *(_DWORD *)(v23 + 388) &= ~0x100000u;
}
