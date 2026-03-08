/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00B3AC0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0016C10 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00898E0 (PowerResumeSuspendEvent.c)
 *     LeavePowerCrit @ 0x1C00B5640 (LeavePowerCrit.c)
 *     EnterPowerCrit @ 0x1C00B5670 (EnterPowerCrit.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x1C00B7E1C (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     RIMSetSystemInputMode @ 0x1C00BD984 (RIMSetSystemInputMode.c)
 *     xxxSendMessageBSM @ 0x1C00D3120 (xxxSendMessageBSM.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00D37D4 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00D4440 (EtwTraceWinlogonSleepStartEvent.c)
 *     IsPowerOnGdiSupported @ 0x1C00D4684 (IsPowerOnGdiSupported.c)
 *     PowerOnGdi @ 0x1C00D47CC (PowerOnGdi.c)
 *     DrvStopPresenterView @ 0x1C00D4848 (DrvStopPresenterView.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00D48C0 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x1C00D49A4 (IsPowerOffGdiSupported.c)
 *     PowerOffGdi @ 0x1C00D49F4 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00DCD58 (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00DCDE8 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00EE444 (McTemplateK0dq_EtwWriteTransfer.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0159AA0 (xxxSendWinlogonPowerMessage.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 *     ProcessDelayedSdc @ 0x1C0272050 (ProcessDelayedSdc.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r13d
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r9
  NTSTATUS v88; // ebx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  unsigned __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  int v130; // ecx
  int v131; // r9d
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rcx
  unsigned int v142; // eax
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rbx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  int v157; // ebx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  int v178; // ecx
  int v179; // r9d
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rax
  int v187; // ecx
  int v188; // r9d
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rax
  int v194; // ecx
  int v195; // r9d
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rcx
  unsigned int v206; // eax
  int v207; // edi
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  signed __int32 v213[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 OutputBufferLength; // [rsp+28h] [rbp-E0h]
  int SystemInformation; // [rsp+68h] [rbp-A0h]
  _BYTE SystemInformation_4[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v218; // [rsp+80h] [rbp-88h]
  _DWORD v219[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v220; // [rsp+98h] [rbp-70h]
  _BYTE v221[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 InputBuffer; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v223[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v224[10]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v225[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v226; // [rsp+148h] [rbp+40h]

  memset(v224, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v224[1]);
  v224[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v224[3]) = 17;
  LOBYTE(v224[6]) = -1;
  v4 = *(unsigned int *)(SGDGetUserSessionState(v1, v0, v2, v3) + 3224);
  v226 = 0LL;
  LODWORD(v224[4]) = v4;
  memset(v225, 0, sizeof(v225));
  InputBuffer = 0LL;
  v220 = 0LL;
  v10 = *(_DWORD *)(SGDGetUserSessionState(v4, v5, v6, v7) + 3224);
  SystemInformation_8 = 0LL;
  v218 = 0LL;
  memset(v223, 0, sizeof(v223));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = 0;
    McTemplateK0dq_EtwWriteTransfer(v8, &StartPowerStateCalloutWorker, v9, (unsigned int)v10, OutputBufferLength);
  }
  if ( !qword_1C02D6AD8 )
  {
    v11 = -1073741637;
    goto LABEL_107;
  }
  v11 = qword_1C02D6AD8();
  if ( v11 < 0 )
  {
LABEL_107:
    v181 = 5LL;
    goto LABEL_108;
  }
  if ( !qword_1C02D6AE0 )
  {
    v11 = -1073741637;
    goto LABEL_105;
  }
  v16 = qword_1C02D6AE0();
  v11 = v16;
  if ( v16 < 0 )
  {
LABEL_105:
    v181 = 6LL;
LABEL_108:
    v180 = (unsigned int)v11;
    goto LABEL_109;
  }
  if ( !*(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 2936) )
  {
    v11 = -2143420409;
    goto LABEL_110;
  }
  if ( v10 <= 10 )
  {
    if ( v10 == 10 )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState(v18) )
      {
        SystemInformation = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3670LL);
      }
      v157 = *(_DWORD *)(SGDGetUserSessionState(v154, v153, v155, v156) + 2952);
      v162 = SGDGetUserSessionState(v159, v158, v160, v161);
      *(_DWORD *)(v162 + 3152) = *(_DWORD *)(v162 + 3152) & 0xFFFFFFDF | (v157 != 0 ? 0x20 : 0);
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi();
      goto LABEL_72;
    }
    if ( v10 == 1 )
    {
      EnterPowerCrit(0LL);
      v148 = *((_QWORD *)gptiCurrent + 92);
      *(_QWORD *)(SGDGetUserSessionState(v150, v149, v151, v152) + 3160) = v148;
      goto LABEL_71;
    }
    v21 = (unsigned int)(v10 - 2);
    if ( v10 != 2 )
    {
      if ( v10 == 3 )
      {
        if ( *(_DWORD *)(SGDGetUserSessionState((unsigned int)(v10 - 3), v17, v19, v20) + 3212) == 5 )
          LODWORD(InputBuffer) = 3;
        else
          LODWORD(InputBuffer) = *(_DWORD *)(SGDGetUserSessionState(v83, v82, v84, v85) + 3208);
        if ( !(unsigned int)PowerResumeSuspendEvent(1LL, 0LL, 0LL, v85) )
        {
          *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
          WORD6(InputBuffer) = 256;
          UserSessionSwitchLeaveCrit(v18, v86, v19, v87);
          PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(v221, 2LL);
          v88 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
          PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)v221);
          if ( v88 < 0 )
            AddPowerStateLogEntry(8LL, (unsigned int)v88);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation_4, v89, v90, v91);
        }
      }
      else
      {
        v18 = (unsigned int)(v10 - 5);
        if ( v10 != 5 )
        {
          if ( v10 == 6 )
          {
            if ( qword_1C02D6A18 && (int)qword_1C02D6A18() >= 0 && qword_1C02D6A20 )
              qword_1C02D6A20();
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL, v20) )
            {
              LODWORD(InputBuffer) = 0;
              *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
              WORD6(InputBuffer) = 1;
              UserSessionSwitchLeaveCrit(v18, v22, v19, v23);
              v24 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              if ( v24 < 0 )
                AddPowerStateLogEntry(8LL, (unsigned int)v24);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation_4, v25, v26, v27);
            }
          }
          goto LABEL_110;
        }
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          6u);
        if ( !*(_BYTE *)(SGDGetUserSessionState(v29, v28, v30, v31) + 712) )
          RIMSetSystemInputMode(0LL);
        v36 = *(_DWORD *)(SGDGetUserSessionState(v33, v32, v34, v35) + 3212);
        if ( *(_DWORD *)SGDGetUserSessionState(v38, v37, v39, v40) )
        {
          if ( v36 == 5 )
          {
            memset((char *)v223 + 12, 0, 20);
            *(_QWORD *)&v218 = v223;
            *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
            *((_QWORD *)&v218 + 1) = 32LL;
            *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
            LODWORD(v223[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
            *(_QWORD *)&v223[0] = 0x100000004LL;
            DWORD2(v223[0]) = 4;
            ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
          }
          EtwTraceWinlogonSleepEndEvent(1LL);
          AddPowerStateLogEntry(3LL, 262LL);
          v219[1] = 1;
          v220 = 0LL;
          v219[0] = 0;
          LOBYTE(v41) = 1;
          v42 = xxxSendWinlogonPowerMessage(v41, 262LL, v219);
          AddPowerStateLogEntry(4LL, v42);
          EtwTraceWinlogonSleepEndEvent(0LL);
          if ( v36 == 5 )
          {
            v43 = v218;
            *(_DWORD *)(v218 + 16) |= 1u;
            *(_DWORD *)(v43 + 8) = 4;
            ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
          }
        }
        if ( (int)IsPowerOnGdiSupported() >= 0 )
          PowerOnGdi(v224, 1LL, 5LL);
        *(_DWORD *)(SGDGetUserSessionState(v45, v44, v46, v47) + 2960) = 0;
        _InterlockedOr(v213, 0);
        if ( *(_DWORD *)(SGDGetUserSessionState(v49, v48, v50, v51) + 2876) )
        {
          *(_DWORD *)(SGDGetUserSessionState(v53, v52, v54, v55) + 2884) = 1;
          v60 = *(_DWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 2880);
          *(_DWORD *)(SGDGetUserSessionState(v62, v61, v63, v64) + 2888) = v60;
          EnterPowerCrit(v65);
          *(_DWORD *)(SGDGetUserSessionState(v67, v66, v68, v69) + 2876) = 0;
          *(_DWORD *)(SGDGetUserSessionState(v71, v70, v72, v73) + 2880) = 0;
          LeavePowerCrit();
          PoSetUserPresent(v60);
        }
        else
        {
          *(_DWORD *)(SGDGetUserSessionState(v53, v52, v54, v55) + 2964) = 1;
        }
        *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
        memset((char *)v223 + 12, 0, 20);
        *(_QWORD *)&v218 = v223;
        *((_QWORD *)&v218 + 1) = 32LL;
        *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
        LODWORD(v223[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
        *(_QWORD *)&v223[0] = 0x100000004LL;
        DWORD2(v223[0]) = 6;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        LOBYTE(v74) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v74, 0LL, v75) && (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          *(_QWORD *)&v225[0] = 0x2000000000000010LL;
          if ( !(unsigned int)xxxSendMessageBSM(v77, 536, 18, v79, (__int64)v225) )
            AddPowerStateLogEntry(7LL, 18LL);
        }
        v80 = SGDGetUserSessionState(v77, v76, v78, v79);
        *(_DWORD *)(v80 + 12616) |= 2u;
        v81 = v218;
        *(_DWORD *)(v218 + 16) |= 1u;
        *(_DWORD *)(v81 + 8) = 6;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
LABEL_72:
      v11 = v16;
      goto LABEL_110;
    }
    *(_DWORD *)(SGDGetUserSessionState(v21, v17, v19, v20) + 2960) = 1;
    _InterlockedOr(v213, 0);
    if ( !*(_BYTE *)(SGDGetUserSessionState(v93, v92, v94, v95) + 712) )
      RIMSetSystemInputMode(2LL);
    if ( !*(_BYTE *)SGDGetUserGdiSessionState(v96) )
    {
      v101 = SGDGetUserSessionState(v98, v97, v99, v100);
      PowerOffMonitor(*(enum POWER_MONITOR_REQUEST_REASON *)(v101 + 3228));
    }
    v102 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(SGDGetUserSessionState(0xFFFFF78000000004uLL, v97, v99, v100) + 2992) = v102;
    v108 = *(unsigned int *)SGDGetUserSessionState(v104, v103, v105, v106);
    if ( (_DWORD)v108 != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      AddPowerStateLogEntry(3LL, 1LL);
      v114 = SGDGetUserSessionState(v111, v110, v112, v113);
      LOBYTE(v115) = 1;
      v116 = xxxSendWinlogonPowerMessage(v115, 262LL, v114 + 3208);
      AddPowerStateLogEntry(4LL, v116);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v107) = 1;
    LOBYTE(v108) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v108, v107, 0LL, v109) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v118, v117, v119, v120) + 3168) = 16;
      *(_DWORD *)(SGDGetUserSessionState(v122, v121, v123, v124) + 3172) = 536870952;
      v129 = SGDGetUserSessionState(v126, v125, v127, v128);
      if ( !(unsigned int)xxxSendMessageBSM(v130, 536, 4, v131, v129 + 3168) )
        AddPowerStateLogEntry(7LL, 4LL);
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(v118, v117, v119, v120) + 3212) == 5 )
    {
      if ( gProtocolType )
      {
LABEL_69:
        EnterPowerCrit(v133);
        *(_QWORD *)(SGDGetUserSessionState(v145, v144, v146, v147) + 3160) = 0LL;
LABEL_71:
        LeavePowerCrit();
        goto LABEL_72;
      }
      if ( (*(_DWORD *)(SGDGetUserSessionState(v133, v132, v134, v135) + 3216) & 8) != 0 )
      {
        if ( (unsigned __int8)DrvStopPresenterView() )
        {
          if ( grpdeskRitInput )
          {
            v143 = xxxUserSetDisplayConfig(
                     0,
                     0LL,
                     0x88Fu,
                     0,
                     (__int64)grpdeskRitInput,
                     0,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)v224,
                     0LL);
            if ( v143 < 0 )
              AddPowerStateLogEntry(9LL, (unsigned int)v143);
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL);
        AddPowerStateLogEntry(3LL, 259LL);
        v140 = SGDGetUserSessionState(v137, v136, v138, v139);
        LOBYTE(v141) = 1;
        v142 = xxxSendWinlogonPowerMessage(v141, 259LL, v140 + 3208);
        AddPowerStateLogEntry(4LL, v142);
        EtwTraceWinlogonSleepEndEvent(0LL);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_69;
  }
  if ( v10 == 11 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(0LL) )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3690LL);
    }
    v207 = 0;
    if ( (int)IsPowerOnGdiSupported() >= 0 )
    {
      PowerOnGdi(v224, 0LL, 2LL);
      v207 = 1;
    }
    v18 = *(unsigned int *)(SGDGetUserSessionState(v209, v208, v210, v211) + 3152);
    if ( (v18 & 0x20) != 0 )
      PowerOnMonitor(MonitorRequestReasonDP);
    if ( v207 )
      ProcessDelayedSdc(v224);
  }
  else if ( v10 == 12 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState((unsigned int)(v10 - 12)) )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3236LL);
    }
    PowerOffMonitor(MonitorRequestReasonSxTransition);
  }
  else
  {
    v18 = (unsigned int)(v10 - 13);
    if ( v10 == 13 )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState(v18) )
      {
        SystemInformation = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3255LL);
      }
      v18 = *(unsigned int *)SGDGetUserSessionState(v197, v196, v198, v199);
      if ( (_DWORD)v18 != gServiceSessionId )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 263LL);
        v204 = SGDGetUserSessionState(v201, v200, v202, v203);
        LOBYTE(v205) = 1;
        v206 = xxxSendWinlogonPowerMessage(v205, 263LL, v204 + 3208);
        AddPowerStateLogEntry(4LL, v206);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      goto LABEL_72;
    }
    if ( v10 != 14 || (int)IsxxxSendMessageBSMSupported() < 0 )
      goto LABEL_110;
    *(_DWORD *)(SGDGetUserSessionState(v18, v163, v19, v164) + 3168) = 16;
    if ( *(_DWORD *)(SGDGetUserSessionState(v166, v165, v167, v168) + 3212) == 5 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v170, v169, v171, v172) + 3172) = 536870952;
      v177 = SGDGetUserSessionState(v174, v173, v175, v176);
      if ( (unsigned int)xxxSendMessageBSM(v178, 536, 4, v179, v177 + 3168) )
        goto LABEL_110;
      v180 = 4LL;
      v181 = 7LL;
      goto LABEL_109;
    }
    *(_DWORD *)(SGDGetUserSessionState(v170, v169, v171, v172) + 3172) = 0x20000000;
    v186 = SGDGetUserSessionState(v183, v182, v184, v185);
    if ( !(unsigned int)xxxSendMessageBSM(v187, 536, 18, v188, v186 + 3168) )
      AddPowerStateLogEntry(7LL, 18LL);
    v193 = SGDGetUserSessionState(v190, v189, v191, v192);
    if ( !(unsigned int)xxxSendMessageBSM(v194, 536, 7, v195, v193 + 3168) )
    {
      v180 = 7LL;
      v181 = 7LL;
LABEL_109:
      AddPowerStateLogEntry(v181, v180);
    }
  }
LABEL_110:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = v11;
    McTemplateK0dq_EtwWriteTransfer(v18, &StopPowerStateCalloutWorker, v19, (unsigned int)v10, OutputBufferLength);
  }
  return (unsigned int)v11;
}
