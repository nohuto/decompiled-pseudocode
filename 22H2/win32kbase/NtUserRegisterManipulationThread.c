/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C00B5B60
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
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rsi
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v24; // r14
  PVOID v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rax
  PVOID *v33; // rdi
  int v34; // [rsp+38h] [rbp-99h] BYREF
  int v35; // [rsp+3Ch] [rbp-95h] BYREF
  PVOID *v36; // [rsp+40h] [rbp-91h] BYREF
  __int64 v37; // [rsp+48h] [rbp-89h]
  unsigned __int8 v38; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+68h] [rbp-69h] BYREF
  int *v41; // [rsp+88h] [rbp-49h]
  __int64 v42; // [rsp+90h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-39h] BYREF
  int *v44; // [rsp+B8h] [rbp-19h]
  __int64 v45; // [rsp+C0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C8h] [rbp-9h] BYREF
  PVOID **v47; // [rsp+E8h] [rbp+17h]
  __int64 v48; // [rsp+F0h] [rbp+1Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v3 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v38 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v1);
    v37 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v35 = v38;
        v42 = 4LL;
        v41 = &v35;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v40);
      }
    }
  }
  else
  {
    v37 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v37 && (*(_DWORD *)(v37 + 48) || *(int *)(v37 + 24) > 0) )
  {
    *(_DWORD *)(v37 + 44) = 1;
    *(GUID *)(v37 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v34 = v38;
        v45 = 4LL;
        v44 = &v34;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v43);
        v31 = dword_1C024AA90;
      }
      if ( v31 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v36) = v38;
        v48 = 4LL;
        v47 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
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
    if ( v19 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v19 + 488) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v19 + 1232);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            v36 = DomainLockRef;
            if ( DomainLockRef == gDomainDummyLock )
            {
              v34 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v34 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v24 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v24[2];
                v32 = *v24;
                v24[2] = 0LL;
                if ( !*(_DWORD *)(v32 + 8) )
                {
                  v34 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v33 = (PVOID *)GetDomainLockRef(12);
                if ( v33 == gDomainDummyLock )
                {
                  v35 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v33);
                HMUnlockObject(*v24);
                tagDomLock::LockExclusive((PERESOURCE *)v33);
                v24 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              DomainLockRef = v36;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
      }
    }
  }
  v25 = (PVOID)PsGetCurrentProcess(v17, v16);
  if ( v25 && v25 == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    v29 = PsGetCurrentThreadWin32Thread(v27);
    if ( v29 )
      *(_DWORD *)(v29 + 48) = 1;
  }
  else
  {
    UserSetLastError(5LL, v26);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
