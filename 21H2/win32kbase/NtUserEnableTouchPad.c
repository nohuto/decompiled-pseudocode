/*
 * XREFs of NtUserEnableTouchPad @ 0x1C012DDF0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C0042FA8 (CheckAccessEx.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     EtwTraceUIPISystemError @ 0x1C004B090 (EtwTraceUIPISystemError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EnablePTPDevices @ 0x1C011BED0 (EnablePTPDevices.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1)
{
  int v1; // r15d
  int v2; // esi
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
  __int64 v28; // rdx
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h]
  int v34[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+78h] [rbp-90h] BYREF
  int *v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+A8h] [rbp-60h] BYREF
  int *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D8h] [rbp-30h] BYREF
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]

  v1 = a1;
  v33 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v36 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v31 = ActivityId_4;
        v41 = 4LL;
        v40 = &v31;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId_8,
          0LL,
          3u,
          &v39);
      }
    }
  }
  else
  {
    v36 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
  {
    *(_DWORD *)(v36 + 44) = 1;
    *(GUID *)(v36 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v30 = ActivityId_4;
        v44 = 4LL;
        v43 = &v30;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId_8,
          0LL,
          3u,
          &v42);
        v13 = dword_1C024BA90;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v32 = ActivityId_4;
        v47 = 4LL;
        v46 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId_8,
          0LL,
          3u,
          &v45);
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
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v35);
  v34[1] = -1;
  v34[0] = 0x2000;
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v34, 0) )
  {
    LOBYTE(v2) = v1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    UserSetLastError(5LL, v28);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
  UserSessionSwitchLeaveCrit();
  return v2;
}
