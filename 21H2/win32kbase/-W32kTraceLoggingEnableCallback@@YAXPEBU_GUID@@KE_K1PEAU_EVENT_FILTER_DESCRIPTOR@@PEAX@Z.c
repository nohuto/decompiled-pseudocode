/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B8260
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
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FD3F4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v28; // rsi
  __int64 v29; // rax
  PVOID *v30; // rdi
  int v31; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+78h] [rbp-90h] BYREF
  int *v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+A8h] [rbp-60h] BYREF
  int *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]

  v34 = a4;
  v4 = a4;
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v35 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v32 = ActivityId_4;
          v40 = 4LL;
          v39 = &v32;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &ActivityId_8,
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
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
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
      *(GUID *)(v35 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v31 = ActivityId_4;
          v43 = 4LL;
          v42 = &v31;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FA0,
            &ActivityId_8,
            0LL,
            3u,
            &v41);
          v16 = dword_1C024BA90;
        }
        if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v33) = ActivityId_4;
          v46 = 4LL;
          v45 = &v33;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FCD,
            &ActivityId_8,
            0LL,
            3u,
            &v44);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v19 = PsGetCurrentProcess(v18, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(v19),
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
      if ( v23
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PVOID *)GetDomainLockRef(12);
        if ( DomainLockRef == gDomainDummyLock )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
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
              v31 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v30 = (PVOID *)GetDomainLockRef(12);
            if ( v30 == gDomainDummyLock )
            {
              v32 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v30);
            HMUnlockObject(*v28);
            tagDomLock::LockExclusive((PERESOURCE *)v30);
            v28 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v34;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      }
    }
    CitEtwEnableCallback(a1, 2u, v4);
    UserSessionSwitchLeaveCrit();
  }
}
