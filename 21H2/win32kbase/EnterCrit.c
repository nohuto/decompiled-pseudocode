/*
 * XREFs of EnterCrit @ 0x1C001F2E0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(int a1, int a2)
{
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // rdi
  struct tagTHREADINFO *result; // rax
  LARGE_INTEGER *v17; // rbx
  struct tagKERNELHANDLETABLEENTRY *v18; // rax
  __int64 v19; // rcx
  BOOL v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+38h] [rbp-61h] BYREF
  int v22; // [rsp+40h] [rbp-59h]
  GUID ActivityId; // [rsp+44h] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+58h] [rbp-41h] BYREF
  BOOL *v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-11h] BYREF
  BOOL *v28; // [rsp+A8h] [rbp+Fh]
  __int64 v29; // [rsp+B0h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B8h] [rbp+1Fh] BYREF
  BOOL *v31; // [rsp+D8h] [rbp+3Fh]
  __int64 v32; // [rsp+E0h] [rbp+47h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  v21 = CurrentThreadWin32Thread;
  v22 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v21 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v26 = 4LL;
        v20 = v22 == 1;
        v25 = &v20;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v24);
      }
    }
  }
  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v17 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v17 )
      v17[1] = KeQueryPerformanceCounter(0LL);
  }
  v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v5 )
  {
    v10 = *v5;
    if ( a1 && (unsigned int)IsThreadCrossSessionAttached() )
      v10 = 0LL;
    if ( v21 )
    {
      v7 = *(unsigned int *)(v21 + 24);
      if ( *(_DWORD *)(v21 + 48) || (int)v7 > 0 )
      {
        *(_DWORD *)(v21 + 44) = 1;
        *(GUID *)(v21 + 28) = ActivityId;
        v8 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v29 = 4LL;
            v20 = v22 == 1;
            v28 = &v20;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD22,
              (int)&ActivityId,
              0,
              3u,
              &v27);
            v8 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v8 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v32 = 4LL;
            v20 = v22 == 1;
            v31 = &v20;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD4F,
              (int)&ActivityId,
              0,
              3u,
              &v30);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      if ( !a2 )
        *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          for ( i = gpSharedUserCritDeferredUnlockListHead;
                gpSharedUserCritDeferredUnlockListHead;
                i = gpSharedUserCritDeferredUnlockListHead )
          {
            v18 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
            v19 = *(_QWORD *)i;
            *((_QWORD *)i + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v18;
            if ( !*(_DWORD *)(v19 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v12, v13);
              v19 = *(_QWORD *)i;
            }
            HMUnlockObject(v19, v12, v13, v14);
          }
        }
      }
    }
    return v10;
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v21);
    result = 0LL;
    gptiCurrent = 0LL;
  }
  return result;
}
