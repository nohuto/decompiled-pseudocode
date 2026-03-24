/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C0095E50
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
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SetInputDelegationModeImpl @ 0x1C009612C (SetInputDelegationModeImpl.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r12d
  int v4; // esi
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v22; // r14
  CInputThread *v23; // rdi
  bool v24; // bl
  __int64 v25; // rdx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rax
  PERESOURCE *v33; // rdi
  __int64 v34; // rcx
  int v35; // [rsp+30h] [rbp-99h] BYREF
  int v36; // [rsp+34h] [rbp-95h] BYREF
  int v37; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-89h]
  __int64 v39; // [rsp+48h] [rbp-81h]
  unsigned __int8 v40; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+68h] [rbp-61h] BYREF
  int *v43; // [rsp+88h] [rbp-41h]
  __int64 v44; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+98h] [rbp-31h] BYREF
  int *v46; // [rsp+B8h] [rbp-11h]
  __int64 v47; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C8h] [rbp-1h] BYREF
  int *v49; // [rsp+E8h] [rbp+1Fh]
  __int64 v50; // [rsp+F0h] [rbp+27h]

  v38 = a1;
  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v40 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v5);
    v39 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v36 = v40;
        v44 = 4LL;
        v43 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
          0LL,
          3u,
          &v42);
      }
    }
  }
  else
  {
    v39 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
  {
    *(_DWORD *)(v39 + 44) = 1;
    *(GUID *)(v39 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v35 = v40;
        v47 = 4LL;
        v46 = &v35;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v45);
        v31 = dword_1C024BA90;
      }
      if ( v31 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v37 = v40;
        v50 = 4LL;
        v49 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v48);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v27),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v35 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v35 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v22 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v22[2];
          v32 = *v22;
          v22[2] = 0LL;
          if ( !*(_DWORD *)(v32 + 8) )
          {
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v33 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          {
            v36 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v33);
          HMUnlockObject(*v22);
          tagDomLock::LockExclusive(v33);
          v22 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v38;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v23 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23, 0LL);
  v24 = CInputThread::_CalledOnInputThread(v23);
  ExReleasePushLockSharedEx(v23, 0LL);
  KeLeaveCriticalRegion();
  if ( !v24 )
    goto LABEL_66;
  if ( a2 )
  {
    if ( !v3 || (a2 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v34 = 87LL;
LABEL_60:
      UserSetLastError(v34, v25);
      goto LABEL_31;
    }
    if ( gptiForeground && v3 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
      goto LABEL_30;
LABEL_66:
    v34 = 5LL;
    goto LABEL_60;
  }
LABEL_30:
  v4 = SetInputDelegationModeImpl(v3, a2);
LABEL_31:
  UserSessionSwitchLeaveCrit();
  return v4;
}
