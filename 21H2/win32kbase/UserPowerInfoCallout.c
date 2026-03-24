/*
 * XREFs of UserPowerInfoCallout @ 0x1C004EC50
 * Callers:
 *     W32CalloutDispatch @ 0x1C004DFB0 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0038040 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C0039544 (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0039678 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0039B84 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CitLastInputUpdate @ 0x1C0048550 (CitLastInputUpdate.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0049B70 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     SetPendingInput @ 0x1C00759B0 (SetPendingInput.c)
 *     QueuePowerRequest @ 0x1C0076700 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0077F58 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C00788B0 (SqmPowerState.c)
 *     CitDisplayRequestChange @ 0x1C00B23E4 (CitDisplayRequestChange.c)
 *     EtwTraceDisplayReqChange @ 0x1C00B711C (EtwTraceDisplayReqChange.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0118328 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0118520 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0118858 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C0139970 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01A3DC8 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C01FC52C (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     ModerncoreUserPowerInfoCallout @ 0x1C01FC68C (ModerncoreUserPowerInfoCallout.c)
 */

__int64 __fastcall UserPowerInfoCallout(int a1, __int64 a2, int a3, PERESOURCE *a4, int a5, PERESOURCE *a6)
{
  PERESOURCE *v6; // r13
  int v7; // edi
  PERESOURCE *v8; // rsi
  unsigned int v11; // r14d
  const char *v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r13
  __int64 v19; // rax
  PERESOURCE *DomainLockRef; // rbx
  int v21; // r15d
  int v22; // r15d
  int v23; // r15d
  int v24; // r15d
  int v25; // r15d
  int v26; // r15d
  int v27; // r15d
  unsigned int v28; // r15d
  LARGE_INTEGER *v29; // rbx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rsi
  __int64 v35; // rax
  PERESOURCE *v36; // rbx
  LARGE_INTEGER *v37; // rbx
  struct tagTHREADINFO *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rsi
  __int64 v43; // rax
  PERESOURCE *v44; // rbx
  __int64 v45; // rbx
  LARGE_INTEGER *v46; // rbx
  struct tagTHREADINFO *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r15
  __int64 v52; // rax
  PERESOURCE *v53; // rbx
  __int64 v54; // rcx
  char v55; // r13
  char v56; // r15
  LARGE_INTEGER *v57; // rbx
  struct tagTHREADINFO *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r12
  __int64 v63; // rax
  PERESOURCE *v64; // rbx
  int v65; // r15d
  LARGE_INTEGER *v66; // rbx
  struct tagTHREADINFO *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rsi
  __int64 v72; // rax
  PERESOURCE *v73; // rbx
  int v74; // esi
  int v75; // ebx
  bool v76; // zf
  bool v77; // sf
  char v78; // r13
  char v79; // r12
  __int64 v80; // r15
  LARGE_INTEGER *v81; // rbx
  struct tagTHREADINFO *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // rsi
  __int64 v87; // rax
  PERESOURCE *v88; // rbx
  __int64 v89; // rbx
  LARGE_INTEGER *v90; // rbx
  struct tagTHREADINFO *v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r15
  __int64 v96; // rax
  PERESOURCE *v97; // rbx
  LARGE_INTEGER *v98; // rbx
  struct tagTHREADINFO *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // r15
  __int64 v104; // rax
  PERESOURCE *v105; // rbx
  LARGE_INTEGER *v106; // rbx
  struct tagTHREADINFO *v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 *v111; // r15
  __int64 v112; // rax
  PERESOURCE *v113; // rbx
  LARGE_INTEGER *v114; // rbx
  struct tagTHREADINFO *v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // r15
  __int64 v120; // rax
  PERESOURCE *v121; // rbx
  LARGE_INTEGER *v122; // rbx
  struct tagTHREADINFO *v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // r15
  __int64 v128; // rax
  PERESOURCE *v129; // rbx
  LARGE_INTEGER *v130; // rbx
  struct tagTHREADINFO *v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 *v135; // r15
  __int64 v136; // rax
  PERESOURCE *v137; // rbx
  LARGE_INTEGER *v138; // rbx
  struct tagTHREADINFO *v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 *v143; // r15
  __int64 v144; // rax
  PERESOURCE *v145; // rbx
  LARGE_INTEGER *v146; // rbx
  struct tagTHREADINFO *v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // r15
  __int64 v152; // rax
  PERESOURCE *v153; // rbx
  enum POWER_MONITOR_REQUEST_REASON v154; // ecx
  LARGE_INTEGER *v155; // rbx
  struct tagTHREADINFO *v156; // rbx
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 *v160; // rsi
  __int64 v161; // rax
  PERESOURCE *v162; // rbx
  LARGE_INTEGER *v163; // rbx
  struct tagTHREADINFO *v164; // rbx
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 *v168; // r15
  __int64 v169; // rax
  PERESOURCE *v170; // rbx
  LARGE_INTEGER *v171; // rbx
  struct tagTHREADINFO *v172; // rbx
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 *v176; // r15
  __int64 v177; // rax
  PERESOURCE *v178; // rbx
  LARGE_INTEGER *v179; // rbx
  struct tagTHREADINFO *v180; // rbx
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 *v184; // r15
  __int64 v185; // rax
  PERESOURCE *v186; // rbx
  LARGE_INTEGER *v187; // rbx
  struct tagTHREADINFO *v188; // rbx
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 *v192; // r15
  __int64 v193; // rax
  PERESOURCE *v194; // rbx
  LARGE_INTEGER *v195; // rbx
  struct tagTHREADINFO *v196; // rbx
  __int64 v197; // rdx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 *v200; // r15
  __int64 v201; // rax
  PERESOURCE *v202; // rbx
  LARGE_INTEGER *v203; // rbx
  struct tagTHREADINFO *v204; // rbx
  __int64 v205; // rdx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 *v208; // rsi
  __int64 v209; // rax
  PERESOURCE *v210; // rbx
  LARGE_INTEGER *v211; // rbx
  struct tagTHREADINFO *v212; // rbx
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 *v216; // r15
  __int64 v217; // rax
  PERESOURCE *v218; // rbx
  PERESOURCE *v220; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v221; // [rsp+58h] [rbp-B0h] BYREF
  PERESOURCE *v222; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v223; // [rsp+68h] [rbp-A0h] BYREF
  PERESOURCE *v224; // [rsp+78h] [rbp-90h] BYREF
  PERESOURCE *v225; // [rsp+80h] [rbp-88h] BYREF
  PERESOURCE *v226; // [rsp+88h] [rbp-80h] BYREF
  PERESOURCE *v227; // [rsp+90h] [rbp-78h] BYREF
  PERESOURCE *v228; // [rsp+98h] [rbp-70h] BYREF
  PERESOURCE *v229; // [rsp+A0h] [rbp-68h] BYREF
  PERESOURCE *v230; // [rsp+A8h] [rbp-60h] BYREF
  PERESOURCE *v231; // [rsp+B0h] [rbp-58h] BYREF
  PERESOURCE *v232; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v233; // [rsp+C0h] [rbp-48h] BYREF
  PERESOURCE *v234; // [rsp+C8h] [rbp-40h] BYREF
  PERESOURCE *v235; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE *v236; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE *v237; // [rsp+E0h] [rbp-28h] BYREF
  PERESOURCE *v238; // [rsp+E8h] [rbp-20h] BYREF
  PERESOURCE *v239; // [rsp+F0h] [rbp-18h] BYREF
  PERESOURCE *v240; // [rsp+F8h] [rbp-10h] BYREF
  PERESOURCE *v241; // [rsp+100h] [rbp-8h] BYREF
  PERESOURCE *v242; // [rsp+108h] [rbp+0h] BYREF
  PERESOURCE *v243; // [rsp+110h] [rbp+8h] BYREF
  PERESOURCE *v244; // [rsp+118h] [rbp+10h] BYREF
  PERESOURCE *v245; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v246[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v247[32]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v248[32]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v249[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v250[32]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v251[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v252[32]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v253[32]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v254[32]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v255[32]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v256[32]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v257[32]; // [rsp+288h] [rbp+180h] BYREF
  _BYTE v258[32]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v259[32]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _BYTE v260[32]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v261[32]; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v262[32]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v263[32]; // [rsp+348h] [rbp+240h] BYREF
  _BYTE v264[32]; // [rsp+368h] [rbp+260h] BYREF
  _BYTE v265[32]; // [rsp+388h] [rbp+280h] BYREF
  _BYTE v266[32]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v267[32]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v268[32]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v6 = a6;
  v7 = 0;
  v8 = a4;
  v222 = a4;
  v224 = a6;
  v11 = 0;
  v223 = 0LL;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  v12 = "IXPTelAssert";
  if ( !a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_17;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v246, 1);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v246, v15, v16, v17);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v245);
      v18 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v18[2];
          v19 = *v18;
          v18[2] = 0LL;
          if ( !*(_DWORD *)(v19 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          {
            LODWORD(v220) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          HMUnlockObject(*v18);
          tagDomLock::LockExclusive(DomainLockRef);
          v18 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v8 = v222;
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v245);
      v6 = v224;
    }
    UserSessionSwitchLeaveCrit();
    v12 = "IXPTelAssert";
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_17:
  if ( !a1 )
  {
    if ( a3 != 20 || !v8 )
      return (unsigned int)-1073741823;
    if ( *(PERESOURCE *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *v8
      && *(PERESOURCE *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 == v8[1] )
    {
      v90 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
      if ( v90 )
        v90[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v253, 1);
      v91 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v253, v92, v93, v94);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v91;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v229);
        v95 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v95[2];
            v96 = *v95;
            v95[2] = 0LL;
            if ( !*(_DWORD *)(v96 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v97 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v97 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v97);
            HMUnlockObject(*v95);
            tagDomLock::LockExclusive(v97);
            v95 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v222;
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v229);
      }
      if ( gProtocolType )
        goto LABEL_189;
      giPowerOffTimeOutMs = 1000 * *((_DWORD *)v8 + 4);
    }
    else if ( *(PERESOURCE *)&GUID_TS_INPUT_TIMEOUT.Data1 == *v8 && *(PERESOURCE *)GUID_TS_INPUT_TIMEOUT.Data4 == v8[1] )
    {
      v98 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
      if ( v98 )
        v98[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v254, 1);
      v99 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v254, v100, v101, v102);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v99;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v230);
        v103 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v103[2];
            v104 = *v103;
            v103[2] = 0LL;
            if ( !*(_DWORD *)(v104 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v105 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v105 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v105);
            HMUnlockObject(*v103);
            tagDomLock::LockExclusive(v105);
            v103 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v222;
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v230);
      }
      if ( !gProtocolType || !dword_1C02501D4 )
        goto LABEL_189;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)v8 + 4);
    }
    else if ( *(PERESOURCE *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *v8
           && *(PERESOURCE *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 == v8[1] )
    {
      v106 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
      if ( v106 )
        v106[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v255, 1);
      v107 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v255, v108, v109, v110);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v107;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v231);
        v111 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v111[2];
            v112 = *v111;
            v111[2] = 0LL;
            if ( !*(_DWORD *)(v112 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v113 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v113 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v113);
            HMUnlockObject(*v111);
            tagDomLock::LockExclusive(v113);
            v111 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v222;
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v231);
      }
      if ( gProtocolType )
        goto LABEL_189;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)v8 + 4);
      if ( giPowerSessionActivityTimeOutMs )
        gPowerAdaptiveState = 0;
    }
    else
    {
      if ( *(PERESOURCE *)&GUID_VIDEO_DIM_TIMEOUT.Data1 != *v8 || *(PERESOURCE *)GUID_VIDEO_DIM_TIMEOUT.Data4 != v8[1] )
      {
        if ( *(PERESOURCE *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *v8
          && *(PERESOURCE *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == v8[1] )
        {
          v122 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
          if ( v122 )
            v122[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v257, 1);
          v123 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire(
            (InputTraceLogging::Perf::CritAcquire *)v257,
            v124,
            v125,
            v126);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v123;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v233);
            v127 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v127[2];
                v128 = *v127;
                v127[2] = 0LL;
                if ( !*(_DWORD *)(v128 + 8) )
                {
                  LODWORD(v220) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v129 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v129 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                ExReleaseResourceAndLeaveCriticalRegion(*v129);
                HMUnlockObject(*v127);
                tagDomLock::LockExclusive(v129);
                v127 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v222;
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v233);
          }
          dword_1C02521B0 = *((_DWORD *)v8 + 4);
          goto LABEL_189;
        }
        if ( *(PERESOURCE *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *v8
          && *(PERESOURCE *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == v8[1] )
        {
          v130 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
          if ( v130 )
            v130[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v258, 1);
          v131 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire(
            (InputTraceLogging::Perf::CritAcquire *)v258,
            v132,
            v133,
            v134);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v131;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v234);
            v135 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v135[2];
                v136 = *v135;
                v135[2] = 0LL;
                if ( !*(_DWORD *)(v136 + 8) )
                {
                  LODWORD(v220) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v137 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v137 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                ExReleaseResourceAndLeaveCriticalRegion(*v137);
                HMUnlockObject(*v135);
                tagDomLock::LockExclusive(v137);
                v135 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v222;
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v234);
          }
          dword_1C02521A8 = *((_DWORD *)v8 + 4);
          goto LABEL_189;
        }
        if ( *(PERESOURCE *)&GUID_VIDEO_ALS_OFFSET.Data1 == *v8 && *(PERESOURCE *)GUID_VIDEO_ALS_OFFSET.Data4 == v8[1] )
        {
          v138 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
          if ( v138 )
            v138[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v259, 1);
          v139 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire(
            (InputTraceLogging::Perf::CritAcquire *)v259,
            v140,
            v141,
            v142);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v139;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v235);
            v143 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v143[2];
                v144 = *v143;
                v143[2] = 0LL;
                if ( !*(_DWORD *)(v144 + 8) )
                {
                  LODWORD(v220) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v145 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v145 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                ExReleaseResourceAndLeaveCriticalRegion(*v145);
                HMUnlockObject(*v143);
                tagDomLock::LockExclusive(v145);
                v143 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v222;
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v235);
          }
          LODWORD(v220) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5086LL);
          dword_1C02521B8 = *((_DWORD *)v8 + 4);
          goto LABEL_189;
        }
        if ( *(PERESOURCE *)&GUID_ACDC_POWER_SOURCE.Data1 == *v8 && *(PERESOURCE *)GUID_ACDC_POWER_SOURCE.Data4 == v8[1]
          || *(PERESOURCE *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *v8
          && *(PERESOURCE *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == v8[1] )
        {
          v146 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
          if ( v146 )
            v146[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v260, 1);
          v147 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire(
            (InputTraceLogging::Perf::CritAcquire *)v260,
            v148,
            v149,
            v150);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v147;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v236);
            v151 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v151[2];
                v152 = *v151;
                v151[2] = 0LL;
                if ( !*(_DWORD *)(v152 + 8) )
                {
                  LODWORD(v220) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v153 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v153 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                ExReleaseResourceAndLeaveCriticalRegion(*v153);
                HMUnlockObject(*v151);
                tagDomLock::LockExclusive(v153);
                v151 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v222;
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v236);
          }
          if ( gSqmIsOptedIn && !gProtocolType )
            SqmPowerState();
          dword_1C02521F8 = *((_DWORD *)v8 + 4) == 0;
          if ( *(PERESOURCE *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *v8
            && *(PERESOURCE *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == v8[1]
            || gbTtmEnabled
            || gProtocolType )
          {
            goto LABEL_189;
          }
          v154 = MonitorRequestReasonAcDcDisplayBurst;
        }
        else
        {
          if ( *(PERESOURCE *)&GUID_BATTERY_COUNT.Data1 != *v8 || *(PERESOURCE *)GUID_BATTERY_COUNT.Data4 != v8[1] )
          {
            if ( *(PERESOURCE *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *v8
              && *(PERESOURCE *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == v8[1] )
            {
              v163 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
              if ( v163 )
                v163[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v262, 1);
              v164 = EnterCritAvoidingDitHitTestHazard(0, 1);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                (InputTraceLogging::Perf::CritAcquire *)v262,
                v165,
                v166,
                v167);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v164;
              gbValidateHandleForIL = 1;
              if ( IsValidGuiThreadContext() )
              {
                CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v238);
                v168 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v168[2];
                    v169 = *v168;
                    v168[2] = 0LL;
                    if ( !*(_DWORD *)(v169 + 8) )
                    {
                      LODWORD(v220) = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                    }
                    v170 = (PERESOURCE *)GetDomainLockRef(12);
                    if ( v170 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                    ExReleaseResourceAndLeaveCriticalRegion(*v170);
                    HMUnlockObject(*v168);
                    tagDomLock::LockExclusive(v170);
                    v168 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v8 = v222;
                  v11 = 0;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v238);
              }
              LOBYTE(v7) = *((_DWORD *)v8 + 4) != 0;
              dword_1C025221C = v7;
              goto LABEL_189;
            }
            if ( *(PERESOURCE *)&GUID_SYSTEM_AWAYMODE.Data1 != *v8 || *(PERESOURCE *)GUID_SYSTEM_AWAYMODE.Data4 != v8[1] )
            {
              if ( *(PERESOURCE *)&GUID_POWER_SAVING_STATUS.Data1 == *v8
                && *(PERESOURCE *)GUID_POWER_SAVING_STATUS.Data4 == v8[1] )
              {
                v179 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
                if ( v179 )
                  v179[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v264, 1);
                v180 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v264,
                  v181,
                  v182,
                  v183);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v180;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v240);
                  v184 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v184[2];
                      v185 = *v184;
                      v184[2] = 0LL;
                      if ( !*(_DWORD *)(v185 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v186 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v186 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v186);
                      HMUnlockObject(*v184);
                      tagDomLock::LockExclusive(v186);
                      v184 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v8 = v222;
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v240);
                }
                dword_1C0252214 = *((_DWORD *)v8 + 4);
                goto LABEL_189;
              }
              if ( *(PERESOURCE *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *v8
                && *(PERESOURCE *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == v8[1] )
              {
                v187 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
                if ( v187 )
                  v187[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v265, 1);
                v188 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v265,
                  v189,
                  v190,
                  v191);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v188;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v241);
                  v192 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v192[2];
                      v193 = *v192;
                      v192[2] = 0LL;
                      if ( !*(_DWORD *)(v193 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v194 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v194 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v194);
                      HMUnlockObject(*v192);
                      tagDomLock::LockExclusive(v194);
                      v192 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v8 = v222;
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v241);
                }
                dword_1C02521BC = *((_DWORD *)v8 + 4);
                goto LABEL_189;
              }
              if ( *(PERESOURCE *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *v8
                && *(PERESOURCE *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == v8[1] )
              {
                v195 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
                if ( v195 )
                  v195[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v266, 1);
                v196 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v266,
                  v197,
                  v198,
                  v199);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v196;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v242);
                  v200 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v200[2];
                      v201 = *v200;
                      v200[2] = 0LL;
                      if ( !*(_DWORD *)(v201 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v202 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v202 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v202);
                      HMUnlockObject(*v200);
                      tagDomLock::LockExclusive(v202);
                      v200 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v8 = v222;
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v242);
                }
                dword_1C0252218 = *((_DWORD *)v8 + 4);
                goto LABEL_189;
              }
              if ( *(PERESOURCE *)&GUID_LOW_POWER_EPOCH.Data1 == *v8
                && *(PERESOURCE *)GUID_LOW_POWER_EPOCH.Data4 == v8[1] )
              {
                if ( !*((_DWORD *)v8 + 4) )
                  return v11;
                v203 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
                if ( v203 )
                  v203[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v267, 1);
                v204 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v267,
                  v205,
                  v206,
                  v207);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v204;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v243);
                  v208 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v208[2];
                      v209 = *v208;
                      v208[2] = 0LL;
                      if ( !*(_DWORD *)(v209 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v210 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v210 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v210);
                      HMUnlockObject(*v208);
                      tagDomLock::LockExclusive(v210);
                      v208 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v243);
                }
                gdwUpdateKeyboard |= 2u;
                goto LABEL_189;
              }
              if ( *(PERESOURCE *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *v8
                && *(PERESOURCE *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 == v8[1] )
              {
                v211 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
                if ( v211 )
                  v211[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v268, 1);
                v212 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v268,
                  v213,
                  v214,
                  v215);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v212;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v244);
                  v216 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v216[2];
                      v217 = *v216;
                      v216[2] = 0LL;
                      if ( !*(_DWORD *)(v217 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v218 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v218 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v218);
                      HMUnlockObject(*v216);
                      tagDomLock::LockExclusive(v218);
                      v216 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v8 = v222;
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v244);
                }
                CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(&v220);
                dword_1C0252220 = *((_DWORD *)v8 + 4) != 0;
                UserLogError((unsigned int)(-(unsigned __int8)dword_1C0252220 - 2147482947));
                CBaseInput::OnInputSuppressedValueChanged(*((_DWORD *)v8 + 4) != 0);
                ExReleaseResourceAndLeaveCriticalRegion(*v220);
                goto LABEL_189;
              }
              return (unsigned int)-1073741823;
            }
            v171 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
            if ( v171 )
              v171[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v263, 1);
            v172 = EnterCritAvoidingDitHitTestHazard(0, 1);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire(
              (InputTraceLogging::Perf::CritAcquire *)v263,
              v173,
              v174,
              v175);
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v172;
            gbValidateHandleForIL = 1;
            if ( IsValidGuiThreadContext() )
            {
              CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v239);
              v176 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v176[2];
                  v177 = *v176;
                  v176[2] = 0LL;
                  if ( !*(_DWORD *)(v177 + 8) )
                  {
                    LODWORD(v220) = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                  }
                  v178 = (PERESOURCE *)GetDomainLockRef(12);
                  if ( v178 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                  ExReleaseResourceAndLeaveCriticalRegion(*v178);
                  HMUnlockObject(*v176);
                  tagDomLock::LockExclusive(v178);
                  v176 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v8 = v222;
                v11 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v239);
            }
            if ( !*((_DWORD *)v8 + 4) )
            {
              dword_1C02521EC = 0;
              goto LABEL_189;
            }
            if ( gbTtmEnabled )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5147LL);
            }
            dword_1C02521EC = 1;
            LODWORD(v223) = 5;
            *((_QWORD *)&v223 + 1) = 13LL;
            goto LABEL_75;
          }
          v155 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
          if ( v155 )
            v155[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v261, 1);
          v156 = EnterCritAvoidingDitHitTestHazard(0, 1);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire(
            (InputTraceLogging::Perf::CritAcquire *)v261,
            v157,
            v158,
            v159);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v156;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v237);
            v160 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v160[2];
                v161 = *v160;
                v160[2] = 0LL;
                if ( !*(_DWORD *)(v161 + 8) )
                {
                  LODWORD(v220) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v162 = (PERESOURCE *)GetDomainLockRef(12);
                if ( v162 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                ExReleaseResourceAndLeaveCriticalRegion(*v162);
                HMUnlockObject(*v160);
                tagDomLock::LockExclusive(v162);
                v160 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v237);
          }
          if ( gbTtmEnabled || gProtocolType || dword_1C02521F8 )
            goto LABEL_189;
          v154 = MonitorRequestReasonBatteryCountChange;
        }
        PowerDisplayBurst(v154);
        goto LABEL_189;
      }
      v114 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
      if ( v114 )
        v114[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v256, 1);
      v115 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v256, v116, v117, v118);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v115;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v232);
        v119 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v119[2];
            v120 = *v119;
            v119[2] = 0LL;
            if ( !*(_DWORD *)(v120 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v121 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v121 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v121);
            HMUnlockObject(*v119);
            tagDomLock::LockExclusive(v121);
            v119 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v222;
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v232);
      }
      giDimTimeOutMs = 1000 * *((_DWORD *)v8 + 4);
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_189;
  }
  v21 = a1 - 1;
  if ( !v21 )
  {
    if ( gbTtmEnabled )
    {
      LODWORD(v220) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5230LL);
    }
    if ( a3 != 8 || !v8 )
      return (unsigned int)-1073741823;
    v78 = *((_BYTE *)v8 + 1);
    v79 = *(_BYTE *)v8;
    v80 = *((int *)v8 + 1);
    BYTE4(v221) = v78;
    v81 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( v81 )
      v81[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v252, 1);
    v82 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v252, v83, v84, v85);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v82;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v228);
      v86 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v86[2];
          v87 = *v86;
          v86[2] = 0LL;
          if ( !*(_DWORD *)(v87 + 8) )
          {
            LODWORD(v220) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v88 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v88 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          ExReleaseResourceAndLeaveCriticalRegion(*v88);
          HMUnlockObject(*v86);
          tagDomLock::LockExclusive(v88);
          v86 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v78 = BYTE4(v221);
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v228);
    }
    if ( v79 && gbBlockSendInputResets )
      goto LABEL_189;
    v89 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v89, 5);
    CitLastInputUpdate(5, v89, 0LL, 0);
    if ( v78 )
      goto LABEL_189;
    if ( dword_1C02521F0 )
    {
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v80);
      goto LABEL_189;
    }
    LODWORD(v223) = 4;
    *((_QWORD *)&v223 + 1) = v80;
    goto LABEL_75;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    if ( gbTtmEnabled )
    {
      LODWORD(v220) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5327LL);
    }
    if ( a3 != 4 || !v8 || a5 != 4 || !v6 )
      return (unsigned int)-1073741811;
    v65 = *(_DWORD *)v8;
    v66 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( v66 )
      v66[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v251, 1);
    v67 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v251, v68, v69, v70);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v67;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v227);
      v71 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v71[2];
          v72 = *v71;
          v71[2] = 0LL;
          if ( !*(_DWORD *)(v72 + 8) )
          {
            LODWORD(v220) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v73 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v73 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          ExReleaseResourceAndLeaveCriticalRegion(*v73);
          HMUnlockObject(*v71);
          tagDomLock::LockExclusive(v73);
          v71 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v6 = v224;
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v227);
    }
    v74 = dword_1C0252198;
    v75 = dword_1C0252198 + v65;
    dword_1C0252198 += v65;
    if ( v74 == 1 )
    {
      v76 = v75 == 0;
      v77 = v75 < 0;
      if ( v75 )
        goto LABEL_165;
      CitDisplayRequestChange(0);
      EtwTraceDisplayReqChange(0LL);
      if ( !gbBlockSendInputResets )
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          10);
    }
    else if ( !v74 && v75 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange(1LL);
    }
    v76 = v75 == 0;
    v77 = v75 < 0;
