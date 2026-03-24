/*
 * XREFs of NtMITMinuserWindowCreated @ 0x1C012A800
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserAddBaseWindowHandle @ 0x1C0138E20 (UserAddBaseWindowHandle.c)
 */

__int64 __fastcall NtMITMinuserWindowCreated(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v26; // rsi
  __int64 v27; // rax
  PVOID *v28; // rdi
  __int64 v29; // rbx
  int v31; // [rsp+30h] [rbp-99h] BYREF
  int v32; // [rsp+34h] [rbp-95h] BYREF
  int v33; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-8Dh]
  __int64 v35; // [rsp+48h] [rbp-81h]
  unsigned __int8 v36; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+68h] [rbp-61h] BYREF
  int *v39; // [rsp+88h] [rbp-41h]
  __int64 v40; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+98h] [rbp-31h] BYREF
  int *v42; // [rsp+B8h] [rbp-11h]
  __int64 v43; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp-1h] BYREF
  int *v45; // [rsp+E8h] [rbp+1Fh]
  __int64 v46; // [rsp+F0h] [rbp+27h]

  v2 = a2;
  v34 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v36 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v35 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v32 = v36;
        v40 = 4LL;
        v39 = &v32;
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
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
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
        v31 = v36;
        v43 = 4LL;
        v42 = &v31;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v41);
        v14 = dword_1C024BA90;
      }
      if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v33 = v36;
        v46 = 4LL;
        v45 = &v33;
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
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
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
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      if ( DomainLockRef == gDomainDummyLock )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v31 = 0x20000;
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
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v28 = (PVOID *)GetDomainLockRef(12);
          if ( v28 == gDomainDummyLock )
          {
            v32 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v28);
          HMUnlockObject(*v26);
          tagDomLock::LockExclusive((PERESOURCE *)v28);
          v26 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v34;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  v29 = (int)UserAddBaseWindowHandle(a1, v2);
  UserSessionSwitchLeaveCrit();
  return v29;
}
