/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C0129D90
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
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00B5AA4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(__int64 a1)
{
  __int64 v1; // rsi
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
  __int64 *v24; // r14
  __int64 v25; // rax
  PVOID *v26; // rdi
  CInputThread *v27; // rdi
  bool v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 MouseProcessor; // rax
  bool v32; // al
  int v34; // [rsp+38h] [rbp-89h] BYREF
  int v35; // [rsp+3Ch] [rbp-85h] BYREF
  PVOID *v36; // [rsp+40h] [rbp-81h] BYREF
  __int64 v37; // [rsp+48h] [rbp-79h]
  unsigned __int8 v38; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+68h] [rbp-59h] BYREF
  int *v41; // [rsp+88h] [rbp-39h]
  __int64 v42; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-29h] BYREF
  int *v44; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C8h] [rbp+7h] BYREF
  PVOID **v47; // [rsp+E8h] [rbp+27h]
  __int64 v48; // [rsp+F0h] [rbp+2Fh]

  v1 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v38 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v37 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
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
        v12 = dword_1C024AA90;
      }
      if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
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
      v36 = DomainLockRef;
      if ( DomainLockRef == gDomainDummyLock )
      {
        v34 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v34 = 0x20000;
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
            v34 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v26 = (PVOID *)GetDomainLockRef(12);
          if ( v26 == gDomainDummyLock )
          {
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v26);
          HMUnlockObject(*v24);
          tagDomLock::LockExclusive((PERESOURCE *)v26);
          v24 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v36;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  v27 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v27, 0LL);
  v28 = CInputThread::_CalledOnInputThread(v27);
  ExReleasePushLockSharedEx(v27, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v30 = 5LL;
LABEL_61:
    UserSetLastError(v30, v29);
    goto LABEL_62;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v32 = CMouseProcessor::MouseInterceptState::Disable(MouseProcessor + 3696);
  else
    v32 = 0;
  if ( !v32 )
  {
    v30 = 5023LL;
    goto LABEL_61;
  }
  v1 = 1LL;
LABEL_62:
  UserSessionSwitchLeaveCrit();
  return v1;
}
