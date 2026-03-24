/*
 * XREFs of UserProcessTimerStatisticsCallout @ 0x1C011D1FC
 * Callers:
 *     W32CalloutDispatch @ 0x1C004EFB0 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserProcessTimerStatisticsCallout(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // esi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v25; // r14
  __int64 v26; // rax
  PVOID *v27; // rdi
  __int64 ProcessWin32Process; // rax
  int v30; // [rsp+30h] [rbp-99h] BYREF
  int v31; // [rsp+34h] [rbp-95h] BYREF
  int v32; // [rsp+38h] [rbp-91h] BYREF
  __int64 v33; // [rsp+40h] [rbp-89h]
  __int64 v34; // [rsp+48h] [rbp-81h]
  unsigned __int8 v35; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+68h] [rbp-61h] BYREF
  int *v38; // [rsp+88h] [rbp-41h]
  __int64 v39; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-31h] BYREF
  int *v41; // [rsp+B8h] [rbp-11h]
  __int64 v42; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+C8h] [rbp-1h] BYREF
  int *v44; // [rsp+E8h] [rbp+1Fh]
  __int64 v45; // [rsp+F0h] [rbp+27h]

  v1 = a1;
  v33 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v35 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v34 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v34 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v31 = v35;
        v39 = 4LL;
        v38 = &v31;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v37);
      }
    }
  }
  else
  {
    v34 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v34 && (*(_DWORD *)(v34 + 48) || *(int *)(v34 + 24) > 0) )
  {
    *(_DWORD *)(v34 + 44) = 1;
    *(GUID *)(v34 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v30 = v35;
        v42 = 4LL;
        v41 = &v30;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v40);
        v13 = dword_1C024AA90;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v32 = v35;
        v45 = 4LL;
        v44 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v43);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v20 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v20 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      if ( DomainLockRef == gDomainDummyLock )
      {
        v30 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v30 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      v25 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
          v26 = *v25;
          v25[2] = 0LL;
          if ( !*(_DWORD *)(v26 + 8) )
          {
            v30 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v27 = (PVOID *)GetDomainLockRef(12);
          if ( v27 == gDomainDummyLock )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v27);
          HMUnlockObject(*v25);
          tagDomLock::LockExclusive((PERESOURCE *)v27);
          v25 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v33;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)v1);
  if ( ProcessWin32Process )
    *(_DWORD *)(v1 + 8) = *(_DWORD *)(ProcessWin32Process + 1048);
  else
    v2 = -1073741558;
  UserSessionSwitchLeaveCrit();
  return v2;
}
