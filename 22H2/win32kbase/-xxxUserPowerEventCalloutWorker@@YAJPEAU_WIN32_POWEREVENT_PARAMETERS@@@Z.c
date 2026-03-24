/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0078210
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0077FA0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     PostWinlogonMessage @ 0x1C00763B0 (PostWinlogonMessage.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C0078A78 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0078A98 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerInputEvent @ 0x1C0078B20 (PowerInputEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0078BA0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C0078C00 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0078C2C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C0078C80 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0078FA0 (PowerUnDimMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0079384 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0079638 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C007A2C4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0086660 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostPlaySoundMessage @ 0x1C00A9898 (PostPlaySoundMessage.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00B5040 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00B6770 (EtwTraceIdleActionExpiration.c)
 *     PowerResumeSuspendEvent @ 0x1C00C1EC0 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C2164 (IsxxxSendMessageBSMSupported.c)
 *     PowerOffMonitor @ 0x1C00C2200 (PowerOffMonitor.c)
 *     IsPowerOnGdiSupported @ 0x1C00C2A64 (IsPowerOnGdiSupported.c)
 *     IsPowerOffGdiSupported @ 0x1C00C5324 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01187F0 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01188F4 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01189B4 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C0119190 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C011A2F0 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C011A520 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq_EtwWriteTransfer @ 0x1C0125730 (McTemplateK0dxq_EtwWriteTransfer.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01FC488 (IsSetForegroundPrioritySupported.c)
 *     IsStartScreenSaverSupported @ 0x1C01FC4B4 (IsStartScreenSaverSupported.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r13
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  void (__fastcall *v14)(_QWORD, __int64, __int64, _QWORD, int *, int); // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  struct _KTHREAD *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  LARGE_INTEGER *v39; // rbx
  struct tagTHREADINFO *v40; // rbx
  struct tagTHREADINFO **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _KTHREAD *v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rax
  void (__fastcall *v59)(__int64); // rax
  __int64 v60; // rcx
  PERESOURCE *v61; // rdi
  __int64 *v62; // r12
  PERESOURCE *v63; // rbx
  __int64 *v64; // r12
  int v65; // r9d
  __int64 GlobalTickCount; // rbx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v74; // rax
  struct tagTHREADINFO *v75; // rbx
  struct tagTHREADINFO **v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  PVOID CurrentProcess; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v94; // r12
  __int64 v95; // rax
  PERESOURCE *v96; // rdi
  __int64 v97; // rax
  unsigned int v98; // r8d
  __int64 v99; // rax
  PERESOURCE *v100; // rbx
  __int64 v101; // rax
  unsigned int v102; // r8d
  __int64 v103; // rax
  PERESOURCE *v104; // rdi
  int v105; // r9d
  enum _MONITOR_DISPLAY_STATE v106; // ecx
  int v107; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v108; // [rsp+50h] [rbp-B8h] BYREF
  __int64 InputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  int v110; // [rsp+60h] [rbp-A8h] BYREF
  int v111; // [rsp+64h] [rbp-A4h] BYREF
  int v112; // [rsp+68h] [rbp-A0h] BYREF
  int v113; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v114; // [rsp+70h] [rbp-98h] BYREF
  int v115; // [rsp+74h] [rbp-94h] BYREF
  int v116; // [rsp+78h] [rbp-90h] BYREF
  BOOL v117; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v118; // [rsp+80h] [rbp-88h]
  __int64 v119; // [rsp+88h] [rbp-80h]
  unsigned __int64 OutputBuffer; // [rsp+90h] [rbp-78h] BYREF
  int v121; // [rsp+98h] [rbp-70h] BYREF
  int v122; // [rsp+9Ch] [rbp-6Ch]
  __int128 v123; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v124; // [rsp+D0h] [rbp-38h]
  unsigned __int8 v125; // [rsp+D8h] [rbp-30h]
  GUID v126; // [rsp+DCh] [rbp-2Ch] BYREF
  __int64 v127; // [rsp+F0h] [rbp-18h]
  unsigned __int8 v128; // [rsp+F8h] [rbp-10h]
  GUID v129; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 v130; // [rsp+110h] [rbp+8h]
  unsigned __int8 v131; // [rsp+118h] [rbp+10h]
  GUID v132; // [rsp+11Ch] [rbp+14h] BYREF
  _QWORD v133[10]; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+188h] [rbp+80h] BYREF
  int *v135; // [rsp+1A8h] [rbp+A0h]
  __int64 v136; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v138; // [rsp+1D8h] [rbp+D0h]
  __int64 v139; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v141; // [rsp+208h] [rbp+100h]
  __int64 v142; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+218h] [rbp+110h] BYREF
  int *v144; // [rsp+238h] [rbp+130h]
  __int64 v145; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+248h] [rbp+140h] BYREF
  int *v147; // [rsp+268h] [rbp+160h]
  __int64 v148; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+278h] [rbp+170h] BYREF
  int *v150; // [rsp+298h] [rbp+190h]
  __int64 v151; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v152; // [rsp+2A8h] [rbp+1A0h] BYREF
  int *v153; // [rsp+2C8h] [rbp+1C0h]
  __int64 v154; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+2D8h] [rbp+1D0h] BYREF
  int *v156; // [rsp+2F8h] [rbp+1F0h]
  __int64 v157; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v158; // [rsp+308h] [rbp+200h] BYREF
  int *v159; // [rsp+328h] [rbp+220h]
  __int64 v160; // [rsp+330h] [rbp+228h]

  memset(v133, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v133[1]);
  v5 = 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v7 = *(_DWORD *)a1;
  v133[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v133[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v133[3]) = 16;
  LOBYTE(v133[6]) = -1;
  v118 = v7;
  v119 = v6;
  OutputBuffer = 0LL;
  v123 = 0LL;
  InputBuffer = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq_EtwWriteTransfer(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v6, 0);
  if ( !gbPowerCalloutsReady )
  {
    v11 = -1073741823;
    v12 = (unsigned int)v7;
    goto LABEL_33;
  }
  if ( v7 <= 8 )
  {
    if ( v7 != 8 )
    {
      v8 = (unsigned int)v7;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v11 = PostWinlogonMessage(256LL, v6);
          if ( !v11 )
            PostPlaySoundMessage(v6);
          goto LABEL_32;
        }
        v9 = (unsigned int)(v7 - 2);
        switch ( v7 )
        {
          case 2:
            if ( !gbNonServiceSession )
            {
              *(_QWORD *)((char *)&v123 + 4) = 10LL;
              WORD6(v123) = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit();
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v123, 0x10u, 0LL, 0);
              CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v71);
              if ( CurrentThreadWin32Thread )
                CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
              v126 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v125 = 1;
                v74 = PsGetCurrentThreadWin32Thread(v72);
                v124 = v74;
                if ( v74 && (*(int *)(v74 + 24) > 0 || *(_DWORD *)(v124 + 48)) )
                {
                  EtwActivityIdControl(3u, &v126);
                  if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
                  {
                    v107 = v125;
                    v136 = 4LL;
                    v135 = &v107;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (int)&dword_1C024AA90,
                      (int)&dword_1C0217FD7,
                      (int)&v126,
                      0,
                      3u,
                      &v134);
                  }
                }
              }
              else
              {
                v124 = 0LL;
              }
              v75 = 0LL;
              while ( 1 )
              {
                v76 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v76 )
                  v75 = *v76;
                CurrentProcess = (PVOID)PsGetCurrentProcess(v78, v77);
                if ( CurrentProcess )
                {
                  if ( CurrentProcess == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v81, v80) == gpepCSRSS && v75 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v75 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v124
                && (*(_DWORD *)(v124 + 48) || *(int *)(v124 + 24) > 0) )
              {
                *(_DWORD *)(v124 + 44) = 1;
                *(GUID *)(v124 + 28) = v126;
                if ( (unsigned int)dword_1C024AA90 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
                  {
                    LODWORD(v108) = v125;
                    v139 = 4LL;
                    v138 = &v108;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (int)&dword_1C024AA90,
                      (int)&dword_1C0217F80,
                      (int)&v126,
                      0,
                      3u,
                      &v137);
                    v82 = dword_1C024AA90;
                  }
                  if ( v82 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
                  {
                    v110 = v125;
                    v142 = 4LL;
                    v141 = &v110;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (int)&dword_1C024AA90,
                      (int)&dword_1C0217FAD,
                      (int)&v126,
                      0,
                      3u,
                      &v140);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v75;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v85 = PsGetCurrentProcess(v84, v83),
                    ProcessSessionId = PsGetProcessSessionIdEx(v85),
                    CurrentThreadProcess = PsGetCurrentThreadProcess(),
                    ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
              {
                CurrentThread = KeGetCurrentThread();
                v89 = 0LL;
                if ( !IsThreadCrossSessionAttached() )
                {
                  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                  if ( ThreadWin32Thread )
                    v89 = *ThreadWin32Thread;
                }
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v90);
                v9 = CurrentProcessWin32Process;
                if ( v89
                  && CurrentProcessWin32Process
                  && (*(_DWORD *)(v89 + 488) & 0x1000000) != 0
                  && (*(_DWORD *)(v89 + 1232) & 0x80u) == 0
                  && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                {
                  DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
                  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                  {
                    LODWORD(v108) = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
                  }
                  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                  {
                    LODWORD(v108) = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
                  }
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
                  v94 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v94[2];
                      v95 = *v94;
                      v94[2] = 0LL;
                      if ( !*(_DWORD *)(v95 + 8) )
                      {
                        LODWORD(v108) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v96 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v96 == (PERESOURCE *)&gDomainDummyLock )
                      {
                        v107 = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      }
                      ExReleaseResourceAndLeaveCriticalRegion(*v96);
                      HMUnlockObject(*v94);
                      tagDomLock::LockExclusive(v96);
                      v94 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v6 = v119;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
                }
              }
            }
            v121 = 16;
            v122 = 16;
            if ( (int)IsxxxSendMessageBSMSupported(v9) < 0 )
              goto LABEL_31;
            v14 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02564F8;
            if ( !qword_1C02564F8 )
              goto LABEL_31;
            v16 = 536LL;
            v15 = 10LL;
            break;
          case 3:
            v121 = 16;
            v122 = 16;
            if ( (int)IsxxxSendMessageBSMSupported((unsigned int)(v7 - 3)) < 0 )
              goto LABEL_31;
            v14 = (void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int *, int))qword_1C02564F8;
            if ( !qword_1C02564F8 )
              goto LABEL_31;
            v15 = 0LL;
            v16 = 30LL;
            break;
          case 4:
            goto LABEL_11;
          case 5:
            if ( gbTtmEnabled )
            {
              LODWORD(v108) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1035LL);
            }
            if ( gfSwitchInProgress )
              goto LABEL_31;
            HIDWORD(InputBuffer) = v6;
            PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v6);
            if ( !gProtocolType
              && byte_1C0250768
              && !dword_1C0251194
              && (int)IsPowerOffGdiSupported() >= 0
              && qword_1C0256518 )
            {
              qword_1C0256518();
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_31;
            if ( HIDWORD(InputBuffer) == 17 )
              goto LABEL_31;
            v59 = (void (__fastcall *)(__int64))qword_1C0256508;
            if ( !qword_1C0256508 )
              goto LABEL_31;
            v60 = 2LL;
            goto LABEL_93;
          case 6:
            if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 2LL) )
              EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
            if ( !gPowerTransitionsState )
            {
              if ( (*(_DWORD *)gpsi & 0x200) == 0 )
                goto LABEL_31;
              GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
              if ( GlobalTickCount == CInputGlobals::GetLastInputTime(gpInputGlobals) )
                goto LABEL_31;
            }
            if ( (unsigned int)PowerIsDisplayRequired() && !gbBlockSendInputResets )
              goto LABEL_31;
            if ( gppiScreenSaver )
            {
              v67 = *(_DWORD *)(gppiScreenSaver + 12);
              if ( (v67 & 0x400000) == 0 )
              {
                *(_DWORD *)(gppiScreenSaver + 12) = v67 | 0x400000;
                if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                {
                  v68 = *(_QWORD *)(gppiScreenSaver + 328);
                  if ( v68 )
                  {
                    if ( qword_1C0256088 )
                      qword_1C0256088(v68, 1LL);
                  }
                }
              }
              goto LABEL_31;
            }
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120) )
            {
              v69 = qword_1C0256550 ? qword_1C0256550() : -1073741637;
              if ( v69 >= 0 && !(qword_1C0256558 ? qword_1C0256558(*(_QWORD *)(gpqForeground + 120)) : 0) )
              {
                if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 && qword_1C0256568 )
                  qword_1C0256568(1LL);
                if ( qword_1C0256338 )
                {
                  LOBYTE(v5) = (*(_DWORD *)gpsi & 0x200) != 0;
                  qword_1C0256338(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, v5);
                  v11 = 0;
                  goto LABEL_32;
                }
                goto LABEL_31;
              }
            }
            if ( (int)IsStartScreenSaverSupported() < 0 )
              goto LABEL_31;
            v59 = (void (__fastcall *)(__int64))qword_1C0256568;
