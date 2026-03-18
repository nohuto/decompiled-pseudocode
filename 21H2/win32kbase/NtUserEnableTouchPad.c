/*
 * XREFs of NtUserEnableTouchPad @ 0x1C0158800
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C0040CB0 (EtwTraceUIPISystemError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     EnablePTPDevices @ 0x1C0148970 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  LARGE_INTEGER *v8; // rdi
  struct tagTHREADINFO **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagTHREADINFO *v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v26; // [rsp+38h] [rbp-89h] BYREF
  BOOL v27; // [rsp+3Ch] [rbp-85h] BYREF
  int v28[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v29; // [rsp+48h] [rbp-79h] BYREF
  int v30; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+68h] [rbp-59h] BYREF
  BOOL *v33; // [rsp+88h] [rbp-39h]
  __int64 v34; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+98h] [rbp-29h] BYREF
  BOOL *v36; // [rsp+B8h] [rbp-9h]
  __int64 v37; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+C8h] [rbp+7h] BYREF
  BOOL *v39; // [rsp+E8h] [rbp+27h]
  __int64 v40; // [rsp+F0h] [rbp+2Fh]

  v3 = 0;
  v4 = a1;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
    v29 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v29 = 0LL;
  }
  v30 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v34 = 4LL;
      v27 = v30 == 1;
      v33 = &v27;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v32);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v7);
    if ( v8 )
      v8[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v13 = *v9;
    if ( v29 )
    {
      v11 = *(unsigned int *)(v29 + 24);
      if ( *(_DWORD *)(v29 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v29 + 44) = 1;
        *(GUID *)(v29 + 28) = ActivityId;
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v27 = v30 == 1;
            v36 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v35);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v40 = 4LL;
            v27 = v30 == 1;
            v39 = &v27;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v38);
          }
        }
      }
    }
    gptiCurrent = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
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
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v10, v12);
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
    gptiCurrent = 0LL;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26, v10, v12);
  v28[1] = -1;
  v28[0] = 0x2000;
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v28, 0) )
  {
    LOBYTE(v3) = v4 != 0;
    v3 = EnablePTPDevices(v3);
  }
  else
  {
    EtwTraceUIPISystemError(*((PEPROCESS **)gptiCurrent + 53), 0LL);
    UserSetLastError(5LL, v18, v19, v20);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v3;
}
