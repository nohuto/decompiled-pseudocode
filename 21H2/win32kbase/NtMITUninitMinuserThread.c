/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C012C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ProtectHandle @ 0x1C0024ACC (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v23; // rsi
  __int64 v24; // rax
  PVOID *v25; // rdi
  int v26; // edx
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // eax
  void *v30; // rcx
  int v32; // [rsp+38h] [rbp-89h] BYREF
  int v33; // [rsp+3Ch] [rbp-85h] BYREF
  PVOID *v34; // [rsp+40h] [rbp-81h] BYREF
  __int64 v35; // [rsp+48h] [rbp-79h]
  unsigned __int8 v36; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+68h] [rbp-59h] BYREF
  int *v39; // [rsp+88h] [rbp-39h]
  __int64 v40; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+98h] [rbp-29h] BYREF
  int *v42; // [rsp+B8h] [rbp-9h]
  __int64 v43; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp+7h] BYREF
  PVOID **v45; // [rsp+E8h] [rbp+27h]
  __int64 v46; // [rsp+F0h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v36 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v35 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v33 = v36;
        v40 = 4LL;
        v39 = &v33;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v35 && (*(_DWORD *)(v35 + 48) || *(int *)(v35 + 24) > 0) )
  {
    *(_DWORD *)(v35 + 44) = 1;
    *(GUID *)(v35 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v32 = v36;
        v43 = 4LL;
        v42 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v41);
        v11 = dword_1C024BA90;
      }
      if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        LODWORD(v34) = v36;
        v46 = 4LL;
        v45 = &v34;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v44);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
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
      v23 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v23[2];
          v24 = *v23;
          v23[2] = 0LL;
          if ( !*(_DWORD *)(v24 + 8) )
          {
            v32 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v25 = (PVOID *)GetDomainLockRef(12);
          if ( v25 == gDomainDummyLock )
          {
            v33 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v25);
          HMUnlockObject(*v23);
          tagDomLock::LockExclusive((PERESOURCE *)v25);
          v23 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v34;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  RIMLockExclusive((__int64)&gInputLock);
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28 = 0LL;
  v29 = *(_DWORD *)(v27 + 1232);
  if ( (v29 & 0x1000000) != 0 )
  {
    v30 = *(void **)(v27 + 728);
    *(_DWORD *)(v27 + 1232) = v29 & 0xFEFFFFFF;
    ProtectHandle(v30, v26, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(v27 + 736));
    *(_QWORD *)(v27 + 736) = 0LL;
    v28 = 1LL;
    *(_QWORD *)(v27 + 728) = 0LL;
  }
  qword_1C0255508 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v28;
}
