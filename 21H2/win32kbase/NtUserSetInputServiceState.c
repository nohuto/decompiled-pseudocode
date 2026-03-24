/*
 * XREFs of NtUserSetInputServiceState @ 0x1C009AB50
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C0001830 (HandleDeferredInput.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, int a2)
{
  int v3; // r15d
  __int64 v4; // rsi
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
  __int64 v23; // rax
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rax
  PERESOURCE *v31; // rdi
  int v32; // [rsp+38h] [rbp-89h] BYREF
  int v33; // [rsp+3Ch] [rbp-85h] BYREF
  int v34; // [rsp+40h] [rbp-81h] BYREF
  int v35; // [rsp+44h] [rbp-7Dh]
  __int64 v36; // [rsp+50h] [rbp-71h]
  unsigned __int8 v37; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-51h] BYREF
  int *v40; // [rsp+90h] [rbp-31h]
  __int64 v41; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+A0h] [rbp-21h] BYREF
  int *v43; // [rsp+C0h] [rbp-1h]
  __int64 v44; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D0h] [rbp+Fh] BYREF
  int *v46; // [rsp+F0h] [rbp+2Fh]
  __int64 v47; // [rsp+F8h] [rbp+37h]

  v35 = a1;
  v3 = a1;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v37 = 1;
    v28 = PsGetCurrentThreadWin32Thread(v5);
    v36 = v28;
    if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v33 = v37;
        v41 = 4LL;
        v40 = &v33;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
  {
    *(_DWORD *)(v36 + 44) = 1;
    *(GUID *)(v36 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v32 = v37;
        v44 = 4LL;
        v43 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v42);
        v29 = dword_1C024BA90;
      }
      if ( v29 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v34 = v37;
        v47 = 4LL;
        v46 = &v34;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v45);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v25 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v25),
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
        v32 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v32 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v22 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v22[2];
          v30 = *v22;
          v22[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
          {
            v32 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v31 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v31 == (PERESOURCE *)&gDomainDummyLock )
          {
            v33 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v31);
          HMUnlockObject(*v22);
          tagDomLock::LockExclusive(v31);
          v22 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v35;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !v3 )
  {
    *(_DWORD *)(v23 + 1232) &= ~0x10000000u;
    goto LABEL_33;
  }
  if ( v3 == 1 )
  {
    *(_DWORD *)(v23 + 1232) |= 0x10000000u;
LABEL_33:
    v4 = 1LL;
    goto LABEL_34;
  }
  if ( (unsigned int)(v3 - 2) <= 4 )
  {
    if ( (*(_DWORD *)(v23 + 1232) & 0x10000000) != 0 )
      HandleDeferredInput(v23, v3, a2);
    goto LABEL_33;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit();
  return v4;
}
