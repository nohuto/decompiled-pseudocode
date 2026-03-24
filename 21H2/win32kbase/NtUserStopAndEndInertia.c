/*
 * XREFs of NtUserStopAndEndInertia @ 0x1C0134C60
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
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019F008 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  int v3; // esi
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v28; // r14
  __int64 v29; // rax
  PVOID *v30; // rdi
  PVOID v31; // rax
  __int64 v32; // rdx
  CTouchProcessor *v33; // rcx
  void *v34; // r8
  int v36; // [rsp+38h] [rbp-89h] BYREF
  int v37; // [rsp+3Ch] [rbp-85h] BYREF
  int v38; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-7Dh]
  __int64 v40; // [rsp+48h] [rbp-79h]
  unsigned __int8 v41; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+68h] [rbp-59h] BYREF
  int *v44; // [rsp+88h] [rbp-39h]
  __int64 v45; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+98h] [rbp-29h] BYREF
  int *v47; // [rsp+B8h] [rbp-9h]
  __int64 v48; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+C8h] [rbp+7h] BYREF
  int *v50; // [rsp+E8h] [rbp+27h]
  __int64 v51; // [rsp+F0h] [rbp+2Fh]

  v2 = a2;
  v39 = a2;
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v40 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v37 = v41;
        v45 = 4LL;
        v44 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
          0LL,
          3u,
          &v43);
      }
    }
  }
  else
  {
    v40 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
  {
    *(_DWORD *)(v40 + 44) = 1;
    *(GUID *)(v40 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v36 = v41;
        v48 = 4LL;
        v47 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v46);
        v14 = dword_1C024BA90;
      }
      if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v38 = v41;
        v51 = 4LL;
        v50 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v49);
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
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v23 + 488) & 0x1000000) != 0 )
        {
          v21 = *(unsigned int *)(v23 + 1232);
          if ( (v21 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            if ( DomainLockRef == gDomainDummyLock )
            {
              v36 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v36 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v28 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
                v29 = *v28;
                v28[2] = 0LL;
                if ( !*(_DWORD *)(v29 + 8) )
                {
                  v36 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                }
                v30 = (PVOID *)GetDomainLockRef(12);
                if ( v30 == gDomainDummyLock )
                {
                  v37 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v30);
                HMUnlockObject(*v28);
                tagDomLock::LockExclusive((PERESOURCE *)v30);
                v28 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v39;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
      }
    }
  }
  v31 = (PVOID)PsGetCurrentProcess(v21, v20);
  if ( v31 && v31 == g_pepDwm )
    v3 = CTouchProcessor::StopAndEndInertia(v33, v2, v34);
  else
    UserSetLastError(5LL, v32);
  UserSessionSwitchLeaveCrit();
  return v3;
}
