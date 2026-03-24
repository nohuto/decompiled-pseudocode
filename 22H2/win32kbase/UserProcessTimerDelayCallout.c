/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1C011CCAC
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
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v24; // rsi
  __int64 v25; // rax
  PVOID *v26; // rdi
  __int64 ProcessWin32Process; // rax
  unsigned int v28; // ebx
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
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v35 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v34 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v34 + 48)) )
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
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
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
        v12 = dword_1C024AA90;
      }
      if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
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
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1232) & 0x80u) == 0
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
      v24 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v24[2];
          v25 = *v24;
          v24[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
          {
            v30 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v26 = (PVOID *)GetDomainLockRef(12);
          if ( v26 == gDomainDummyLock )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v26);
          HMUnlockObject(*v24);
          tagDomLock::LockExclusive((PERESOURCE *)v26);
          v24 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v33;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)v1);
  if ( ProcessWin32Process )
  {
    if ( qword_1C0256078 )
      v28 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0256078)(
              ProcessWin32Process,
              *(unsigned int *)(v1 + 8),
              *(unsigned int *)(v1 + 12));
    else
      v28 = -1073741637;
  }
  else
  {
    v28 = -1073741558;
  }
  UserSessionSwitchLeaveCrit();
  return v28;
}
