/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C012A050
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
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01BF894 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rsi
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
  CInputThread *v28; // rdi
  bool v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 MouseProcessor; // rax
  char v33; // al
  int v35; // [rsp+38h] [rbp-89h] BYREF
  int v36; // [rsp+3Ch] [rbp-85h] BYREF
  PVOID *v37; // [rsp+40h] [rbp-81h] BYREF
  __int64 v38; // [rsp+50h] [rbp-71h]
  unsigned __int8 v39; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+70h] [rbp-51h] BYREF
  int *v42; // [rsp+90h] [rbp-31h]
  __int64 v43; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+A0h] [rbp-21h] BYREF
  int *v45; // [rsp+C0h] [rbp-1h]
  __int64 v46; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+D0h] [rbp+Fh] BYREF
  PVOID **v48; // [rsp+F0h] [rbp+2Fh]
  __int64 v49; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v39 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v38 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v38 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v36 = v39;
        v43 = 4LL;
        v42 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
          0LL,
          3u,
          &v41);
      }
    }
  }
  else
  {
    v38 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v38 && (*(_DWORD *)(v38 + 48) || *(int *)(v38 + 24) > 0) )
  {
    *(_DWORD *)(v38 + 44) = 1;
    *(GUID *)(v38 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v35 = v39;
        v46 = 4LL;
        v45 = &v35;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v44);
        v13 = dword_1C024BA90;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        LODWORD(v37) = v39;
        v49 = 4LL;
        v48 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v47);
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
      v37 = DomainLockRef;
      if ( DomainLockRef == gDomainDummyLock )
      {
        v35 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v35 = 0x20000;
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
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v27 = (PVOID *)GetDomainLockRef(12);
          if ( v27 == gDomainDummyLock )
          {
            v36 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v27);
          HMUnlockObject(*v25);
          tagDomLock::LockExclusive((PERESOURCE *)v27);
          v25 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v37;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  v28 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v28, 0LL);
  v29 = CInputThread::_CalledOnInputThread(v28);
  ExReleasePushLockSharedEx(v28, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v31 = 5LL;
LABEL_63:
    UserSetLastError(v31, v30);
    goto LABEL_64;
  }
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v31 = 87LL;
    goto LABEL_63;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v33 = CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3696, v1);
  else
    v33 = 0;
  if ( !v33 )
  {
    v31 = 5023LL;
    goto LABEL_63;
  }
  v2 = 1LL;
LABEL_64:
  UserSessionSwitchLeaveCrit();
  return v2;
}
