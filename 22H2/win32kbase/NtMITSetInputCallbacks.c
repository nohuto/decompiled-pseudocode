/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C0076A90
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
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     UserSetMITInputCallbacks @ 0x1C0075CE0 (UserSetMITInputCallbacks.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(InputExtensibilityCallout *a1)
{
  InputExtensibilityCallout *v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v24; // rsi
  PVOID v25; // rax
  __int64 v26; // rdx
  int v27; // esi
  CInputThread *v29; // rdi
  bool v30; // bl
  CInputThread *v31; // rdi
  bool v32; // bl
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  PERESOURCE *v36; // rdi
  int v37; // [rsp+38h] [rbp-99h] BYREF
  int v38; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v39; // [rsp+40h] [rbp-91h] BYREF
  InputExtensibilityCallout *v40; // [rsp+48h] [rbp-89h]
  __int64 v41; // [rsp+50h] [rbp-81h]
  unsigned __int8 v42; // [rsp+58h] [rbp-79h]
  GUID ActivityId; // [rsp+5Ch] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-61h] BYREF
  int *v45; // [rsp+90h] [rbp-41h]
  __int64 v46; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+A0h] [rbp-31h] BYREF
  int *v48; // [rsp+C0h] [rbp-11h]
  __int64 v49; // [rsp+C8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp-1h] BYREF
  __int64 *v51; // [rsp+F0h] [rbp+1Fh]
  __int64 v52; // [rsp+F8h] [rbp+27h]

  v1 = a1;
  v40 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v2);
    v41 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v38 = v42;
        v46 = 4LL;
        v45 = &v38;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId, 0, 3u, &v44);
      }
    }
  }
  else
  {
    v41 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v37 = v42;
        v49 = 4LL;
        v48 = &v37;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId, 0, 3u, &v47);
        v34 = dword_1C024AA90;
      }
      if ( v34 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v39) = v42;
        v52 = 4LL;
        v51 = &v39;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId, 0, 3u, &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
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
    if ( v19 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v19 + 488) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v19 + 1232);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            }
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v24 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v24[2];
                v35 = *v24;
                v24[2] = 0LL;
                if ( !*(_DWORD *)(v35 + 8) )
                {
                  v37 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v36 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v36 == (PERESOURCE *)&gDomainDummyLock )
                {
                  v38 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v36);
                HMUnlockObject(*v24);
                tagDomLock::LockExclusive(v36);
                v24 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v40;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v25 = (PVOID)PsGetCurrentProcess(v17, v16);
  if ( v25
    && v25 == g_pepDwm
    && (v29 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v29, 0LL),
        v30 = CInputThread::_CalledOnInputThread(v29),
        ExReleasePushLockSharedEx(v29, 0LL),
        KeLeaveCriticalRegion(),
        !v30) )
  {
    v27 = UserSetMITInputCallbacks(v1);
    if ( v27 )
    {
      v31 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v31, 0LL);
      v32 = CInputThread::_CalledOnInputThread(v31);
      ExReleasePushLockSharedEx(v31, 0LL);
      KeLeaveCriticalRegion();
      if ( !v32 )
      {
        v38 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4590LL);
      }
    }
  }
  else
  {
    v27 = 0;
    UserSetLastError(5LL, v26);
  }
  UserSessionSwitchLeaveCrit();
  return v27;
}