LABEL_165:
    BYTE4(v221) = !v77 && !v76;
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, (char *)&v221 + 4, 1LL, 0LL, &gSessionId, 0, 0);
    UserSessionSwitchLeaveCrit();
    if ( !v74 && v75 == 1 && dword_1C02521A0 == 2 )
    {
      LODWORD(v223) = 4;
      *((_QWORD *)&v223 + 1) = 48LL;
      QueuePowerRequest(&v223, 0LL);
    }
    if ( v75 >= 0 )
      v7 = v75;
    *(_DWORD *)v6 = v7;
    return v11;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              if ( !gbTtmEnabled )
              {
                LODWORD(v220) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5292LL);
              }
              if ( a3 == 1 && v8 && !a5 && !v6 )
              {
                v28 = *(_BYTE *)v8 != 0;
                LODWORD(v222) = v28;
                v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
                if ( v29 )
                  v29[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v247, 1);
                v30 = EnterCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v247,
                  v31,
                  v32,
                  v33);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v30;
                gbValidateHandleForIL = 1;
                if ( IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v224);
                  v34 = (__int64 *)gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
                      v35 = *v34;
                      v34[2] = 0LL;
                      if ( !*(_DWORD *)(v35 + 8) )
                      {
                        LODWORD(v220) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                      }
                      v36 = (PERESOURCE *)GetDomainLockRef(12);
                      if ( v36 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                      ExReleaseResourceAndLeaveCriticalRegion(*v36);
                      HMUnlockObject(*v34);
                      tagDomLock::LockExclusive(v36);
                      v34 = (__int64 *)gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v28 = (unsigned int)v222;
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v224);
                }
                CitDisplayRequestChange(v28);
                EtwTraceDisplayReqChange(v28);
                goto LABEL_189;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !gbTtmEnabled )
          {
            LODWORD(v220) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5548LL);
          }
          if ( a3 != 4 || !v8 )
            return (unsigned int)-1073741823;
          LOBYTE(a2) = 1;
          *((_QWORD *)&v223 + 1) = *(int *)v8;
          LODWORD(v223) = 15;
