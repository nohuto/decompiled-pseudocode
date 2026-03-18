/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C014BCC8
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00473DC (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C004A064 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0150EF0 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO **v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  struct tagKERNELHANDLETABLEENTRY *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r15
  __int64 i; // rdi
  _QWORD *j; // r14
  unsigned int ThreadId; // r13d
  int ThreadInfoFlags; // eax
  struct tagQ *v24; // rcx
  char v25; // r11
  BOOL v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v28[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  int ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+78h] [rbp-90h] BYREF
  BOOL *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A8h] [rbp-60h] BYREF
  BOOL *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D8h] [rbp-30h] BYREF
  BOOL *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]

  v28[0] = 0;
  v27 = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v29 = CurrentThreadWin32Thread;
  ActivityId_4 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId_8);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v34 = 4LL;
      v26 = ActivityId_4 == 1;
      v33 = &v26;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId_8,
        0LL,
        3u,
        &v32);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v4 = W32kEtwEnabledKeyword, v5 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v5 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, v5);
    if ( v6 )
      v6[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v11 = *v7;
    if ( IsThreadCrossSessionAttached() )
      v11 = 0LL;
    if ( v29 )
    {
      v8 = *(unsigned int *)(v29 + 24);
      if ( *(_DWORD *)(v29 + 48) || (int)v8 > 0 )
      {
        *(_DWORD *)(v29 + 44) = 1;
        *(GUID *)(v29 + 28) = ActivityId_8;
        v9 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v26 = ActivityId_4 == 1;
            v36 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId_8,
              0LL,
              3u,
              &v35);
            v9 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v9 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v40 = 4LL;
            v26 = ActivityId_4 == 1;
            v39 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId_8,
              0LL,
              3u,
              &v38);
          }
        }
      }
    }
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v8 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v14 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v15 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v14;
              if ( !*(_DWORD *)(v15 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13, v9);
                v15 = *v16;
              }
              HMUnlockObject(v15);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
    gptiCurrent = 0LL;
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000000000040000uLL) != 0
    && (qword_1C028DB28 & 0x8000000000040000uLL) == qword_1C028DB28 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v8 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v8 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v8,
          (unsigned int)&WaitCursorEvent,
          v9,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v17 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000000000080000uLL) != 0
    && (qword_1C028DB28 & 0x8000000000080000uLL) == qword_1C028DB28 )
  {
    v18 = grpWinStaList;
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v18 )
    {
      for ( i = *(_QWORD *)(v18 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 93));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 93));
          v24 = (struct tagQ *)*(j - 39);
          v26 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v24, v19, v28, &v27);
          LOBYTE(v8) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v8,
              (unsigned int)&ThreadInfoRundownEvent,
              v9,
              ThreadId,
              v26,
              v25,
              v28[0],
              v27);
        }
      }
      v18 = *(_QWORD *)(v18 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v17, v9, v10);
}