LABEL_91:
            if ( !v59 )
              goto LABEL_31;
            v60 = 0LL;
LABEL_93:
            v59(v60);
            goto LABEL_31;
          case 7:
            if ( gfSwitchInProgress || dword_1C0251198 || !gPowerTransitionsState )
              goto LABEL_31;
            PowerDimMonitor();
            if ( !gProtocolType )
              UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1, v65);
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_31;
            v59 = (void (__fastcall *)(__int64))qword_1C0256508;
            if ( !qword_1C0256508 )
              goto LABEL_31;
            v60 = 1LL;
            goto LABEL_93;
          default:
LABEL_297:
            v11 = -1073741822;
            goto LABEL_32;
        }
        v14(0LL, v16, v15, 0LL, &v121, 1);
        goto LABEL_31;
      }
      if ( !gProtocolType && gPowerAdaptiveState )
      {
        LOBYTE(v8) = 1;
        gPowerAdaptiveState = 0;
        PowerInputEvent(v8);
      }
      if ( !gbNonServiceSession )
      {
        LOBYTE(v4) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
        {
          *(_QWORD *)((char *)&v123 + 4) = 7LL;
          WORD6(v123) = 0;
          if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
          UserSessionSwitchLeaveCrit();
          ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v123, 0x10u, 0LL, 0);
          v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17);
          if ( v19 )
            v19[1] = KeQueryPerformanceCounter(0LL);
          v129 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v128 = 1;
            v97 = PsGetCurrentThreadWin32Thread(v18);
            v127 = v97;
            if ( v97 && (*(int *)(v97 + 24) > 0 || *(_DWORD *)(v127 + 48)) )
            {
              EtwActivityIdControl(3u, &v129);
              if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
              {
                v111 = v128;
                v145 = 4LL;
                v144 = &v111;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024AA90,
                  (int)&dword_1C0217FD7,
                  (int)&v129,
                  0,
                  3u,
                  &v143);
              }
            }
          }
          else
          {
            v127 = 0LL;
          }
          v20 = 0LL;
          while ( 1 )
          {
            v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v21 )
              v20 = *v21;
            v24 = (PVOID)PsGetCurrentProcess(v23, v22);
            if ( v24 )
            {
              if ( v24 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v20 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v127
            && (*(_DWORD *)(v127 + 48) || *(int *)(v127 + 24) > 0) )
          {
            *(_DWORD *)(v127 + 44) = 1;
            *(GUID *)(v127 + 28) = v129;
            if ( (unsigned int)dword_1C024AA90 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
              {
                v112 = v128;
                v148 = 4LL;
                v147 = &v112;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024AA90,
                  (int)&dword_1C0217F80,
                  (int)&v129,
                  0,
                  3u,
                  &v146);
                v98 = dword_1C024AA90;
              }
              if ( v98 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
              {
                v113 = v128;
                v151 = 4LL;
                v150 = &v113;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024AA90,
                  (int)&dword_1C0217FAD,
                  (int)&v129,
                  0,
                  3u,
                  &v149);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v20;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v29 = PsGetCurrentProcess(v28, v27),
                v30 = PsGetProcessSessionIdEx(v29),
                v31 = PsGetCurrentThreadProcess(),
                v30 == (unsigned int)PsGetProcessSessionIdEx(v31)) )
          {
            v32 = KeGetCurrentThread();
            v33 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v35 = (__int64 *)PsGetThreadWin32Thread(v32);
              if ( v35 )
                v33 = *v35;
            }
            v36 = PsGetCurrentProcessWin32Process(v34);
            if ( v33
              && v36
              && (*(_DWORD *)(v33 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v33 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(v36 + 12) & 0x8000) != 0 )
            {
              v61 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v61 == (PERESOURCE *)&gDomainDummyLock )
              {
                v107 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
              }
              if ( ExIsResourceAcquiredExclusiveLite(*v61) == 1 )
              {
                v107 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
              }
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v61);
              v62 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v62[2];
                  v99 = *v62;
                  v62[2] = 0LL;
                  if ( !*(_DWORD *)(v99 + 8) )
                  {
                    v107 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                  }
                  v100 = (PERESOURCE *)GetDomainLockRef(12);
                  if ( v100 == (PERESOURCE *)&gDomainDummyLock )
                  {
                    LODWORD(v108) = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v100);
                  HMUnlockObject(*v62);
                  tagDomLock::LockExclusive(v100);
                  v62 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v6 = v119;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v61);
            }
          }
        }
      }
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      v37 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
      v117 = v37 == 0;
      v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v37 == 0);
      if ( v39 )
        v39[1] = KeQueryPerformanceCounter(0LL);
      v132 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v131 = 1;
        v101 = PsGetCurrentThreadWin32Thread(v38);
        v130 = v101;
        if ( v101 && (*(int *)(v101 + 24) > 0 || *(_DWORD *)(v130 + 48)) )
        {
          EtwActivityIdControl(3u, &v132);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v114 = v131;
            v154 = 4LL;
            v153 = &v114;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&v132, 0, 3u, &v152);
          }
        }
      }
      else
      {
        v130 = 0LL;
      }
      v40 = 0LL;
      while ( 1 )
      {
        v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v41 )
          v40 = *v41;
        v44 = (PVOID)PsGetCurrentProcess(v43, v42);
        if ( v44 )
        {
          if ( v44 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v46, v45) == gpepCSRSS && v40 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v40 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v130
        && (*(_DWORD *)(v130 + 48) || *(int *)(v130 + 24) > 0) )
      {
        *(_DWORD *)(v130 + 44) = 1;
        *(GUID *)(v130 + 28) = v132;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v115 = v131;
            v157 = 4LL;
            v156 = &v115;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&v132, 0, 3u, &v155);
            v102 = dword_1C024AA90;
          }
          if ( v102 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v116 = v131;
            v160 = 4LL;
            v159 = &v116;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&v132, 0, 3u, &v158);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v40;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v49 = PsGetCurrentProcess(v48, v47),
            v50 = PsGetProcessSessionIdEx(v49),
            v51 = PsGetCurrentThreadProcess(),
            v50 == (unsigned int)PsGetProcessSessionIdEx(v51)) )
      {
        v54 = KeGetCurrentThread();
        v55 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v57 = (__int64 *)PsGetThreadWin32Thread(v54);
          if ( v57 )
            v55 = *v57;
        }
        v58 = PsGetCurrentProcessWin32Process(v56);
        if ( v55
          && v58
          && (*(_DWORD *)(v55 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v55 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v58 + 12) & 0x8000) != 0 )
        {
          v63 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v63 == (PERESOURCE *)&gDomainDummyLock )
          {
            v107 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*v63) == 1 )
          {
            v107 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v63);
          v64 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v64[2];
              v103 = *v64;
              v64[2] = 0LL;
              if ( !*(_DWORD *)(v103 + 8) )
              {
                v107 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v104 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v104 == (PERESOURCE *)&gDomainDummyLock )
              {
                LODWORD(v108) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v104);
              HMUnlockObject(*v64);
              tagDomLock::LockExclusive(v104);
              v64 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v6 = v119;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v63);
        }
      }
      if ( !v117 || gSessionCreationTime < OutputBuffer )
      {
        LOBYTE(v53) = 1;
        LOBYTE(v52) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v52, v53) )
        {
          v121 = 16;
          v122 = 0x20000000;
          if ( (int)((__int64 (*)(void))IsxxxSendMessageBSMSupported)() >= 0 )
          {
            if ( qword_1C02564F8 )
              qword_1C02564F8(0LL, 536LL, 7LL);
          }
        }
      }
      if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
        goto LABEL_31;
      v59 = (void (__fastcall *)(__int64))qword_1C0256508;
      goto LABEL_91;
    }
    LOBYTE(v3) = 1;
