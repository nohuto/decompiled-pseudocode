/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0079384
 * Callers:
 *     UserPowerStateCallout @ 0x1C0077A8C (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0078C80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C2200 (PowerOffMonitor.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void UserSessionSwitchBlock_End(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rcx
  int v2; // r14d
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
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // rax
  PERESOURCE *v27; // rdi
  int v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h] BYREF
  PERESOURCE *v30; // [rsp+40h] [rbp-81h] BYREF
  __int64 v31; // [rsp+50h] [rbp-71h]
  unsigned __int8 v32; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-51h] BYREF
  int *v35; // [rsp+90h] [rbp-31h]
  __int64 v36; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp-21h] BYREF
  int *v38; // [rsp+C0h] [rbp-1h]
  __int64 v39; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D0h] [rbp+Fh] BYREF
  void **v41; // [rsp+F0h] [rbp+2Fh]
  __int64 v42; // [rsp+F8h] [rbp+37h]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v2 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v32 = 1;
      v24 = PsGetCurrentThreadWin32Thread(v3);
      v31 = v24;
      if ( v24 && (*(int *)(v24 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v29 = v32;
          v36 = 4LL;
          v35 = &v29;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId, 0, 3u, &v34);
        }
      }
    }
    else
    {
      v31 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v31 && (*(_DWORD *)(v31 + 48) || *(int *)(v31 + 24) > 0) )
    {
      *(_DWORD *)(v31 + 44) = 1;
      *(GUID *)(v31 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v28 = v32;
          v39 = 4LL;
          v38 = &v28;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId, 0, 3u, &v37);
          v25 = dword_1C024AA90;
        }
        if ( v25 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          LODWORD(v30) = v32;
          v42 = 4LL;
          v41 = (void **)&v30;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId, 0, 3u, &v40);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v21 = PsGetCurrentProcess(v13, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(v21),
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
        v30 = DomainLockRef;
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v28 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v28 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v20 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v20[2];
            v26 = *v20;
            v20[2] = 0LL;
            if ( !*(_DWORD *)(v26 + 8) )
            {
              v28 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v27 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v27 == (PERESOURCE *)&gDomainDummyLock )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v27);
            HMUnlockObject(*v20);
            tagDomLock::LockExclusive(v27);
            v20 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          DomainLockRef = v30;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  if ( !--gnPoSessionSwitchBlockCount )
    gfSessionSwitchBlock = 0;
  if ( !v2 )
    UserSessionSwitchLeaveCrit();
}
