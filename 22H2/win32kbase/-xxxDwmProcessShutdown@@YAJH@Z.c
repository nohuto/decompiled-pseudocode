/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00761B8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C0136BC0 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     GreLockDwmState @ 0x1C0048DD0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     xxxDwmControl @ 0x1C0076340 (xxxDwmControl.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C007649C (IsUserEnableConsoleModeSupported.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00764C8 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0076510 (GreSfmCleanupPresentHistory.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C00766F0 (IsxxxDwmStopRedirectionSupported.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C01FC6A4 (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  unsigned int CurrentProcessId; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rdi
  __int64 *v29; // rsi
  __int64 v30; // rax
  PERESOURCE *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  LARGE_INTEGER *v34; // rbx
  __int64 v35; // rax
  struct tagTHREADINFO *v36; // rbx
  struct tagTHREADINFO **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  struct _KTHREAD *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rax
  PERESOURCE *v54; // rbx
  __int64 *v55; // rsi
  __int64 v56; // rax
  PERESOURCE *v57; // rdi
  int v58; // [rsp+38h] [rbp-D0h] BYREF
  int v59; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v60; // [rsp+40h] [rbp-C8h]
  PERESOURCE *v61; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h] BYREF
  int v63; // [rsp+58h] [rbp-B0h] BYREF
  int v64; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v65; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h]
  unsigned __int8 ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  __int64 v69; // [rsp+88h] [rbp-80h]
  unsigned __int8 v70; // [rsp+90h] [rbp-78h]
  GUID v71; // [rsp+94h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+A8h] [rbp-60h] BYREF
  int *v73; // [rsp+C8h] [rbp-40h]
  __int64 v74; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+D8h] [rbp-30h] BYREF
  int *v76; // [rsp+F8h] [rbp-10h]
  __int64 v77; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+108h] [rbp+0h] BYREF
  int *v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+138h] [rbp+30h] BYREF
  int *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+198h] [rbp+90h] BYREF
  void **v88; // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]

  v62 = 0LL;
  v2 = 0;
  if ( (int)DxgkGetSessionTokenManager(&v62) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 88LL))(v62);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 192LL))(v62);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
  }
  v3 = a1;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  LODWORD(v60) = v3;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
  {
    if ( qword_1C0256EA8 )
      v2 = qword_1C0256EA8(a1);
    else
      v2 = -1073741637;
  }
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v9 = PsGetCurrentThreadWin32Thread(v7);
    v66 = v9;
    if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v59 = ActivityId_4;
        v74 = 4LL;
        v73 = &v59;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId_8, 0, 3u, &v72);
      }
    }
  }
  else
  {
    v66 = 0LL;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
  {
    *(_DWORD *)(v66 + 44) = 1;
    *(GUID *)(v66 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v58 = ActivityId_4;
        v77 = 4LL;
        v76 = &v58;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId_8, 0, 3u, &v75);
        v17 = dword_1C024AA90;
      }
      if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v63 = ActivityId_4;
        v80 = 4LL;
        v79 = &v63;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId_8, 0, 3u, &v78);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v20 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v20),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v24 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v24 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      v61 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v58 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v58 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v29 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
          v30 = *v29;
          v29[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
          {
            v58 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v31 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v31 == (PERESOURCE *)&gDomainDummyLock )
          {
            v59 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v31);
          HMUnlockObject(*v29);
          tagDomLock::LockExclusive(v31);
          v29 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v61;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v2 = UserEnableConsoleMode(1LL);
    v34 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32);
    if ( v34 )
      v34[1] = KeQueryPerformanceCounter(0LL);
    v71 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v70 = 1;
      v35 = PsGetCurrentThreadWin32Thread(v33);
      v69 = v35;
      if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
      {
        EtwActivityIdControl(3u, &v71);
        if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v64 = v70;
          v83 = 4LL;
          v82 = &v64;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&v71, 0, 3u, &v81);
        }
      }
    }
    else
    {
      v69 = 0LL;
    }
    v36 = 0LL;
    while ( 1 )
    {
      v37 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v37 )
        v36 = *v37;
      v40 = (PVOID)PsGetCurrentProcess(v39, v38);
      if ( v40 )
      {
        if ( v40 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v42, v41) == gpepCSRSS && v36 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v36 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v69 && (*(_DWORD *)(v69 + 48) || *(int *)(v69 + 24) > 0) )
    {
      *(_DWORD *)(v69 + 44) = 1;
      *(GUID *)(v69 + 28) = v71;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          LODWORD(v65) = v70;
          v86 = 4LL;
          v85 = &v65;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&v71, 0, 3u, &v84);
          v43 = dword_1C024AA90;
        }
        if ( v43 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          LODWORD(v61) = v70;
          v89 = 4LL;
          v88 = (void **)&v61;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&v71, 0, 3u, &v87);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v36;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v46 = PsGetCurrentProcess(v45, v44),
          v47 = PsGetProcessSessionIdEx(v46),
          v48 = PsGetCurrentThreadProcess(),
          v47 == (unsigned int)PsGetProcessSessionIdEx(v48)) )
    {
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v52 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v52 )
          v50 = *v52;
      }
      v53 = PsGetCurrentProcessWin32Process(v51);
      if ( v50
        && v53
        && (*(_DWORD *)(v50 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v50 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v53 + 12) & 0x8000) != 0 )
      {
        v54 = (PERESOURCE *)GetDomainLockRef(12);
        v61 = v54;
        if ( v54 == (PERESOURCE *)&gDomainDummyLock )
        {
          v59 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*v54) == 1 )
        {
          v59 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v54);
        v55 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v55[2];
            v56 = *v55;
            v55[2] = 0LL;
            if ( !*(_DWORD *)(v56 + 8) )
            {
              v59 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v57 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v57 == (PERESOURCE *)&gDomainDummyLock )
            {
              v58 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v57);
            HMUnlockObject(*v55);
            tagDomLock::LockExclusive(v57);
            v55 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v54 = v61;
          v3 = v60;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v54);
      }
    }
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