LABEL_50:
          QueuePowerRequest(&v223, a2);
          return v11;
        }
        if ( !gbTtmEnabled )
        {
          LODWORD(v220) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5515LL);
        }
        if ( a3 != 8 || !v8 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v223 + 1) = *((int *)v8 + 1);
        LODWORD(v223) = 14;
        if ( *(_BYTE *)v8 )
          LODWORD(v223) = 13;
LABEL_57:
        a2 = 0LL;
        goto LABEL_50;
      }
      if ( gbTtmEnabled )
      {
        LODWORD(v220) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5488LL);
      }
      v37 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
      if ( v37 )
        v37[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v248, 1);
      v38 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v248, v39, v40, v41);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v38;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v222);
        v42 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
            v43 = *v42;
            v42[2] = 0LL;
            if ( !*(_DWORD *)(v43 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v44 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v44 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v44);
            HMUnlockObject(*v42);
            tagDomLock::LockExclusive(v44);
            v42 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v222);
      }
      if ( !gWakeInProgress )
        goto LABEL_189;
      v45 = gWakeInProgressReason;
      gWakeInProgress = 0;
      gWakeInProgressReason = MonitorRequestReasonUnknown;
      if ( gnPoSessionSwitchBlockCount < 2 )
      {
        LODWORD(v220) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5503LL);
      }
      LODWORD(v223) = 12;
      *((_QWORD *)&v223 + 1) = v45;
      goto LABEL_75;
    }
    if ( a3 == 32 && v8 )
    {
      v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread("IXPTelAssert");
      if ( v46 )
        v46[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v249, 1);
      v47 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v249, v48, v49, v50);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v47;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v225);
        v51 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v51[2];
            v52 = *v51;
            v51[2] = 0LL;
            if ( !*(_DWORD *)(v52 + 8) )
            {
              LODWORD(v220) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v53 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v53 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            ExReleaseResourceAndLeaveCriticalRegion(*v53);
            HMUnlockObject(*v51);
            tagDomLock::LockExclusive(v53);
            v51 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v222;
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v225);
      }
      dword_1C02521C4 = *(_DWORD *)v8;
      v54 = *((unsigned int *)v8 + 1);
      dword_1C02521C8 = *((_DWORD *)v8 + 1);
      dword_1C02521CC = *((_DWORD *)v8 + 2);
      dword_1C02521D0 = *((_DWORD *)v8 + 3);
      dword_1C02521D4 = *((_DWORD *)v8 + 4);
      dword_1C02521D8 = *((_DWORD *)v8 + 5);
      dword_1C02521DC = *((_DWORD *)v8 + 6);
      dword_1C02521E0 = *((_DWORD *)v8 + 7);
      if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v54 != -1 )
      {
        if ( qword_1C0251B18 )
        {
          LOBYTE(v54) = 1;
          v11 = qword_1C0251B18(v54, v8);
        }
        else
        {
          v11 = -1073741637;
        }
        LOBYTE(v7) = (v11 & 0x80000000) == 0;
        gbPowerHighPrecisionBrightnessSupported = v7;
      }
      dword_1C02521A8 = dword_1C02521C4;
      dword_1C02521AC = dword_1C02521C4;
      dword_1C02521B0 = dword_1C02521D4;
      dword_1C02521B4 = dword_1C02521D4;
      if ( dword_1C02521A0 == 1 )
      {
        if ( dword_1C02521C0 == dword_1C02521C4 )
          goto LABEL_189;
        LODWORD(v223) = 11;
        *((_QWORD *)&v223 + 1) = 1LL;
        QueuePowerRequest(&v223, 0LL);
      }
      if ( dword_1C02521A0 != 2 || dword_1C02521C0 == dword_1C02521D4 )
        goto LABEL_189;
      LODWORD(v223) = 11;
      *((_QWORD *)&v223 + 1) = 2LL;
