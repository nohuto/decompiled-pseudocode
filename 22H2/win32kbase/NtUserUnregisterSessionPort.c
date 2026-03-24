/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C0136BC0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00761B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rsi
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v26; // r14
  __int64 v27; // rax
  PVOID *v28; // rdi
  PVOID v29; // rax
  __int64 v30; // rdx
  int v32; // [rsp+38h] [rbp-99h] BYREF
  int v33; // [rsp+3Ch] [rbp-95h] BYREF
  PVOID *v34; // [rsp+40h] [rbp-91h] BYREF
  __int64 v35; // [rsp+48h] [rbp-89h]
  unsigned __int8 v36; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+68h] [rbp-69h] BYREF
  int *v39; // [rsp+88h] [rbp-49h]
  __int64 v40; // [rsp+90h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+98h] [rbp-39h] BYREF
  int *v42; // [rsp+B8h] [rbp-19h]
  __int64 v43; // [rsp+C0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp-9h] BYREF
  PVOID **v45; // [rsp+E8h] [rbp+17h]
  __int64 v46; // [rsp+F0h] [rbp+1Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v3 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v36 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v1);
    v35 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v33 = v36;
        v40 = 4LL;
        v39 = &v33;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v38);
      }
    }
  }
  else
  {
    v35 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v35 && (*(_DWORD *)(v35 + 48) || *(int *)(v35 + 24) > 0) )
  {
    *(_DWORD *)(v35 + 44) = 1;
    *(GUID *)(v35 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v32 = v36;
        v43 = 4LL;
        v42 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v41);
        v12 = dword_1C024AA90;
      }
      if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v34) = v36;
        v46 = 4LL;
        v45 = &v34;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v44);
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
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v21 + 488) & 0x1000000) != 0 )
        {
          v19 = *(unsigned int *)(v21 + 1232);
          if ( (v19 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            v34 = DomainLockRef;
            if ( DomainLockRef == gDomainDummyLock )
            {
              v32 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v32 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v26 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
                v27 = *v26;
                v26[2] = 0LL;
                if ( !*(_DWORD *)(v27 + 8) )
                {
                  v32 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                }
                v28 = (PVOID *)GetDomainLockRef(12);
                if ( v28 == gDomainDummyLock )
                {
                  v33 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v28);
                HMUnlockObject(*v26);
                tagDomLock::LockExclusive((PERESOURCE *)v28);
                v26 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              DomainLockRef = v34;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
      }
    }
  }
  v29 = (PVOID)PsGetCurrentProcess(v19, v18);
  if ( v29 && v29 == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    UserSetLastError(5LL, v30);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
