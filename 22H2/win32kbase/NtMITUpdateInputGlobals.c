/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C00A7450
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00496F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpconvertTime @ 0x1C00A7750 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int16 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  __int64 v9; // rsi
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v30; // r14
  CInputThread *v31; // rdi
  bool v32; // bl
  __int64 v33; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rax
  PERESOURCE *v38; // rdi
  int v39; // [rsp+30h] [rbp-B1h] BYREF
  int v40; // [rsp+34h] [rbp-ADh] BYREF
  unsigned __int16 v41; // [rsp+38h] [rbp-A9h]
  int v42; // [rsp+3Ch] [rbp-A5h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-9Dh]
  __int64 v44; // [rsp+48h] [rbp-99h]
  unsigned __int8 v45; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+68h] [rbp-79h] BYREF
  int *v48; // [rsp+88h] [rbp-59h]
  __int64 v49; // [rsp+90h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+98h] [rbp-49h] BYREF
  int *v51; // [rsp+B8h] [rbp-29h]
  __int64 v52; // [rsp+C0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp-19h] BYREF
  int *v54; // [rsp+E8h] [rbp+7h]
  __int64 v55; // [rsp+F0h] [rbp+Fh]

  v41 = a3;
  v6 = a3;
  v43 = a2;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v45 = 1;
    v35 = PsGetCurrentThreadWin32Thread(v10);
    v44 = v35;
    if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v40 = v45;
        v49 = 4LL;
        v48 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v47);
      }
    }
  }
  else
  {
    v44 = 0LL;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v13 )
      v12 = *v13;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v12 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
  {
    *(_DWORD *)(v44 + 44) = 1;
    *(GUID *)(v44 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v39 = v45;
        v52 = 4LL;
        v51 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v50);
        v36 = dword_1C024AA90;
      }
      if ( v36 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v42 = v45;
        v55 = 4LL;
        v54 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v21 = PsGetCurrentProcess(v20, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(v21),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( v25
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v25 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v25 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v30 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
          v37 = *v30;
          v30[2] = 0LL;
          if ( !*(_DWORD *)(v37 + 8) )
          {
            v39 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v38 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
          {
            v40 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*v30);
          tagDomLock::LockExclusive(v38);
          v30 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v6 = v41;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      v7 = v43;
    }
  }
  v31 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v31, 0LL);
  v32 = CInputThread::_CalledOnInputThread(v31);
  ExReleasePushLockSharedEx(v31, 0LL);
  KeLeaveCriticalRegion();
  if ( v32 )
  {
    v33 = UpconvertTime(v8);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v33, v7, v6, a4, a5);
    v9 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
