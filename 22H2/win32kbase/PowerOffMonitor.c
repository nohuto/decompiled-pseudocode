/*
 * XREFs of PowerOffMonitor @ 0x1C00C2200
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C1188 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     PostWinlogonMessage @ 0x1C00763B0 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0079384 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0079638 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0079F90 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C007A2C4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvSetMonitorPowerState @ 0x1C00C3910 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0119164 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  char v2; // r13
  int v3; // ebx
  __int64 v4; // rdi
  enum POWER_MONITOR_REQUEST_REASON v5; // r14d
  int v6; // r12d
  int v7; // r15d
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rax
  PVOID *v39; // rdi
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h]
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  int v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch] BYREF
  int v48; // [rsp+68h] [rbp-98h] BYREF
  enum POWER_MONITOR_REQUEST_REASON v49; // [rsp+6Ch] [rbp-94h]
  int v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned __int8 v53; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+98h] [rbp-68h] BYREF
  int *v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C8h] [rbp-38h] BYREF
  int *v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+F8h] [rbp-8h] BYREF
  int *v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h]

  v2 = gPowerTransitionsState;
  v43 = a2;
  v3 = 0;
  v46 = 0;
  v4 = a2;
  v49 = a1;
  v5 = a1;
  v45 = 0;
  v6 = 0;
  v42 = 0LL;
  v44 = 0;
  v50 = gPowerTransitionsState;
  if ( gPowerTransitionsState || qword_1C02511A4 )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v41 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v41, 4LL, 0LL, 0LL, 0, 0);
        v46 = 1;
      }
      UserSessionSwitchBlock_Start();
      v7 = -1073741637;
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || ((v6 = 1, gfIsFadingInProgress = 1, !qword_1C0256570) ? (v8 = -1073741637) : (v8 = qword_1C0256570()), v8 < 0) )
      {
        v10 = v42;
      }
      else
      {
        if ( qword_1C0256578 )
          v9 = qword_1C0256578(&v45, &v42, &v44);
        else
          v9 = -1073741637;
        v10 = v42;
        if ( v9 < 0 )
          v10 = 0LL;
        v42 = v10;
      }
      if ( v44 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit();
        if ( qword_1C0256580 )
          v11 = qword_1C0256580();
        else
          v11 = -1073741637;
        if ( v11 >= 0 && qword_1C0256588 )
          qword_1C0256588(v45, v42, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v42 != 0, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v53 = 1;
          v36 = PsGetCurrentThreadWin32Thread(v13);
          v52 = v36;
          if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
            {
              v40 = v53;
              v57 = 4LL;
              v56 = &v40;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024AA90,
                (unsigned __int8 *)dword_1C0217FD7,
                &ActivityId,
                0LL,
                3u,
                &v55);
            }
          }
        }
        else
        {
          v52 = 0LL;
        }
        v15 = 0LL;
        while ( 1 )
        {
          v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v16 )
            v15 = *v16;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v15 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v52
          && (*(_DWORD *)(v52 + 48) || *(int *)(v52 + 24) > 0) )
        {
          *(_DWORD *)(v52 + 44) = 1;
          *(GUID *)(v52 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024AA90 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
            {
              v47 = v53;
              v60 = 4LL;
              v59 = &v47;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024AA90,
                (unsigned __int8 *)dword_1C0217F80,
                &ActivityId,
                0LL,
                3u,
                &v58);
              v37 = dword_1C024AA90;
            }
            if ( v37 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
            {
              v48 = v53;
              v63 = 4LL;
              v62 = &v48;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024AA90,
                (unsigned __int8 *)dword_1C0217FAD,
                &ActivityId,
                0LL,
                3u,
                &v61);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v15;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v24 = PsGetCurrentProcess(v23, v22),
              ProcessSessionId = PsGetProcessSessionIdEx(v24),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v29 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v29 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
          if ( v29
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v29 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v29 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            if ( DomainLockRef == gDomainDummyLock )
            {
              v40 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v40 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v34 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
                v38 = *v34;
                v34[2] = 0LL;
                if ( !*(_DWORD *)(v38 + 8) )
                {
                  v40 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v39 = (PVOID *)GetDomainLockRef(12);
                if ( v39 == gDomainDummyLock )
                {
                  v41 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v39);
                HMUnlockObject(*v34);
                tagDomLock::LockExclusive((PERESOURCE *)v39);
                v34 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v5 = v49;
              v2 = v50;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
          v4 = v43;
        }
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v10 != 0, 0LL);
      }
      if ( qword_1C0256590 )
        v35 = qword_1C0256590();
      else
        v35 = -1073741637;
      if ( v35 >= 0 && qword_1C0256598 )
        qword_1C0256598();
      LOBYTE(v27) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 4LL, v27, v4);
      if ( v42 )
      {
        if ( qword_1C02565C0 )
          v7 = qword_1C02565C0();
        if ( v7 >= 0 && qword_1C02565C8 )
          qword_1C02565C8();
      }
      if ( v6 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
      v3 = v46;
    }
    if ( v5 != MonitorRequestReasonGracePeriod && v5 != MonitorRequestReasonNearProximity )
      qword_1C02511E8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, v5, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v3 )
    {
      v51 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v51, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
