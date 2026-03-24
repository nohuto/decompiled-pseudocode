/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C0087230
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001DD60 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C001F900 (NtUserEnumDisplaySettings.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00B46E0 (AcquireCriticalSectionAndCheckState.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rdi
  __int64 *i; // rsi
  PVOID v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  LARGE_INTEGER *v26; // rbx
  struct tagTHREADINFO *v27; // rbx
  struct tagTHREADINFO **v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KTHREAD *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  PERESOURCE *v41; // rdi
  __int64 *j; // rsi
  __int64 v43; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r8d
  __int64 v51; // rax
  PERESOURCE *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 v58; // rax
  PERESOURCE *v59; // rbx
  int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  int v61; // [rsp+50h] [rbp-B8h] BYREF
  int v62; // [rsp+54h] [rbp-B4h] BYREF
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
  int *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v88; // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+1C8h] [rbp+C0h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v49 = PsGetCurrentThreadWin32Thread(v1);
    v66 = v49;
    if ( v49 && (*(int *)(v49 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v60 = ActivityId_4;
        v74 = 4LL;
        v73 = &v60;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId_8, 0, 3u, &v72);
      }
    }
  }
  else
  {
    v66 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
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
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v61 = ActivityId_4;
        v77 = 4LL;
        v76 = &v61;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&ActivityId_8, 0, 3u, &v75);
        v50 = dword_1C024BA90;
      }
      if ( v50 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v62 = ActivityId_4;
        v80 = 4LL;
        v79 = &v62;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&ActivityId_8, 0, 3u, &v78);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v43 = PsGetCurrentProcess(v11, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(v43),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( v13 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v13 + 488) & 0x1000000) != 0 )
        {
          v18 = *(unsigned int *)(v13 + 1232);
          if ( (v18 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v51 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v51 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              v52 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v52 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              ExReleaseResourceAndLeaveCriticalRegion(*v52);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v52);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  while ( gfSwitchInProgress )
  {
    v22 = (PVOID)PsGetCurrentProcess(v18, v17);
    if ( v22 && v22 == g_pepDwm )
      break;
    ++gcSwitchInProgressWaiters;
    v23 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( qword_1C0257C48 )
      qword_1C0257C48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
      v23 = (unsigned int)gdwInAtomicOperation;
      if ( (_DWORD)gdwInAtomicOperation )
      {
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v53 = PsGetCurrentThreadWin32Thread(v23);
      v54 = v53;
      if ( v53 )
      {
        v55 = *(_DWORD *)(v53 + 24);
        if ( (*(_DWORD *)(v54 + 44) || *(_DWORD *)(v54 + 48) || v55 > 0)
          && (unsigned int)dword_1C024BA90 > 6
          && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218F81, v54 + 28, 0, 2u, &v90);
        }
        *(_DWORD *)(v54 + 44) = 0;
        *(_OWORD *)(v54 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v26 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24);
    if ( v26 )
      v26[1] = KeQueryPerformanceCounter(0LL);
    v71 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v70 = 1;
      v56 = PsGetCurrentThreadWin32Thread(v25);
      v69 = v56;
      if ( v56 && (*(int *)(v56 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
      {
        EtwActivityIdControl(3u, &v71);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v63 = v70;
          v83 = 4LL;
          v82 = &v63;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v71, 0, 3u, &v81);
        }
      }
    }
    else
    {
      v69 = 0LL;
    }
    v27 = 0LL;
    while ( 1 )
    {
      v28 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v28 )
        v27 = *v28;
      v31 = (PVOID)PsGetCurrentProcess(v30, v29);
      if ( v31 )
      {
        if ( v31 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v33, v32) == gpepCSRSS && v27 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v27 == gptiRit )
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
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v64 = v70;
          v86 = 4LL;
          v85 = &v64;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v71, 0, 3u, &v84);
          v57 = dword_1C024BA90;
        }
        if ( v57 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v65) = v70;
          v89 = 4LL;
          v88 = &v65;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v71, 0, 3u, &v87);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v27;
    gbValidateHandleForIL = 1;
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      v46 = PsGetCurrentProcess(v35, v34);
      v47 = PsGetProcessSessionIdEx(v46);
      v48 = PsGetCurrentThreadProcess();
      if ( v47 != (unsigned int)PsGetProcessSessionIdEx(v48) )
        continue;
    }
    v36 = KeGetCurrentThread();
    v37 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      v39 = (__int64 *)PsGetThreadWin32Thread(v36);
      if ( v39 )
        v37 = *v39;
    }
    v40 = PsGetCurrentProcessWin32Process(v38);
    if ( v37 )
    {
      if ( v40 )
      {
        if ( (*(_DWORD *)(v37 + 488) & 0x1000000) != 0 )
        {
          v18 = *(unsigned int *)(v37 + 1232);
          if ( (v18 & 0x80u) == 0LL && (*(_DWORD *)(v40 + 12) & 0x8000) != 0 )
          {
            v41 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v41 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            if ( ExIsResourceAcquiredExclusiveLite(*v41) == 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*v41);
            for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
              v58 = *j;
              j[2] = 0LL;
              if ( !*(_DWORD *)(v58 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              v59 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v59 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              ExReleaseResourceAndLeaveCriticalRegion(*v59);
              HMUnlockObject(*j);
              tagDomLock::LockExclusive(v59);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v41);
          }
        }
      }
    }
  }
  return 0LL;
}
