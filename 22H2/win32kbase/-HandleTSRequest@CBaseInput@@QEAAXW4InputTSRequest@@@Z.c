/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00A7EC0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0046904 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00A819C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rcx
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
  __int64 *v22; // rsi
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // rax
  PERESOURCE *v30; // rdi
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
  if ( a2 < 4 )
  {
    if ( *((_DWORD *)&unk_1C02048F0 + 6 * a2) != a2 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1073LL);
    }
    if ( *((_DWORD *)&unk_1C02048F0 + 6 * v2 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C02048F0 + 3 * v2 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit();
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C02048F0 + 6 * v2 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v36 = 1;
        v27 = PsGetCurrentThreadWin32Thread(v5);
        v35 = v27;
        if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v32 = v36;
            v40 = 4LL;
            v39 = &v32;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
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
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v31 = v36;
            v43 = 4LL;
            v42 = &v31;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &ActivityId,
              0LL,
              3u,
              &v41);
            v28 = dword_1C024AA90;
          }
          if ( v28 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v33 = v36;
            v46 = 4LL;
            v45 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
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
        || (v24 = PsGetCurrentProcess(v15, v14),
            ProcessSessionId = PsGetProcessSessionIdEx(v24),
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
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v22 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v22[2];
              v29 = *v22;
              v22[2] = 0LL;
              if ( !*(_DWORD *)(v29 + 8) )
              {
                v31 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v30 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v30 == (PERESOURCE *)&gDomainDummyLock )
              {
                v32 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v30);
              HMUnlockObject(*v22);
              tagDomLock::LockExclusive(v30);
              v22 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            LODWORD(v2) = v34;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
}
