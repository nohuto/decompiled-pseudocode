/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C007C540 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0016698 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C007CF18 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C007CF38 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C007CFC0 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C007CFEC (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C007D190 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C007D200 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C007D260 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0080690 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     PostPlaySoundMessage @ 0x1C00B9DE0 (PostPlaySoundMessage.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00C5360 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00D03C0 (EtwTraceIdleActionExpiration.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C00D1A00 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00D1C10 (IsxxxSendMessageBSMSupported.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     IsPowerOnGdiSupported @ 0x1C00D456C (IsPowerOnGdiSupported.c)
 *     IsPowerOffGdiSupported @ 0x1C00D4684 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C00D85C4 (McTemplateK0qxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0146C48 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146D28 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0146DE0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C014737C (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C0147D4C (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C0147F60 (PowerIsDisplayRequired.c)
 *     IsStartScreenSaverSupported @ 0x1C023E2B8 (IsStartScreenSaverSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  LARGE_INTEGER *v29; // rbx
  struct tagTHREADINFO **v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rax
  __int64 *v33; // rbx
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  _BOOL8 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  LARGE_INTEGER *v40; // rbx
  struct tagTHREADINFO **v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 *v48; // rbx
  void (__fastcall *v49)(__int64); // rax
  __int64 v50; // rcx
  int v51; // r9d
  __int64 GlobalTickCount; // rbx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v60; // rdx
  LARGE_INTEGER *v61; // rbx
  struct tagTHREADINFO **v62; // rbx
  struct tagTHREADINFO *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  struct tagKERNELHANDLETABLEENTRY *v71; // rax
  __int64 v72; // rcx
  __int64 *v73; // rbx
  struct tagKERNELHANDLETABLEENTRY *v74; // rax
  __int64 v75; // rcx
  struct tagKERNELHANDLETABLEENTRY *v76; // rax
  __int64 v77; // rcx
  int v78; // r9d
  enum _MONITOR_DISPLAY_STATE v79; // ecx
  __int64 v80; // [rsp+48h] [rbp-C0h] BYREF
  __int64 InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v82; // [rsp+58h] [rbp-B0h]
  unsigned int v83; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 OutputBuffer; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  int v86; // [rsp+70h] [rbp-98h]
  GUID v87; // [rsp+74h] [rbp-94h] BYREF
  __int128 v88; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v89[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-50h]
  _QWORD v91[10]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v92; // [rsp+118h] [rbp+10h] BYREF
  int v93; // [rsp+120h] [rbp+18h]
  GUID v94; // [rsp+124h] [rbp+1Ch] BYREF
  char *v95; // [rsp+138h] [rbp+30h]
  __int64 v96; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+148h] [rbp+40h] BYREF
  char *v98; // [rsp+168h] [rbp+60h]
  __int64 v99; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+178h] [rbp+70h] BYREF
  char *v101; // [rsp+198h] [rbp+90h]
  __int64 v102; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+1A8h] [rbp+A0h] BYREF
  char *v104; // [rsp+1C8h] [rbp+C0h]
  __int64 v105; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+1D8h] [rbp+D0h] BYREF
  char *v107; // [rsp+1F8h] [rbp+F0h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+208h] [rbp+100h] BYREF
  char *v110; // [rsp+228h] [rbp+120h]
  __int64 v111; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+238h] [rbp+130h] BYREF
  char *v113; // [rsp+258h] [rbp+150h]
  __int64 v114; // [rsp+260h] [rbp+158h]

  memset(v91, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v91[1]);
  v6 = 0LL;
  v7 = *(_DWORD *)a1;
  v8 = *((_QWORD *)a1 + 1);
  v91[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v91[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v91[3]) = 16;
  LOBYTE(v91[6]) = -1;
  memset(v89, 0, sizeof(v89));
  v90 = 0LL;
  v83 = v7;
  OutputBuffer = 0LL;
  v88 = 0LL;
  InputBuffer = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qxq_EtwWriteTransfer(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v8, 0);
  if ( !gbPowerCalloutsReady )
  {
    v18 = -1073741823;
    v19 = (unsigned int)v7;
    goto LABEL_42;
  }
  if ( v7 <= 9 )
  {
    if ( v7 >= 8 )
    {
      UpdateAdaptiveSessionState();
      goto LABEL_40;
    }
    v9 = (unsigned int)v7;
    if ( v7 )
    {
      switch ( v7 )
      {
        case 1:
          v18 = PostWinlogonMessage(256LL, v8);
          if ( !v18 )
            PostPlaySoundMessage(v8);
          goto LABEL_41;
        case 2:
          if ( !gbNonServiceSession )
          {
            *(_QWORD *)((char *)&v88 + 4) = 10LL;
            WORD6(v88) = 0;
            UserSessionSwitchLeaveCrit((unsigned int)(v7 - 2), (__int64)v2, v4, v5);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v88, 0x10u, 0LL, 0);
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v57, v56, v58);
            else
              CurrentThreadWin32Thread = 0LL;
            v85 = CurrentThreadWin32Thread;
            v86 = 1;
            if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v85 + 48)) )
            {
              EtwActivityIdControl(3u, &v87);
              if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v96 = 4LL;
                HIDWORD(v80) = v86 == 1;
                v95 = (char *)&v80 + 4;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD79,
                  &v87,
                  0LL,
                  3u,
                  (PEVENT_DATA_DESCRIPTOR)&v92);
              }
            }
            if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
              || (v60 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
              && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
              || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x200000010000000LL) != 0
              && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
            {
              v61 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v57, v60, v58);
              if ( v61 )
                v61[1] = KeQueryPerformanceCounter(0LL);
            }
            v62 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            EtwTraceAcquiredExclusiveUserCrit();
            if ( v62 )
            {
              v63 = *v62;
              if ( IsThreadCrossSessionAttached() )
                v63 = 0LL;
              if ( v85 )
              {
                v65 = *(unsigned int *)(v85 + 24);
                if ( *(_DWORD *)(v85 + 48) || (int)v65 > 0 )
                {
                  *(_DWORD *)(v85 + 44) = 1;
                  *(GUID *)(v85 + 28) = v87;
                  v66 = (unsigned int)dword_1C028EE70;
                  if ( (unsigned int)dword_1C028EE70 > 6 )
                  {
                    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v99 = 4LL;
                      HIDWORD(v80) = v86 == 1;
                      v98 = (char *)&v80 + 4;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD22,
                        &v87,
                        0LL,
                        3u,
                        &v97);
                      v66 = (unsigned int)dword_1C028EE70;
                    }
                    if ( (unsigned int)v66 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v102 = 4LL;
                      HIDWORD(v80) = v86 == 1;
                      v101 = (char *)&v80 + 4;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD4F,
                        &v87,
                        0LL,
                        3u,
                        &v100);
                    }
                  }
                }
              }
              gptiCurrent = v63;
              if ( v63 )
              {
                *((_DWORD *)v63 + 377) = 1;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v65, v64, v66, v67);
                if ( CurrentProcessWin32Process )
                {
                  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                    && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v73 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v71 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      v72 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      gpSharedUserCritDeferredUnlockListHead = v71;
                      if ( !*(_DWORD *)(v72 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v69, v70);
                        v72 = *v73;
                      }
                      HMUnlockObject(v72);
                    }
                  }
                }
              }
            }
            else
            {
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v85);
              gptiCurrent = 0LL;
            }
          }
          *(_QWORD *)&v89[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_40;
          v21 = qword_1C029C238;
          if ( !qword_1C029C238 )
            goto LABEL_40;
          v23 = 536LL;
          v22 = 10LL;
          break;
        case 3:
          *(_QWORD *)&v89[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_40;
          v21 = qword_1C029C238;
          if ( !qword_1C029C238 )
            goto LABEL_40;
          v22 = 0LL;
          v23 = 30LL;
          break;
        default:
          v10 = (unsigned int)(v7 - 4);
          if ( v7 == 4 )
            goto LABEL_19;
          if ( v7 == 5 )
          {
            if ( gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v7 - 5), v2, v4);
            if ( gfSwitchInProgress )
              goto LABEL_40;
            HIDWORD(InputBuffer) = v8;
            PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v8);
            if ( !gProtocolType
              && byte_1C0296550
              && !dword_1C0296FC4
              && (int)IsPowerOffGdiSupported() >= 0
              && qword_1C029C258 )
            {
              qword_1C029C258();
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_40;
            if ( HIDWORD(InputBuffer) == 17 )
              goto LABEL_40;
            v49 = (void (__fastcall *)(__int64))qword_1C029C248;
            if ( !qword_1C029C248 )
              goto LABEL_40;
            v50 = 2LL;
            goto LABEL_98;
          }
          if ( v7 != 6 )
          {
            if ( v7 == 7 )
            {
              if ( gfSwitchInProgress || dword_1C0296FC8 || !gPowerTransitionsState )
                goto LABEL_40;
              PowerDimMonitor();
              if ( !gProtocolType )
                UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1, v51);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_40;
              v49 = (void (__fastcall *)(__int64))qword_1C029C248;
              if ( !qword_1C029C248 )
                goto LABEL_40;
              v50 = 1LL;
              goto LABEL_98;
            }
LABEL_254:
            v18 = -1073741822;
            goto LABEL_41;
          }
          if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 2LL) )
            EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
          if ( !gPowerTransitionsState )
          {
            if ( (*(_DWORD *)gpsi & 0x200) == 0 )
              goto LABEL_40;
            GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
            if ( GlobalTickCount == CInputGlobals::GetLastInputTime(gpInputGlobals) )
              goto LABEL_40;
          }
          if ( (unsigned int)PowerIsDisplayRequired() && !gbBlockSendInputResets )
            goto LABEL_40;
          if ( gppiScreenSaver )
          {
            v53 = *(_DWORD *)(gppiScreenSaver + 12);
            if ( (v53 & 0x400000) == 0 )
            {
              *(_DWORD *)(gppiScreenSaver + 12) = v53 | 0x400000;
              v54 = *(_QWORD *)(gppiScreenSaver + 328);
              if ( v54 )
                ForegroundBoost::SetForegroundPriority(v54, 1LL);
            }
            goto LABEL_40;
          }
          if ( gpqForeground )
          {
            if ( *(_QWORD *)(gpqForeground + 120) )
            {
              if ( qword_1C029C290 )
              {
                if ( (int)qword_1C029C290() >= 0 )
                {
                  v55 = *(_QWORD *)(gpqForeground + 120);
                  if ( !qword_1C029C298 || !(unsigned int)qword_1C029C298(v55) )
                  {
                    if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported(v55) >= 0 && qword_1C029C2A8 )
                      qword_1C029C2A8(1LL);
                    if ( qword_1C029C078 )
                    {
                      LOBYTE(v6) = (*(_DWORD *)gpsi & 0x200) != 0;
                      qword_1C029C078(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, v6);
                      v18 = 0;
                      goto LABEL_41;
                    }
                    goto LABEL_40;
                  }
                }
              }
            }
          }
          if ( (int)((__int64 (*)(void))IsStartScreenSaverSupported)() < 0 )
            goto LABEL_40;
          v49 = (void (__fastcall *)(__int64))qword_1C029C2A8;
