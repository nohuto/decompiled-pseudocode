/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C011ECA0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A5A68 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C011E688 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C011E890 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C01473A4 (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0147460 (DrvDxgkPollDisplayChildren.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, UUID *a4, int *a5)
{
  char v6; // r13
  int v7; // esi
  UUID *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v12; // rax
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rdi
  __int64 *v32; // rsi
  __int64 v33; // rax
  PVOID *v34; // rbx
  int *v35; // r15
  int v36; // edi
  UUID *p_Uuid; // rbx
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  LARGE_INTEGER *v42; // rbx
  __int64 v43; // rax
  struct tagTHREADINFO *v44; // rbx
  struct tagTHREADINFO **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PVOID v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rax
  struct _KTHREAD *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rax
  PVOID *v62; // rdi
  __int64 *v63; // rsi
  __int64 v64; // rax
  PVOID *v65; // rbx
  int v66; // r14d
  __int64 v67; // rcx
  __int64 v68; // rcx
  LARGE_INTEGER *v69; // rbx
  __int64 v70; // rax
  struct tagTHREADINFO *v71; // rbx
  struct tagTHREADINFO **v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  PVOID v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // ebx
  __int64 v83; // rax
  struct _KTHREAD *v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rcx
  __int64 *v87; // rax
  __int64 v88; // rax
  PVOID *v89; // rdi
  __int64 *v90; // rsi
  __int64 v91; // rax
  PVOID *v92; // rbx
  int v93; // edi
  UUID *v94; // rbx
  PEPROCESS v95; // rax
  int v96; // eax
  int v97; // r14d
  __int64 v98; // rcx
  __int64 v99; // rcx
  LARGE_INTEGER *v100; // rbx
  __int64 v101; // rax
  struct tagTHREADINFO *v102; // rbx
  struct tagTHREADINFO **v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  PVOID v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned int v109; // r8d
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // ebx
  __int64 v114; // rax
  struct _KTHREAD *v115; // rdi
  __int64 v116; // rbx
  __int64 v117; // rcx
  __int64 *v118; // rax
  __int64 v119; // rax
  PVOID *v120; // rbx
  __int64 *v121; // rsi
  __int64 v122; // rax
  PVOID *v123; // rdi
  __int64 v124; // rbx
  __int64 v125; // rcx
  int v126; // r8d
  __int64 v127; // r9
  bool v130; // [rsp+88h] [rbp-80h] BYREF
  __int16 v131; // [rsp+8Ah] [rbp-7Eh] BYREF
  __int16 v132; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v133; // [rsp+90h] [rbp-78h]
  int v134; // [rsp+94h] [rbp-74h]
  int v135; // [rsp+98h] [rbp-70h] BYREF
  int v136; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v137; // [rsp+A0h] [rbp-68h] BYREF
  int v138; // [rsp+A4h] [rbp-64h] BYREF
  int v139; // [rsp+A8h] [rbp-60h] BYREF
  int v140; // [rsp+ACh] [rbp-5Ch] BYREF
  int v141; // [rsp+B0h] [rbp-58h] BYREF
  int v142; // [rsp+B4h] [rbp-54h] BYREF
  int v143; // [rsp+B8h] [rbp-50h] BYREF
  int v144; // [rsp+BCh] [rbp-4Ch] BYREF
  int v145; // [rsp+C0h] [rbp-48h] BYREF
  int v146; // [rsp+C4h] [rbp-44h] BYREF
  int v147; // [rsp+C8h] [rbp-40h] BYREF
  int v148; // [rsp+CCh] [rbp-3Ch] BYREF
  int v149; // [rsp+D0h] [rbp-38h] BYREF
  int v150; // [rsp+D4h] [rbp-34h] BYREF
  int v151; // [rsp+D8h] [rbp-30h] BYREF
  int v152; // [rsp+DCh] [rbp-2Ch] BYREF
  __int64 v153; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v154; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v155; // [rsp+F8h] [rbp-10h]
  UUID *v156; // [rsp+108h] [rbp+0h]
  __int64 v157; // [rsp+110h] [rbp+8h] BYREF
  __int16 v158; // [rsp+118h] [rbp+10h]
  UUID v159; // [rsp+128h] [rbp+20h] BYREF
  UUID v160; // [rsp+138h] [rbp+30h] BYREF
  __int64 v161; // [rsp+148h] [rbp+40h]
  unsigned __int8 v162; // [rsp+150h] [rbp+48h]
  GUID v163; // [rsp+154h] [rbp+4Ch] BYREF
  __int64 v164; // [rsp+168h] [rbp+60h]
  unsigned __int8 v165; // [rsp+170h] [rbp+68h]
  GUID v166; // [rsp+174h] [rbp+6Ch] BYREF
  __int64 v167; // [rsp+188h] [rbp+80h]
  unsigned __int8 v168; // [rsp+190h] [rbp+88h]
  GUID v169; // [rsp+194h] [rbp+8Ch] BYREF
  __int64 v170; // [rsp+1A8h] [rbp+A0h]
  unsigned __int8 v171; // [rsp+1B0h] [rbp+A8h]
  GUID v172; // [rsp+1B4h] [rbp+ACh] BYREF
  UUID Uuid; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v174[10]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v175; // [rsp+228h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v176; // [rsp+238h] [rbp+130h] BYREF
  int *v177; // [rsp+258h] [rbp+150h]
  __int64 v178; // [rsp+260h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR v179; // [rsp+268h] [rbp+160h] BYREF
  int *v180; // [rsp+288h] [rbp+180h]
  __int64 v181; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v182; // [rsp+298h] [rbp+190h] BYREF
  int *v183; // [rsp+2B8h] [rbp+1B0h]
  __int64 v184; // [rsp+2C0h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR v185; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v186; // [rsp+2E8h] [rbp+1E0h]
  __int64 v187; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v188; // [rsp+2F8h] [rbp+1F0h] BYREF
  int *v189; // [rsp+318h] [rbp+210h]
  __int64 v190; // [rsp+320h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR v191; // [rsp+328h] [rbp+220h] BYREF
  int *v192; // [rsp+348h] [rbp+240h]
  __int64 v193; // [rsp+350h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+358h] [rbp+250h] BYREF
  int *v195; // [rsp+378h] [rbp+270h]
  __int64 v196; // [rsp+380h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR v197; // [rsp+388h] [rbp+280h] BYREF
  int *v198; // [rsp+3A8h] [rbp+2A0h]
  __int64 v199; // [rsp+3B0h] [rbp+2A8h]
  struct _EVENT_DATA_DESCRIPTOR v200; // [rsp+3B8h] [rbp+2B0h] BYREF
  int *v201; // [rsp+3D8h] [rbp+2D0h]
  __int64 v202; // [rsp+3E0h] [rbp+2D8h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+3E8h] [rbp+2E0h] BYREF
  int *v204; // [rsp+408h] [rbp+300h]
  __int64 v205; // [rsp+410h] [rbp+308h]
  struct _EVENT_DATA_DESCRIPTOR v206; // [rsp+418h] [rbp+310h] BYREF
  int *v207; // [rsp+438h] [rbp+330h]
  __int64 v208; // [rsp+440h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR v209; // [rsp+448h] [rbp+340h] BYREF
  int *v210; // [rsp+468h] [rbp+360h]
  __int64 v211; // [rsp+470h] [rbp+368h]

  v6 = a3;
  v156 = a4;
  v7 = a1;
  v8 = a4;
  memset(v174, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v174[1]);
  v174[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v174[3]) = 15;
  LOBYTE(v174[6]) = -1;
  LODWORD(v174[4]) = v7;
  if ( gfSwitchInProgress )
  {
    do
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v163 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v162 = 1;
        v12 = PsGetCurrentThreadWin32Thread(v10);
        v161 = v12;
        if ( v12 && (*(int *)(v12 + 24) > 0 || *(_DWORD *)(v161 + 48)) )
        {
          EtwActivityIdControl(3u, &v163);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v135 = v162;
            v193 = 4LL;
            v192 = &v135;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &v163,
              0LL,
              3u,
              &v191);
          }
        }
      }
      else
      {
        v161 = 0LL;
      }
      v13 = 0LL;
      while ( 1 )
      {
        v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v14 )
          v13 = *v14;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v19, v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v13 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v161
        && (*(_DWORD *)(v161 + 48) || *(int *)(v161 + 24) > 0) )
      {
        *(_DWORD *)(v161 + 44) = 1;
        *(GUID *)(v161 + 28) = v163;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v136 = v162;
            v178 = 4LL;
            v177 = &v136;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &v163,
              0LL,
              3u,
              &v176);
            v20 = dword_1C024AA90;
          }
          if ( v20 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v137 = v162;
            v181 = 4LL;
            v180 = &v137;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &v163,
              0LL,
              3u,
              &v179);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v23 = PsGetCurrentProcess(v22, v21);
        ProcessSessionId = PsGetProcessSessionIdEx(v23);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
      if ( v27
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v27 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v27 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PVOID *)GetDomainLockRef(12);
        if ( DomainLockRef == gDomainDummyLock )
        {
          v133 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
        }
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
        {
          v134 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
        v32 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
            v33 = *v32;
            v32[2] = 0LL;
            if ( !*(_DWORD *)(v33 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            v34 = (PVOID *)GetDomainLockRef(12);
            if ( v34 == gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v34);
            HMUnlockObject(*v32);
            tagDomLock::LockExclusive((PERESOURCE *)v34);
            v32 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v156;
          v6 = a3;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      }
    }
    while ( gfSwitchInProgress );
    v7 = a1;
  }
  v154 = 0LL;
  LOWORD(v154) = gProtocolType;
  v155 = 0LL;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v35 = a5;
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit();
      Uuid = 0LL;
      if ( !v8 && ExUuidCreate(&Uuid) < 0 )
        Uuid = 0LL;
      if ( a5 )
        v36 = *a5;
      else
        v36 = 0;
      p_Uuid = &Uuid;
      if ( v8 )
        p_Uuid = v8;
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0;
      }
      v159 = *p_Uuid;
      DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v174, (__int64)&v159, v36);
      xmmword_1C0258698 = *(_OWORD *)&v174[1];
      v42 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v40);
      if ( v42 )
        v42[1] = KeQueryPerformanceCounter(0LL);
      v166 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v165 = 1;
        v43 = PsGetCurrentThreadWin32Thread(v41);
        v164 = v43;
        if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v164 + 48)) )
        {
          EtwActivityIdControl(3u, &v166);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v138 = v165;
            v184 = 4LL;
            v183 = &v138;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &v166,
              0LL,
              3u,
              &v182);
          }
        }
      }
      else
      {
        v164 = 0LL;
      }
      v44 = 0LL;
      while ( 1 )
      {
        v45 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v45 )
          v44 = *v45;
        v48 = (PVOID)PsGetCurrentProcess(v47, v46);
        if ( v48 )
        {
          if ( v48 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v50, v49) == gpepCSRSS && v44 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v44 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v164
        && (*(_DWORD *)(v164 + 48) || *(int *)(v164 + 24) > 0) )
      {
        *(_DWORD *)(v164 + 44) = 1;
        *(GUID *)(v164 + 28) = v166;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v139 = v165;
            v187 = 4LL;
            v186 = &v139;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &v166,
              0LL,
              3u,
              &v185);
            v51 = dword_1C024AA90;
          }
          if ( v51 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v140 = v165;
            v190 = 4LL;
            v189 = &v140;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &v166,
              0LL,
              3u,
              &v188);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v44;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v54 = PsGetCurrentProcess(v53, v52),
            v55 = PsGetProcessSessionIdEx(v54),
            v56 = PsGetCurrentThreadProcess(),
            v55 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
      {
        v57 = KeGetCurrentThread();
        v58 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v60 = (__int64 *)PsGetThreadWin32Thread(v57);
          if ( v60 )
            v58 = *v60;
        }
        v61 = PsGetCurrentProcessWin32Process(v59);
        if ( v58
          && v61
          && (*(_DWORD *)(v58 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v58 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v61 + 12) & 0x8000) != 0 )
        {
          v62 = (PVOID *)GetDomainLockRef(12);
          if ( v62 == gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
          if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*v62) == 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
          ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*v62);
          v63 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v63[2];
              v64 = *v63;
              v63[2] = 0LL;
              if ( !*(_DWORD *)(v64 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
              v65 = (PVOID *)GetDomainLockRef(12);
              if ( v65 == gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v65);
              HMUnlockObject(*v63);
              tagDomLock::LockExclusive((PERESOURCE *)v65);
              v63 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v35 = a5;
            v6 = a3;
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v62);
        }
      }
    }
    if ( gProtocolType || !v6 )
      goto LABEL_244;
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v154);
    DWORD1(v154) = 1;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v153 = 0x1A00000000LL;
    v66 = DrvDxgkPollDisplayChildren(&v153);
    DWORD2(v154) = v66;
    v69 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v67);
    if ( v69 )
      v69[1] = KeQueryPerformanceCounter(0LL);
    v169 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v168 = 1;
      v70 = PsGetCurrentThreadWin32Thread(v68);
      v167 = v70;
      if ( v70 && (*(int *)(v70 + 24) > 0 || *(_DWORD *)(v167 + 48)) )
      {
        EtwActivityIdControl(3u, &v169);
        if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v141 = v168;
          v211 = 4LL;
          v210 = &v141;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024AA90,
            (unsigned __int8 *)dword_1C0217FD7,
            &v169,
            0LL,
            3u,
            &v209);
        }
      }
    }
    else
    {
      v167 = 0LL;
    }
    v71 = 0LL;
    while ( 1 )
    {
      v72 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v72 )
        v71 = *v72;
      v75 = (PVOID)PsGetCurrentProcess(v74, v73);
      if ( v75 )
      {
        if ( v75 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v77, v76) == gpepCSRSS && v71 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v71 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v167
      && (*(_DWORD *)(v167 + 48) || *(int *)(v167 + 24) > 0) )
    {
      *(_DWORD *)(v167 + 44) = 1;
      *(GUID *)(v167 + 28) = v169;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v142 = v168;
          v196 = 4LL;
          v195 = &v142;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024AA90,
            (unsigned __int8 *)dword_1C0217F80,
            &v169,
            0LL,
            3u,
            &v194);
          v78 = dword_1C024AA90;
        }
        if ( v78 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
        {
          v143 = v168;
          v199 = 4LL;
          v198 = &v143;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024AA90,
            (unsigned __int8 *)dword_1C0217FAD,
            &v169,
            0LL,
            3u,
            &v197);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v71;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v81 = PsGetCurrentProcess(v80, v79),
          v82 = PsGetProcessSessionIdEx(v81),
          v83 = PsGetCurrentThreadProcess(),
          v82 == (unsigned int)PsGetProcessSessionIdEx(v83)) )
    {
      v84 = KeGetCurrentThread();
      v85 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v87 = (__int64 *)PsGetThreadWin32Thread(v84);
        if ( v87 )
          v85 = *v87;
      }
      v88 = PsGetCurrentProcessWin32Process(v86);
      if ( v85
        && v88
        && (*(_DWORD *)(v85 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v85 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v88 + 12) & 0x8000) != 0 )
      {
        v89 = (PVOID *)GetDomainLockRef(12);
        if ( v89 == gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*v89) == 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
        ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*v89);
        v90 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v90[2];
            v91 = *v90;
            v90[2] = 0LL;
            if ( !*(_DWORD *)(v91 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            v92 = (PVOID *)GetDomainLockRef(12);
            if ( v92 == gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v92);
            HMUnlockObject(*v90);
            tagDomLock::LockExclusive((PERESOURCE *)v92);
            v90 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v35 = a5;
          v8 = v156;
          v6 = a3;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v89);
      }
    }
    *(_OWORD *)&v174[1] = xmmword_1C0258698;
    if ( v66 < 0
      || (HIDWORD(v154) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, &v130, 0LL, (__int64)v174),
          v154 < 0) )
    {
LABEL_244:
      v97 = a1;
    }
    else
    {
      UserSessionSwitchLeaveCrit();
      v175 = 0LL;
      if ( v35 )
        v93 = *v35;
      else
        v93 = 0;
      v94 = (UUID *)&v175;
      if ( v8 )
        v94 = v8;
      if ( gptiForeground )
      {
        v95 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        v96 = PsGetProcessImageFileName(v95);
      }
      else
      {
        v96 = 0;
      }
      v97 = a1;
      v160 = *v94;
      DrvDxgkCheckDisplayState(a1, 0, v96, (unsigned int)v174, (__int64)&v160, v93);
      v100 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v98);
      if ( v100 )
        v100[1] = KeQueryPerformanceCounter(0LL);
      v172 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v171 = 1;
        v101 = PsGetCurrentThreadWin32Thread(v99);
        v170 = v101;
        if ( v101 && (*(int *)(v101 + 24) > 0 || *(_DWORD *)(v170 + 48)) )
        {
          EtwActivityIdControl(3u, &v172);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v144 = v171;
            v202 = 4LL;
            v201 = &v144;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &v172,
              0LL,
              3u,
              &v200);
          }
        }
      }
      else
      {
        v170 = 0LL;
      }
      v102 = 0LL;
      while ( 1 )
      {
        v103 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v103 )
          v102 = *v103;
        v106 = (PVOID)PsGetCurrentProcess(v105, v104);
        if ( v106 )
        {
          if ( v106 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v108, v107) == gpepCSRSS && v102 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v102 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v170
        && (*(_DWORD *)(v170 + 48) || *(int *)(v170 + 24) > 0) )
      {
        *(_DWORD *)(v170 + 44) = 1;
        *(GUID *)(v170 + 28) = v172;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v145 = v171;
            v205 = 4LL;
            v204 = &v145;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &v172,
              0LL,
              3u,
              &v203);
            v109 = dword_1C024AA90;
          }
          if ( v109 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v146 = v171;
            v208 = 4LL;
            v207 = &v146;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &v172,
              0LL,
              3u,
              &v206);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v102;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v112 = PsGetCurrentProcess(v111, v110),
            v113 = PsGetProcessSessionIdEx(v112),
            v114 = PsGetCurrentThreadProcess(),
            v113 == (unsigned int)PsGetProcessSessionIdEx(v114)) )
      {
        v115 = KeGetCurrentThread();
        v116 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v118 = (__int64 *)PsGetThreadWin32Thread(v115);
          if ( v118 )
            v116 = *v118;
        }
        v119 = PsGetCurrentProcessWin32Process(v117);
        if ( v116
          && v119
          && (*(_DWORD *)(v116 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v116 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v119 + 12) & 0x8000) != 0 )
        {
          v120 = (PVOID *)GetDomainLockRef(12);
          if ( v120 == gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
          if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*v120) == 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
          ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*v120);
          v121 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v121[2];
              v122 = *v121;
              v121[2] = 0LL;
              if ( !*(_DWORD *)(v122 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
              v123 = (PVOID *)GetDomainLockRef(12);
              if ( v123 == gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v123);
              HMUnlockObject(*v121);
              tagDomLock::LockExclusive((PERESOURCE *)v123);
              v121 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v6 = a3;
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v120);
        }
      }
    }
  }
  else
  {
    v97 = a1;
  }
  v124 = *((_QWORD *)&v155 + 1);
  if ( !gProtocolType
    && v6
    && (unsigned int)dword_1C0245378 > 5
    && tlgKeywordOn((__int64)&dword_1C0245378, 0x400000000008LL) )
  {
    v149 = HIDWORD(v154);
    v150 = DWORD2(v154);
    v151 = v155;
    v131 = v154;
    v152 = DWORD1(v154);
    v132 = 4;
    v148 = v126;
    v147 = v97;
    v157 = v124;
    v158 = v127;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v125,
      byte_1C02185A6,
      (const GUID *)&v174[1],
      v127,
      (__int64)&v132,
      (__int64)&v152,
      (__int64)&v131,
      (__int64)&v151,
      (__int64)&v150,
      (__int64)&v149,
      (__int64)&v148,
      &v157,
      (__int64)&v147);
  }
  if ( v124 )
    Win32FreePool(v124);
}
