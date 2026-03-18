/*
 * XREFs of NtUserCreateSystemThreads @ 0x1C00B97A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxCreateSystemThreads @ 0x1C00B9950 (xxxCreateSystemThreads.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCreateSystemThreads(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  struct tagTHREADINFO **v6; // rbx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rbx
  __int64 SystemThreads; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *v19; // rbx
  unsigned int v20; // r8d
  struct tagKERNELHANDLETABLEENTRY *v21; // rax
  __int64 v22; // rcx
  BOOL v23; // [rsp+38h] [rbp-69h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  int v25; // [rsp+48h] [rbp-59h]
  GUID ActivityId; // [rsp+4Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-41h] BYREF
  BOOL *v28; // [rsp+80h] [rbp-21h]
  int v29; // [rsp+88h] [rbp-19h]
  int v30; // [rsp+8Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-11h] BYREF
  BOOL *v32; // [rsp+B0h] [rbp+Fh]
  int v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+BCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp+1Fh] BYREF
  BOOL *v36; // [rsp+E0h] [rbp+3Fh]
  int v37; // [rsp+E8h] [rbp+47h]
  int v38; // [rsp+ECh] [rbp+4Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v24 = CurrentThreadWin32Thread;
  v25 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v24 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v29 = 4;
      v30 = 0;
      v23 = v25 == 1;
      v28 = &v23;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v27);
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
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, v5);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
  }
  v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v6 )
  {
    v8 = *v6;
    if ( v24 )
    {
      v7 = *(unsigned int *)(v24 + 24);
      if ( *(_DWORD *)(v24 + 48) || (int)v7 > 0 )
      {
        *(_DWORD *)(v24 + 44) = 1;
        *(GUID *)(v24 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v33 = 4;
            v34 = 0;
            v23 = v25 == 1;
            v32 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v31);
            v20 = dword_1C028EE70;
          }
          if ( v20 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4;
            v38 = 0;
            v23 = v25 == 1;
            v36 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v35);
          }
        }
      }
    }
    gptiCurrent = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v21 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v22 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v21;
            if ( !*(_DWORD *)(v22 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v10, v11);
              v22 = *v12;
            }
            HMUnlockObject(v22);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v24);
    gptiCurrent = 0LL;
  }
  SystemThreads = (int)xxxCreateSystemThreads();
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return SystemThreads;
}
