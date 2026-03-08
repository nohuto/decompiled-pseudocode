/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C00169A0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     CitDisplayPowerChange @ 0x1C00B00A4 (CitDisplayPowerChange.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00CFA4C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00D473C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x1C00DD5E0 (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0159AA0 (xxxSendWinlogonPowerMessage.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C015A7C0 (-SetProximityBlocking@@YAXXZ.c)
 *     EtwTraceDisplayChange @ 0x1C0161E80 (EtwTraceDisplayChange.c)
 */

void __fastcall UpdateDisplayState(enum _MONITOR_DISPLAY_STATE a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // bl
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  bool v88; // zf
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  _BYTE v111[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v112; // [rsp+38h] [rbp-31h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-21h] BYREF
  char v114; // [rsp+54h] [rbp-15h]
  char v115; // [rsp+55h] [rbp-14h]
  char v116; // [rsp+56h] [rbp-13h]
  char v117; // [rsp+57h] [rbp-12h]
  _BYTE v118[48]; // [rsp+58h] [rbp-11h] BYREF

  if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Power::UpdateDisplayState(a1, a2);
  v10 = *(_DWORD *)SGDGetUserSessionState(v7, v6, v8, v9);
  *(_DWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 3016) = v10;
  v19 = *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 3080);
  *(_DWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 3076) = v19;
  *(_DWORD *)(SGDGetUserSessionState(v25, v24, v26, v27) + 3080) = a1;
  v28 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v29 = (v28 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v32 = v29 - *(_QWORD *)(SGDGetUserSessionState(v28, v29, v30, v31) + 3032);
  *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 3024) = v32;
  v37 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v38 = (v37 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)(SGDGetUserSessionState(v37, v38, v39, v40) + 3032) = v38;
  if ( gProtocolType )
  {
    v45 = 0;
    *(_WORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 3084) = 0;
  }
  else
  {
    v45 = 1;
    *(_WORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 3084) = 1;
  }
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)v118);
  v50 = SGDGetUserSessionState(v47, v46, v48, v49);
  if ( a1 )
  {
    *(_DWORD *)(v50 + 2952) = 1;
    DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::~ObjectLock<>((__int64)v118);
    *(_DWORD *)(SGDGetUserSessionState(v60, v59, v61, v62) + 2972) = 0;
    *(_DWORD *)(SGDGetUserSessionState(v64, v63, v65, v66) + 2976) = 0;
  }
  else
  {
    *(_DWORD *)(v50 + 2952) = 0;
    DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::~ObjectLock<>((__int64)v118);
    *(_DWORD *)(SGDGetUserSessionState(v52, v51, v53, v54) + 2972) = a2 == MonitorRequestReasonGracePeriod;
    if ( a2 == MonitorRequestReasonNearProximity )
      SetProximityBlocking(v56, v55, v57, v58);
  }
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v68, v67, v69, v70);
  if ( !*(_BYTE *)SGDGetUserGdiSessionState(v71)
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v76 = 0;
  }
  else
  {
    v76 = 1;
    if ( a1 != PowerMonitorDim )
    {
      v112 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != PowerMonitorOff), &v112, v75);
    }
  }
  InputBuffer[0] = *(_DWORD *)SGDGetUserSessionState(v73, v72, v74, v75);
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v114 = v45;
  v115 = v76;
  v116 = a3;
  if ( *(_DWORD *)(SGDGetUserSessionState(InputBuffer[0], v77, v78, v79) + 2952)
    || *(_DWORD *)(SGDGetUserSessionState(v81, v80, v82, v83) + 2972)
    || (v88 = *(_DWORD *)(SGDGetUserSessionState(v85, v84, v86, v87) + 2976) == 0, v117 = 0, !v88) )
  {
    v117 = 1;
  }
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( *(_BYTE *)(SGDGetUserSessionState(v90, v89, v91, v92) + 712) )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v94, v93, v95, v96) + 2952)
       || *(_DWORD *)(SGDGetUserSessionState(v98, v97, v99, v100) + 2972)
       || *(_DWORD *)(SGDGetUserSessionState(v98, v97, v99, v100) + 2976))
      && !*(_DWORD *)(SGDGetUserSessionState(v98, v97, v99, v100) + 2976) )
    {
      v101 = 0LL;
    }
    else
    {
      v101 = 2LL;
    }
    SetInputMode(v101, v97, v99, v100);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v111, v93, v95, v96);
  EtwTraceDisplayChange();
  SGDGetUserSessionState(v103, v102, v104, v105);
  v110 = SGDGetUserSessionState(v107, v106, v108, v109);
  CitDisplayPowerChange(v110 + 3016);
}
