/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C00C3850
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct tagTHREADINFO **v7; // rdi
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagTHREADINFO *v12; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v14; // rdi
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  LARGE_INTEGER *v25; // rdi
  __int64 v26; // rax
  struct tagKERNELHANDLETABLEENTRY *v27; // rax
  __int64 v28; // rcx
  BOOL v29; // [rsp+38h] [rbp-69h] BYREF
  __int64 v30; // [rsp+40h] [rbp-61h] BYREF
  int v31; // [rsp+48h] [rbp-59h]
  GUID ActivityId; // [rsp+4Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp-41h] BYREF
  BOOL *v34; // [rsp+80h] [rbp-21h]
  int v35; // [rsp+88h] [rbp-19h]
  int v36; // [rsp+8Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+90h] [rbp-11h] BYREF
  BOOL *v38; // [rsp+B0h] [rbp+Fh]
  int v39; // [rsp+B8h] [rbp+17h]
  int v40; // [rsp+BCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp+1Fh] BYREF
  BOOL *v42; // [rsp+E0h] [rbp+3Fh]
  int v43; // [rsp+E8h] [rbp+47h]
  int v44; // [rsp+ECh] [rbp+4Bh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v30 = CurrentThreadWin32Thread;
  v4 = 1LL;
  v31 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v30 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v35 = 4;
      v36 = 0;
      v29 = v31 == 1;
      v34 = &v29;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v33);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v5 = W32kEtwEnabledKeyword, v6 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v6 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v25 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v25 )
      v25[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v7 )
  {
    v12 = *v7;
    if ( v30 )
    {
      v9 = (struct tagTHREADINFO *)*(unsigned int *)(v30 + 24);
      if ( *(_DWORD *)(v30 + 48) || (int)v9 > 0 )
      {
        *(_DWORD *)(v30 + 44) = 1;
        *(GUID *)(v30 + 28) = ActivityId;
        v10 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4;
            v40 = 0;
            v29 = v31 == 1;
            v38 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v37);
            v10 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v10 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4;
            v44 = 0;
            v29 = v31 == 1;
            v42 = &v29;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v41);
          }
        }
      }
    }
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v9 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v27 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v28 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v27;
              if ( !*(_DWORD *)(v28 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v8, v10);
                v28 = *v14;
              }
              HMUnlockObject(v28);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v30);
    gptiCurrent = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8, v10, v11);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    v26 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
    if ( v26 )
      *(_DWORD *)(v26 + 48) = 1;
  }
  else
  {
    UserSetLastError(5LL, v16, v18, v19);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v4;
}