LABEL_75:
      QueuePowerRequest(&v223, 0LL);
LABEL_189:
      UserSessionSwitchLeaveCrit();
      return v11;
    }
    return (unsigned int)-1073741811;
  }
  if ( gbTtmEnabled )
  {
    LODWORD(v220) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5401LL);
  }
  if ( a3 != 8 || !v8 )
    return (unsigned int)-1073741823;
  v55 = 0;
  v56 = 0;
  if ( *(_DWORD *)v8 )
  {
    if ( *(_DWORD *)v8 == 1 )
    {
      v56 = 1;
LABEL_128:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5);
      goto LABEL_129;
    }
    if ( *(_DWORD *)v8 != 2 )
    {
      LODWORD(v220) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5449LL);
      return v11;
    }
    v57 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((unsigned int)(*(_DWORD *)v8 - 1));
    if ( v57 )
      v57[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v250, 1);
    v58 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v250, v59, v60, v61);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v58;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v226);
      v62 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v62[2];
          v63 = *v62;
          v62[2] = 0LL;
          if ( !*(_DWORD *)(v63 + 8) )
          {
            LODWORD(v220) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v64 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v64 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          ExReleaseResourceAndLeaveCriticalRegion(*v64);
          HMUnlockObject(*v62);
          tagDomLock::LockExclusive(v64);
          v62 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v8 = v222;
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v226);
    }
    if ( gPowerTransitionsState )
      v11 = 255;
    else
      v56 = 1;
    UserSessionSwitchLeaveCrit();
  }
  else
  {
    v55 = 1;
  }
  if ( v56 )
    goto LABEL_128;
LABEL_129:
  if ( !v55 )
  {
    if ( !v56 )
      return v11;
    goto LABEL_138;
  }
  if ( !gSystemIsAoAc )
  {
LABEL_134:
    if ( !v56 )
    {
      LODWORD(v223) = 5;
LABEL_139:
      *((_QWORD *)&v223 + 1) = *((int *)v8 + 1);
      goto LABEL_57;
    }
    LODWORD(v220) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5477LL);
LABEL_138:
    LODWORD(v223) = 4;
    goto LABEL_139;
  }
  if ( gPowerTransitionsState || qword_1C02521FC )
  {
    SetInputMode(1LL);
    goto LABEL_134;
  }
  return v11;
}