LABEL_30:
    PowerInputEvent(v3);
    goto LABEL_31;
  }
  v3 = (unsigned int)(v7 - 9);
  switch ( v7 )
  {
    case 9:
      goto LABEL_30;
    case 10:
      if ( gbTtmEnabled )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1480LL);
      }
      PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v6);
      goto LABEL_31;
    case 11:
      if ( !gfSwitchInProgress
        && !dword_1C0251198
        && dword_1C0251210 == (_DWORD)v6
        && (!gbTtmEnabled || gbBuiltinPanelOn) )
      {
        if ( (_DWORD)v6 == 1 )
        {
          PowerUnDimMonitor();
        }
        else if ( (_DWORD)v6 == 2 )
        {
          PowerDimMonitor();
        }
      }
      goto LABEL_31;
    case 12:
LABEL_11:
      if ( gbTtmEnabled )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1088LL);
      }
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      if ( v7 == 12 )
        UserSessionSwitchBlock_End();
      if ( dword_1C0251198 || gfSwitchInProgress )
        goto LABEL_23;
      HIDWORD(InputBuffer) = v6;
      LOBYTE(InputBuffer) = gProtocolType == 0;
      if ( HIDWORD(qword_1C02511A4) && !gProtocolType && (_DWORD)v6 != 22 )
      {
        if ( (_DWORD)v6 != 1 || !ShouldEscapeProximity() )
          goto LABEL_26;
        HIDWORD(qword_1C02511A4) = 0;
      }
      ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
      gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
      DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
      if ( gLastResumeResult )
      {
        if ( gLastResumeResult == 259 )
          goto LABEL_323;
        if ( gLastResumeResult != -1073741823 )
        {
          v107 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1179LL);
        }
      }
      if ( gLastResumeResult != 259 )
      {
        if ( gLastResumeResult != -1073741823 )
        {
          v10 = 0;
          if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
          {
            ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
            if ( qword_1C0256528 )
              qword_1C0256528(v133, 0LL, 0LL);
            DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
            v10 = 1;
          }
          PowerOnMonitor(SHIDWORD(InputBuffer));
          if ( v10 && qword_1C0256538 )
            qword_1C0256538(v133);
LABEL_23:
          if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 && qword_1C0256508 )
            qword_1C0256508(0LL);
        }
