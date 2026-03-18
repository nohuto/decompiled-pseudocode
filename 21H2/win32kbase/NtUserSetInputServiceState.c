/*
 * XREFs of NtUserSetInputServiceState @ 0x1C00ADCA0
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r14d
  int v5; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct tagTHREADINFO **v9; // rdi
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  LARGE_INTEGER *v22; // rdi
  unsigned int v23; // r8d
  struct tagKERNELHANDLETABLEENTRY *v24; // rax
  __int64 v25; // rcx
  BOOL v26; // [rsp+38h] [rbp-79h] BYREF
  __int64 v27; // [rsp+40h] [rbp-71h] BYREF
  int v28; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v37; // [rsp+E0h] [rbp+2Fh]
  __int64 v38; // [rsp+E8h] [rbp+37h]

  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v27 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v27 = 0LL;
  }
  v28 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v27 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v32 = 4LL;
      v26 = v28 == 1;
      v31 = &v26;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v30);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v7 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v7, v8);
    if ( v22 )
      v22[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v10 = *v9;
    if ( IsThreadCrossSessionAttached() )
      v10 = 0LL;
    if ( v27 )
    {
      v11 = *(unsigned int *)(v27 + 24);
      if ( *(_DWORD *)(v27 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v27 + 44) = 1;
        *(GUID *)(v27 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            v26 = v28 == 1;
            v34 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v33);
            v23 = dword_1C028EE70;
          }
          if ( v23 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v26 = v28 == 1;
            v37 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v36);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v24 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v25 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v24;
            if ( !*(_DWORD *)(v25 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v13, v14);
              v25 = *v15;
            }
            HMUnlockObject(v25);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
    gptiCurrent = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !v5 )
  {
    *(_DWORD *)(ThreadWin32Thread + 1256) &= ~0x10000000u;
    goto LABEL_23;
  }
  if ( v5 == 1 )
  {
    *(_DWORD *)(ThreadWin32Thread + 1256) |= 0x10000000u;
LABEL_23:
    v3 = 1LL;
    goto LABEL_24;
  }
  v18 = (unsigned int)(v5 - 2);
  if ( (unsigned int)v18 <= 4 )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 1256) & 0x10000000) != 0 )
      HandleDeferredInput(ThreadWin32Thread, v5, v4);
    goto LABEL_23;
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v3;
}
