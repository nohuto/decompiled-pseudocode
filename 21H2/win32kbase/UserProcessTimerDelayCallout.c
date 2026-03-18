/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1C0141E14
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  LARGE_INTEGER *v7; // rbx
  struct tagTHREADINFO **v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  BOOL v25; // [rsp+30h] [rbp-89h] BYREF
  __int64 v26; // [rsp+38h] [rbp-81h] BYREF
  int v27; // [rsp+40h] [rbp-79h]
  GUID ActivityId; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+58h] [rbp-61h] BYREF
  BOOL *v30; // [rsp+78h] [rbp-41h]
  __int64 v31; // [rsp+80h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+88h] [rbp-31h] BYREF
  BOOL *v33; // [rsp+A8h] [rbp-11h]
  __int64 v34; // [rsp+B0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+B8h] [rbp-1h] BYREF
  BOOL *v36; // [rsp+D8h] [rbp+1Fh]
  __int64 v37; // [rsp+E0h] [rbp+27h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v26 = CurrentThreadWin32Thread;
  v27 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v26 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v31 = 4LL;
      v25 = v27 == 1;
      v30 = &v25;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v29);
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
    v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v5, v6);
    if ( v7 )
      v7[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v9 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v9 = 0LL;
    if ( v26 )
    {
      v10 = *(unsigned int *)(v26 + 24);
      if ( *(_DWORD *)(v26 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v26 + 44) = 1;
        *(GUID *)(v26 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v34 = 4LL;
            v25 = v27 == 1;
            v33 = &v25;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v32);
            v11 = dword_1C028EE70;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v25 = v27 == 1;
            v36 = &v25;
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
    gptiCurrent = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v15 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v16 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v15;
            if ( !*(_DWORD *)(v16 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
              v16 = *v17;
            }
            HMUnlockObject(v16);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26);
    gptiCurrent = 0LL;
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)a1);
  if ( ProcessWin32Process )
  {
    v22 = qword_1C029BDC8;
    v21 = *(unsigned int *)(a1 + 12);
    v19 = *(unsigned int *)(a1 + 8);
    if ( qword_1C029BDC8 )
      v23 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C029BDC8)(ProcessWin32Process, v19, v21);
    else
      v23 = -1073741637;
  }
  else
  {
    v23 = -1073741558;
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v23;
}
