/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0077F58
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00763AC (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00775A0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C1E70 (PowerOffMonitor.c)
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
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rcx
  int v2; // r12d
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v20; // rsi
  unsigned int v21; // ebx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rax
  PERESOURCE *v29; // rdi
  int v30; // [rsp+38h] [rbp-89h] BYREF
  int v31; // [rsp+3Ch] [rbp-85h] BYREF
  int v32; // [rsp+40h] [rbp-81h] BYREF
  int v33; // [rsp+44h] [rbp-7Dh]
  __int64 v34; // [rsp+48h] [rbp-79h]
  unsigned __int8 v35; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+68h] [rbp-59h] BYREF
  int *v38; // [rsp+88h] [rbp-39h]
  __int64 v39; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-29h] BYREF
  int *v41; // [rsp+B8h] [rbp-9h]
  __int64 v42; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+C8h] [rbp+7h] BYREF
  int *v44; // [rsp+E8h] [rbp+27h]
  __int64 v45; // [rsp+F0h] [rbp+2Fh]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v2 = IsResourceAcquiredExclusiveLite;
  v33 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( gfSwitchInProgress )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 237LL);
    }
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v35 = 1;
      v26 = PsGetCurrentThreadWin32Thread(v3);
      v34 = v26;
      if ( v26 && (*(int *)(v26 + 24) > 0 || *(_DWORD *)(v34 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v31 = v35;
          v39 = 4LL;
          v38 = &v31;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v37);
        }
      }
    }
    else
    {
      v34 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v34 && (*(_DWORD *)(v34 + 48) || *(int *)(v34 + 24) > 0) )
    {
      *(_DWORD *)(v34 + 44) = 1;
      *(GUID *)(v34 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v30 = v35;
          v42 = 4LL;
          v41 = &v30;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&ActivityId, 0, 3u, &v40);
          v27 = dword_1C024BA90;
        }
        if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v32 = v35;
          v45 = 4LL;
          v44 = &v32;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&ActivityId, 0, 3u, &v43);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v23 = PsGetCurrentProcess(v13, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(v23),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( v15
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v15 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v15 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v30 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v30 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v20 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v20[2];
            v28 = *v20;
            v20[2] = 0LL;
            if ( !*(_DWORD *)(v28 + 8) )
            {
              v30 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v29 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v29 == (PERESOURCE *)&gDomainDummyLock )
            {
              v31 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v29);
            HMUnlockObject(*v20);
            tagDomLock::LockExclusive(v29);
            v20 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v33;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
    goto LABEL_34;
  }
  if ( !gfSwitchInProgress && (unsigned int)RtlGetActiveConsoleId() == gSessionId && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
LABEL_34:
    v21 = 0;
    goto LABEL_35;
  }
  v21 = -1073086428;
LABEL_35:
  if ( !v2 )
    UserSessionSwitchLeaveCrit();
  return v21;
}