LABEL_26:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        if ( --gPowerOnRequestCount )
          ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_31;
      }
LABEL_323:
      if ( !gWakeInProgress )
      {
        gWakeInProgressReason = HIDWORD(InputBuffer);
        gWakeInProgress = 1;
        UserSessionSwitchBlock_Start();
      }
      goto LABEL_26;
    case 13:
      if ( !gbTtmEnabled )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1255LL);
      }
      if ( gfSwitchInProgress )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1257LL);
      }
      PowerOnSession((unsigned int)v6);
      goto LABEL_310;
    case 14:
      if ( !gbTtmEnabled )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1239LL);
      }
      if ( gfSwitchInProgress )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1241LL);
      }
      PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v6, v2);
LABEL_310:
      UserSessionSwitchBlock_End();
      goto LABEL_31;
  }
  if ( v7 != 15 )
    goto LABEL_297;
  if ( !gbTtmEnabled )
  {
    v107 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1289LL);
  }
  if ( gfSwitchInProgress || dword_1C0251198 )
    goto LABEL_31;
  if ( v6 == 1 )
  {
    gbBuiltinPanelOn = 1;
    PowerUnDimMonitor();
    v106 = PowerMonitorOn;
  }
  else
  {
    if ( v6 != 2 )
    {
      if ( v6 )
      {
        v107 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1319LL);
      }
      gbBuiltinPanelOn = 0;
      goto LABEL_31;
    }
    gbBuiltinPanelOn = 1;
    PowerDimMonitor();
    v106 = PowerMonitorDim;
  }
  UpdateDisplayState(v106, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1, v105);
LABEL_31:
  v11 = 0;
LABEL_32:
  v12 = v118;
LABEL_33:
  EtwTraceStopPowerEventCalloutWorker(v12, v6, v11);
  return v11;
}