LABEL_96:
          if ( !v49 )
            goto LABEL_40;
          v50 = 0LL;
LABEL_98:
          v49(v50);
          goto LABEL_40;
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _OWORD *, int))v21)(0LL, v23, v22, 0LL, v89, 1);
      goto LABEL_40;
    }
    if ( !gbNonServiceSession )
    {
      LOBYTE(v4) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
      {
        *(_QWORD *)((char *)&v88 + 4) = 7LL;
        WORD6(v88) = 0;
        UserSessionSwitchLeaveCrit(v9, (__int64)v2, v4, v5);
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v88, 0x10u, 0LL, 0);
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
        else
          v27 = 0LL;
        v85 = v27;
        v86 = 1;
        if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v85 + 48)) )
        {
          EtwActivityIdControl(3u, &v87);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v102 = 4LL;
            HIDWORD(v80) = v86 == 1;
            v101 = (char *)&v80 + 4;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &v87,
              0LL,
              3u,
              &v100);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v28 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v28, v26);
          if ( v29 )
            v29[1] = KeQueryPerformanceCounter(0LL);
        }
        v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v30 )
        {
          v31 = *v30;
          if ( IsThreadCrossSessionAttached() )
            v31 = 0LL;
          if ( v85 )
          {
            v9 = *(unsigned int *)(v85 + 24);
            if ( *(_DWORD *)(v85 + 48) || (int)v9 > 0 )
            {
              *(_DWORD *)(v85 + 44) = 1;
              *(GUID *)(v85 + 28) = v87;
              v4 = (unsigned int)dword_1C028EE70;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v99 = 4LL;
                  HIDWORD(v80) = v86 == 1;
                  v98 = (char *)&v80 + 4;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &v87,
                    0LL,
                    3u,
                    &v97);
                  v4 = (unsigned int)dword_1C028EE70;
                }
                if ( (unsigned int)v4 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v105 = 4LL;
                  HIDWORD(v80) = v86 == 1;
                  v104 = (char *)&v80 + 4;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &v87,
                    0LL,
                    3u,
                    &v103);
                }
              }
            }
          }
          gptiCurrent = v31;
          if ( v31 )
          {
            *((_DWORD *)v31 + 377) = 1;
            v32 = PsGetCurrentProcessWin32Process(v9, v2, v4, v5);
            if ( v32 )
            {
              if ( (*(_DWORD *)(v32 + 12) & 0x8000) != 0 )
              {
                v9 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v74 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    v75 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    gpSharedUserCritDeferredUnlockListHead = v74;
                    if ( !*(_DWORD *)(v75 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v75, v2, v4);
                      v75 = *v33;
                    }
                    HMUnlockObject(v75);
                  }
                }
              }
            }
          }
        }
        else
        {
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v85);
          gptiCurrent = 0LL;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v9, (__int64)v2, v4, v5);
    v34 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
    v37 = v34 == 0;
    v82 = v34 == 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v38 = PsGetCurrentThreadWin32Thread(v37, v35, v36);
    else
      v38 = 0LL;
    v92 = v38;
    v93 = 1;
    if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v92 + 48)) )
    {
      EtwActivityIdControl(3u, &v94);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v108 = 4LL;
        HIDWORD(v80) = v93 == 1;
        v107 = (char *)&v80 + 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v94,
          0LL,
          3u,
          &v106);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v39 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v37, v39, v36);
      if ( v40 )
        v40[1] = KeQueryPerformanceCounter(0LL);
    }
    v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v41 )
    {
      v42 = *v41;
      if ( IsThreadCrossSessionAttached() )
        v42 = 0LL;
      if ( v92 )
      {
        v44 = *(unsigned int *)(v92 + 24);
        if ( *(_DWORD *)(v92 + 48) || (int)v44 > 0 )
        {
          *(_DWORD *)(v92 + 44) = 1;
          *(GUID *)(v92 + 28) = v94;
          v45 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v111 = 4LL;
              HIDWORD(v80) = v93 == 1;
              v110 = (char *)&v80 + 4;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v94,
                0LL,
                3u,
                &v109);
              v45 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v45 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v114 = 4LL;
              HIDWORD(v80) = v93 == 1;
              v113 = (char *)&v80 + 4;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v94,
                0LL,
                3u,
                &v112);
            }
          }
        }
      }
      gptiCurrent = v42;
      if ( v42 )
      {
        *((_DWORD *)v42 + 377) = 1;
        v47 = PsGetCurrentProcessWin32Process(v44, v43, v45, v46);
        if ( v47 )
        {
          if ( (*(_DWORD *)(v47 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v48 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v76 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v77 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v76;
              if ( !*(_DWORD *)(v77 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v43, v45);
                v77 = *v48;
              }
              HMUnlockObject(v77);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v92);
      gptiCurrent = 0LL;
    }
    if ( !v82 || gSessionCreationTime < OutputBuffer )
    {
      LOBYTE(v45) = 1;
      LOBYTE(v43) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v43, v45) )
      {
        *(_QWORD *)&v89[0] = 0x2000000000000010LL;
        if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          if ( qword_1C029C238 )
            qword_1C029C238(0LL, 536LL, 7LL);
        }
      }
    }
    if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
      goto LABEL_40;
    v49 = (void (__fastcall *)(__int64))qword_1C029C248;
    goto LABEL_96;
  }
  if ( v7 == 10 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v7 - 10), v2, v4);
    PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v8);
    goto LABEL_40;
  }
  if ( v7 == 11 )
  {
    if ( !gfSwitchInProgress && !dword_1C0296FC8 && dword_1C0296F70 == (_DWORD)v8 && (!gbTtmEnabled || gbBuiltinPanelOn) )
    {
      if ( (_DWORD)v8 == 1 )
      {
        PowerUnDimMonitor();
      }
      else if ( (_DWORD)v8 == 2 )
      {
        PowerDimMonitor();
      }
    }
    goto LABEL_40;
  }
  v10 = (unsigned int)(v7 - 12);
  if ( v7 == 12 )
  {
LABEL_19:
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v4);
    if ( v7 == 16 )
    {
      v13 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime(gpInputGlobals, v13, 5LL);
      CitpLastInputUpdate(0x20u, v13);
      if ( dword_1C0296F70 )
        UpdateAdaptiveSessionState();
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    DisarmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    if ( v7 == 12 )
      UserSessionSwitchBlock_End();
    if ( dword_1C0296FC8 || gfSwitchInProgress )
      goto LABEL_34;
    HIDWORD(InputBuffer) = v8;
    LOBYTE(InputBuffer) = gProtocolType == 0;
    if ( HIDWORD(qword_1C0296FD4) && !gProtocolType && (_DWORD)v8 != 22 )
    {
      if ( (_DWORD)v8 != 1 || !ShouldEscapeProximity() )
        goto LABEL_37;
      HIDWORD(qword_1C0296FD4) = 0;
    }
    ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
    gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
    DisarmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
    if ( gLastResumeResult )
    {
      if ( gLastResumeResult == 259 )
        goto LABEL_100;
      if ( gLastResumeResult != -1073741823 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
    if ( gLastResumeResult != 259 )
    {
      if ( gLastResumeResult != -1073741823 )
      {
        v17 = 0;
        if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
        {
          ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
          if ( qword_1C029C268 )
            qword_1C029C268(v91, 0LL, 0LL);
          DisarmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
          v17 = 1;
        }
        PowerOnMonitor(SHIDWORD(InputBuffer));
        if ( v17 && qword_1C029C278 )
          qword_1C029C278(v91);
LABEL_34:
        if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 && qword_1C029C248 )
          qword_1C029C248(0LL);
      }
LABEL_37:
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( --gPowerOnRequestCount )
        ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      goto LABEL_40;
    }
LABEL_100:
    if ( !gWakeInProgress )
    {
      gWakeInProgressReason = HIDWORD(InputBuffer);
      gWakeInProgress = 1;
      UserSessionSwitchBlock_Start();
    }
    goto LABEL_37;
  }
  v11 = (unsigned int)(v7 - 13);
  if ( v7 == 13 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v2, v4);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v2, v4);
    PowerOnSession((unsigned int)v8);
    goto LABEL_273;
  }
  v12 = (unsigned int)(v7 - 14);
  if ( v7 == 14 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v2, v4);
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v2, v4);
    PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v8, v2);
LABEL_273:
    UserSessionSwitchBlock_End();
    goto LABEL_40;
  }
  v10 = (unsigned int)(v7 - 15);
  if ( v7 != 15 )
  {
    if ( v7 == 16 )
      goto LABEL_19;
    goto LABEL_254;
  }
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v4);
  if ( gfSwitchInProgress || dword_1C0296FC8 )
    goto LABEL_40;
  if ( v8 == 1 )
  {
    gbBuiltinPanelOn = 1;
    PowerUnDimMonitor();
    v79 = PowerMonitorOn;
  }
  else
  {
    if ( v8 != 2 )
    {
      if ( v8 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v4);
      gbBuiltinPanelOn = 0;
      goto LABEL_40;
    }
    gbBuiltinPanelOn = 1;
    PowerDimMonitor();
    v79 = PowerMonitorDim;
  }
  UpdateDisplayState(v79, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1, v78);
LABEL_40:
  v18 = 0;
LABEL_41:
  v19 = v83;
LABEL_42:
  EtwTraceStopPowerEventCalloutWorker(v19, v8, v18);
  return v18;
}
