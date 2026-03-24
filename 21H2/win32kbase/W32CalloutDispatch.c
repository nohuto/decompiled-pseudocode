/*
 * XREFs of W32CalloutDispatch @ 0x1C004DFB0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     CoreMsgObjectCallout @ 0x1C004DEAC (CoreMsgObjectCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C004E820 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C004E8A0 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C004E98C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     RIMObjectManagerCallout @ 0x1C004EB98 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x1C004EC24 (UserJobCallout.c)
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00515C8 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0051A10 (UserProcessThawCallout.c)
 *     UserPowerStateCallout @ 0x1C00763AC (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C0076700 (QueuePowerRequest.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ActivationObjectCallout @ 0x1C00B1CFC (ActivationObjectCallout.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C00C4C78 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsProcessWin32kLockedOut @ 0x1C00C4D20 (IsProcessWin32kLockedOut.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C0117700 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C0117748 (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C011C9DC (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C011CF2C (UserProcessTimerStatisticsCallout.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C01CC2AC (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3)
{
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
  __int64 *i; // r14
  __int64 v23; // r14
  struct _KTHREAD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 ProcessJob; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 ProcessWin32WindowStation; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v39)(__int64 *); // rax
  unsigned int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v45; // rcx
  LARGE_INTEGER *v46; // rbx
  __int64 v47; // rax
  struct tagTHREADINFO *v48; // rbx
  struct tagTHREADINFO **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PVOID v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rax
  struct _KTHREAD *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rax
  PERESOURCE *v66; // rbx
  __int64 *j; // r14
  __int64 v68; // rax
  PERESOURCE *v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // r8d
  __int64 v72; // rax
  PERESOURCE *v73; // rdi
  __int64 v74; // rax
  int v75; // ebx
  __int64 v76; // rax
  _QWORD *v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rbx
  int v82; // eax
  int v83; // [rsp+30h] [rbp-D0h] BYREF
  int v84; // [rsp+34h] [rbp-CCh] BYREF
  int v85; // [rsp+38h] [rbp-C8h] BYREF
  int v86; // [rsp+3Ch] [rbp-C4h] BYREF
  int v87; // [rsp+40h] [rbp-C0h] BYREF
  int v88; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v89; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v90; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v91; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v93; // [rsp+70h] [rbp-90h]
  unsigned __int8 v94; // [rsp+78h] [rbp-88h]
  GUID v95; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+90h] [rbp-70h] BYREF
  int *v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+C0h] [rbp-40h] BYREF
  int *v100; // [rsp+E0h] [rbp-20h]
  __int64 v101; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+F0h] [rbp-10h] BYREF
  int *v103; // [rsp+110h] [rbp+10h]
  __int64 v104; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+120h] [rbp+20h] BYREF
  int *v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+150h] [rbp+50h] BYREF
  int *v109; // [rsp+170h] [rbp+70h]
  __int64 v110; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v111; // [rsp+180h] [rbp+80h] BYREF
  int *v112; // [rsp+1A0h] [rbp+A0h]
  __int64 v113; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( qword_1C0256A50 && (int)qword_1C0256A50() >= 0 && qword_1C0256A58 && (unsigned int)qword_1C0256A58() && a2 > 1 )
    return 3221227292LL;
  if ( a2 == 7 )
  {
    if ( qword_1C0256A60 && (int)qword_1C0256A60() >= 0 && qword_1C0256A68 )
      qword_1C0256A68();
    return 0LL;
  }
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v95 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v94 = 1;
      v70 = PsGetCurrentThreadWin32Thread(v5);
      v93 = v70;
      if ( v70 && (*(int *)(v70 + 24) > 0 || *(_DWORD *)(v93 + 48)) )
      {
        EtwActivityIdControl(3u, &v95);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v86 = v94;
          v107 = 4LL;
          v106 = &v86;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v95, 0, 3u, &v105);
        }
      }
    }
    else
    {
      v93 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v93 && (*(_DWORD *)(v93 + 48) || *(int *)(v93 + 24) > 0) )
    {
      *(_DWORD *)(v93 + 44) = 1;
      *(GUID *)(v93 + 28) = v95;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v87 = v94;
          v110 = 4LL;
          v109 = &v87;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v95, 0, 3u, &v108);
          v71 = dword_1C024BA90;
        }
        if ( v71 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v88 = v94;
          v113 = 4LL;
          v112 = &v88;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v95, 0, 3u, &v111);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v42 = PsGetCurrentProcess(v15, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(v42),
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
          v83 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v83 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
          v72 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v72 + 8) )
          {
            v83 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v73 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v73 == (PERESOURCE *)&gDomainDummyLock )
          {
            v84 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v73);
          HMUnlockObject(*i);
          tagDomLock::LockExclusive(v73);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v89 = 0LL;
    v23 = 0LL;
    v24 = KeGetCurrentThread();
    v25 = 0LL;
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v74 = PsGetCurrentProcess(v27, v26),
           v75 = PsGetProcessSessionIdEx(v74),
           v76 = PsGetCurrentThreadProcess(),
           v75 == (unsigned int)PsGetProcessSessionIdEx(v76)))
      && (v28 = (__int64 *)PsGetThreadWin32Thread(v24)) != 0LL
      && (v25 = *v28) != 0
      && (*(_DWORD *)(v25 + 488) & 0x20000000) != 0
      && (v30 = *(_QWORD *)(*(_QWORD *)(v25 + 424) + 768LL), (*(_DWORD *)(v30 + 24) & 0x20) != 0) )
    {
      v23 = *(_QWORD *)(v30 + 16);
    }
    else
    {
      v31 = PsGetCurrentProcess(v30, v29);
      ProcessJob = PsGetProcessJob(v31);
      v33 = ProcessJob;
      if ( v25 || !ProcessJob || (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) == 0 )
        goto LABEL_42;
      if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
      {
        v78 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v78[1] == v33 )
              break;
            v78 = (_QWORD *)*v78;
          }
          while ( v78 );
        }
        v23 = v78[2];
        goto LABEL_44;
      }
      if ( !(unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
      {
LABEL_42:
        if ( qword_1C0257A68
          && (int)qword_1C0257A68() >= 0
          && (v36 = PsGetCurrentProcess(v35, v34),
              ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v36),
              qword_1C0257A70)
          && (int)qword_1C0257A70(v24, ProcessWin32WindowStation, 32LL, &v89, 1) >= 0 )
        {
          v23 = *(_QWORD *)(v89 + 168);
        }
        else if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
                || !PsGetCurrentProcessWin32Process(v30)
                || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
               && qword_1C0257A78
               && (int)qword_1C0257A78() >= 0
               && qword_1C0257A80 )
        {
          v23 = qword_1C0257A80();
        }
        goto LABEL_44;
      }
      UserSetLastError(5LL, v79);
    }
LABEL_44:
    *a3 = v23;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( qword_1C0257C48 )
      qword_1C0257C48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      v83 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
      v30 = (unsigned int)gdwInAtomicOperation;
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
      v80 = PsGetCurrentThreadWin32Thread(v30);
      v81 = v80;
      if ( v80 )
      {
        v82 = *(_DWORD *)(v80 + 24);
        if ( (*(_DWORD *)(v81 + 44) || *(_DWORD *)(v81 + 48) || v82 > 0)
          && (unsigned int)dword_1C024BA90 > 6
          && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218F81, v81 + 28, 0, 2u, &v114);
        }
        *(_DWORD *)(v81 + 44) = 0;
        *(_OWORD *)(v81 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( !qword_1C0256DC0 || (int)qword_1C0256DC0() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256DC8;
      goto LABEL_65;
    case 1u:
      if ( !qword_1C0256DD0 || (int)qword_1C0256DD0() < 0 || !qword_1C0256DD8 )
        goto LABEL_134;
      return qword_1C0256DD8(*a3, *((unsigned int *)a3 + 2));
    case 3u:
      if ( gbPowerCalloutsReady && gbVideoInitialized )
        return QueuePowerRequest(a3, 0LL);
      else
        return 3221225473LL;
    case 4u:
      return UserPowerStateCallout(a3);
    case 5u:
      return UserPowerInfoCallout(
               *(_DWORD *)a3,
               *((unsigned __int8 *)a3 + 4),
               *((_DWORD *)a3 + 2),
               a3[2],
               *((_DWORD *)a3 + 6),
               a3[4]);
    case 6u:
      if ( !qword_1C0256DE0 || (int)qword_1C0256DE0() < 0 )
        goto LABEL_134;
      return UserJobCallout(a3);
    case 8u:
      if ( !qword_1C0256E68 || (int)qword_1C0256E68() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256E70;
      goto LABEL_65;
    case 9u:
      if ( !qword_1C0256E78 || (int)qword_1C0256E78() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256E80;
      goto LABEL_65;
    case 0xAu:
      if ( !qword_1C0256E88 || (int)qword_1C0256E88() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256E90;
      goto LABEL_65;
    case 0xBu:
      if ( !qword_1C0256E98 || (int)qword_1C0256E98() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256EA0;
      goto LABEL_65;
    case 0xCu:
      if ( !qword_1C0256EA8 || (int)qword_1C0256EA8() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256EB0;
      goto LABEL_65;
    case 0xDu:
      if ( !qword_1C0256F38 || (int)qword_1C0256F38() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256F40;
      goto LABEL_65;
    case 0xEu:
      if ( !qword_1C0256F48 || (int)qword_1C0256F48() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256F50;
      goto LABEL_65;
    case 0xFu:
      return ParseWindowStation(a3);
    case 0x10u:
      if ( !qword_1C0256F58 || (int)qword_1C0256F58() < 0 )
        goto LABEL_134;
      v39 = (__int64 (__fastcall *)(__int64 *))qword_1C0256F60;
LABEL_65:
      if ( v39 )
        result = v39(a3);
      else
LABEL_134:
        result = 3221225659LL;
      break;
    case 0x11u:
      return 0LL;
    case 0x12u:
      return CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
    case 0x13u:
      return CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
    case 0x14u:
      return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
               *(_QWORD *)(a3[1] + 8),
               a3);
    case 0x15u:
      v40 = 0;
      v41 = *(_QWORD *)(*a3 + 8);
      if ( v41 )
        return (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, a3);
      return v40;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C02518A0)(a3);
      return UserProcessFreezeCallout(a3);
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C02518A8)(a3);
      return UserProcessThawCallout(a3);
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C0251A70)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C0251A78)(a3);
      return 0LL;
    case 0x1Au:
      return W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      return RIMObjectManagerCallout(a2, a3);
    case 0x1Fu:
      if ( !qword_1C0257670 )
        goto LABEL_134;
      result = qword_1C0257670();
      break;
    case 0x20u:
      v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v46 )
        v46[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v91 = 1;
        v47 = PsGetCurrentThreadWin32Thread(v45);
        v90 = v47;
        if ( v47 && (*(int *)(v47 + 24) > 0 || *(_DWORD *)(v90 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v83 = v91;
            v98 = 4LL;
            v97 = &v83;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FF7,
              (int)&ActivityId,
              0,
              3u,
              &v96);
          }
        }
      }
      else
      {
        v90 = 0LL;
      }
      v48 = 0LL;
      while ( 1 )
      {
        v49 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v49 )
          v48 = *v49;
        v52 = (PVOID)PsGetCurrentProcess(v51, v50);
        if ( v52 )
        {
          if ( v52 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v54, v53) == gpepCSRSS && v48 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v48 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v90 && (*(_DWORD *)(v90 + 48) || *(int *)(v90 + 24) > 0) )
      {
        *(_DWORD *)(v90 + 44) = 1;
        *(GUID *)(v90 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v84 = v91;
            v101 = 4LL;
            v100 = &v84;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FA0,
              (int)&ActivityId,
              0,
              3u,
              &v99);
            v55 = dword_1C024BA90;
          }
          if ( v55 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v85 = v91;
            v104 = 4LL;
            v103 = &v85;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FCD,
              (int)&ActivityId,
              0,
              3u,
              &v102);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v48;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v58 = PsGetCurrentProcess(v57, v56),
            v59 = PsGetProcessSessionIdEx(v58),
            v60 = PsGetCurrentThreadProcess(),
            v59 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
      {
        v61 = KeGetCurrentThread();
        v62 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v64 = (__int64 *)PsGetThreadWin32Thread(v61);
          if ( v64 )
            v62 = *v64;
        }
        v65 = PsGetCurrentProcessWin32Process(v63);
        if ( v62
          && v65
          && (*(_DWORD *)(v62 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v62 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v65 + 12) & 0x8000) != 0 )
        {
          v66 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v66 == (PERESOURCE *)&gDomainDummyLock )
          {
            v84 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*v66) == 1 )
          {
            v84 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v66);
          for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)j[2];
            v68 = *j;
            j[2] = 0LL;
            if ( !*(_DWORD *)(v68 + 8) )
            {
              v84 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v69 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v69 == (PERESOURCE *)&gDomainDummyLock )
            {
              v83 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v69);
            HMUnlockObject(*j);
            tagDomLock::LockExclusive(v69);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v66);
        }
      }
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit();
      return 0LL;
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
      return CoreMsgObjectCallout(a2, a3);
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
      return ActivationObjectCallout(a2, a3);
    case 0x29u:
      return UserProcessTimerDelayCallout(a3);
    case 0x2Au:
      return UserProcessTimerStatisticsCallout(a3);
    default:
      v83 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1250LL);
      return 3221225485LL;
  }
  return result;
}
