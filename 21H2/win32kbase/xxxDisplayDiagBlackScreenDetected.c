/*
 * XREFs of xxxDisplayDiagBlackScreenDetected @ 0x1C014A580
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@34444AEBU_tlgWrapperBinary@@4@Z @ 0x1C014A19C (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U_tlgWrapperBinary@@U2.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C014A3A4 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvDxgkCheckDisplayState @ 0x1C017406C (DrvDxgkCheckDisplayState.c)
 *     DrvDxgkPollDisplayChildren @ 0x1C0174150 (DrvDxgkPollDisplayChildren.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxDisplayDiagBlackScreenDetected(BOOL a1, char a2, char a3, UUID *a4, int *a5)
{
  char v6; // r15
  BOOL v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  LARGE_INTEGER *v18; // rbx
  struct tagTHREADINFO **v19; // rbx
  struct tagTHREADINFO *v20; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  UUID *p_Uuid; // rax
  UUID v31; // xmm6
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  LARGE_INTEGER *v40; // rbx
  struct tagTHREADINFO **v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  struct tagKERNELHANDLETABLEENTRY *v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // r8
  LARGE_INTEGER *v62; // rbx
  struct tagTHREADINFO **v63; // rbx
  struct tagTHREADINFO *v64; // rbx
  __int64 v65; // rcx
  unsigned int v66; // r8d
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  struct tagKERNELHANDLETABLEENTRY *v70; // rax
  __int64 v71; // rcx
  __int64 *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // ebx
  UUID *v78; // rax
  UUID v79; // xmm6
  PEPROCESS v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // r8
  LARGE_INTEGER *v88; // rbx
  struct tagTHREADINFO **v89; // rbx
  struct tagTHREADINFO *v90; // rbx
  __int64 v91; // rcx
  unsigned int v92; // r8d
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  struct tagKERNELHANDLETABLEENTRY *v96; // rax
  __int64 v97; // rcx
  __int64 *v98; // rbx
  char *v99; // rbx
  __int64 v100; // rcx
  int v101; // r8d
  __int64 v102; // r9
  int v103; // [rsp+78h] [rbp-90h] BYREF
  BOOL v104; // [rsp+7Ch] [rbp-8Ch] BYREF
  BOOL v105; // [rsp+80h] [rbp-88h] BYREF
  __int16 v106; // [rsp+84h] [rbp-84h] BYREF
  __int16 v107; // [rsp+86h] [rbp-82h] BYREF
  BOOL v108; // [rsp+88h] [rbp-80h] BYREF
  BOOL v109; // [rsp+8Ch] [rbp-7Ch] BYREF
  BOOL v110; // [rsp+90h] [rbp-78h] BYREF
  BOOL v111; // [rsp+94h] [rbp-74h] BYREF
  BOOL v112; // [rsp+98h] [rbp-70h] BYREF
  BOOL v113; // [rsp+9Ch] [rbp-6Ch] BYREF
  BOOL v114; // [rsp+A0h] [rbp-68h] BYREF
  int v115; // [rsp+A4h] [rbp-64h] BYREF
  int v116; // [rsp+A8h] [rbp-60h] BYREF
  int v117; // [rsp+ACh] [rbp-5Ch] BYREF
  int v118; // [rsp+B0h] [rbp-58h] BYREF
  int v119; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v121; // [rsp+C0h] [rbp-48h] BYREF
  void *v122[2]; // [rsp+D0h] [rbp-38h]
  char *v123; // [rsp+E0h] [rbp-28h] BYREF
  __int16 v124; // [rsp+E8h] [rbp-20h]
  __int64 v125; // [rsp+F0h] [rbp-18h] BYREF
  int v126; // [rsp+F8h] [rbp-10h]
  GUID v127; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 v128; // [rsp+110h] [rbp+8h] BYREF
  int v129; // [rsp+118h] [rbp+10h]
  GUID v130; // [rsp+11Ch] [rbp+14h] BYREF
  __int64 v131; // [rsp+130h] [rbp+28h] BYREF
  int v132; // [rsp+138h] [rbp+30h]
  GUID v133; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v134; // [rsp+150h] [rbp+48h] BYREF
  int v135; // [rsp+158h] [rbp+50h]
  GUID v136; // [rsp+15Ch] [rbp+54h] BYREF
  UUID v137; // [rsp+178h] [rbp+70h] BYREF
  UUID Uuid; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v139[10]; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+1E8h] [rbp+E0h] BYREF
  BOOL *v141; // [rsp+208h] [rbp+100h]
  __int64 v142; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+218h] [rbp+110h] BYREF
  BOOL *v144; // [rsp+238h] [rbp+130h]
  __int64 v145; // [rsp+240h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v146; // [rsp+248h] [rbp+140h] BYREF
  BOOL *v147; // [rsp+268h] [rbp+160h]
  __int64 v148; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+278h] [rbp+170h] BYREF
  BOOL *v150; // [rsp+298h] [rbp+190h]
  __int64 v151; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v152; // [rsp+2A8h] [rbp+1A0h] BYREF
  BOOL *v153; // [rsp+2C8h] [rbp+1C0h]
  __int64 v154; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+2D8h] [rbp+1D0h] BYREF
  BOOL *v156; // [rsp+2F8h] [rbp+1F0h]
  __int64 v157; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v158; // [rsp+308h] [rbp+200h] BYREF
  BOOL *v159; // [rsp+328h] [rbp+220h]
  __int64 v160; // [rsp+330h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR v161; // [rsp+338h] [rbp+230h] BYREF
  BOOL *v162; // [rsp+358h] [rbp+250h]
  __int64 v163; // [rsp+360h] [rbp+258h]
  struct _EVENT_DATA_DESCRIPTOR v164; // [rsp+368h] [rbp+260h] BYREF
  BOOL *v165; // [rsp+388h] [rbp+280h]
  __int64 v166; // [rsp+390h] [rbp+288h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+398h] [rbp+290h] BYREF
  BOOL *v168; // [rsp+3B8h] [rbp+2B0h]
  __int64 v169; // [rsp+3C0h] [rbp+2B8h]

  LOBYTE(v103) = a3;
  v104 = a1;
  v6 = a3;
  v7 = a1;
  memset(v139, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v139[1]);
  v139[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v139[3]) = 15;
  LOBYTE(v139[6]) = -1;
  LODWORD(v139[4]) = v7;
  if ( gfSwitchInProgress )
  {
    do
    {
      UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v14, v13, v15);
      else
        CurrentThreadWin32Thread = 0LL;
      v125 = CurrentThreadWin32Thread;
      v126 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v125 + 48)) )
      {
        EtwActivityIdControl(3u, &v127);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v142 = 4LL;
          v105 = v126 == 1;
          v141 = &v105;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v127,
            0LL,
            3u,
            &v140);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v17 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v17, v15);
        if ( v18 )
          v18[1] = KeQueryPerformanceCounter(0LL);
      }
      v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v19 )
      {
        v20 = *v19;
        if ( IsThreadCrossSessionAttached() )
          v20 = 0LL;
        if ( v125 )
        {
          v10 = *(unsigned int *)(v125 + 24);
          if ( *(_DWORD *)(v125 + 48) || (int)v10 > 0 )
          {
            *(_DWORD *)(v125 + 44) = 1;
            *(GUID *)(v125 + 28) = v127;
            v11 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v142 = 4LL;
                v105 = v126 == 1;
                v141 = &v105;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v127,
                  0LL,
                  3u,
                  &v140);
                v11 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v142 = 4LL;
                v105 = v126 == 1;
                v141 = &v105;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v127,
                  0LL,
                  3u,
                  &v140);
              }
            }
          }
        }
        gptiCurrent = v20;
        if ( v20 )
        {
          *((_DWORD *)v20 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              v10 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v22 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v23 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v22;
                  if ( !*(_DWORD *)(v23 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v9, v11);
                    v23 = *v24;
                  }
                  HMUnlockObject(v23);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v125);
        gptiCurrent = 0LL;
      }
    }
    while ( gfSwitchInProgress );
    v6 = v103;
    v7 = v104;
  }
  v121 = 0LL;
  LOWORD(v121) = gProtocolType;
  *(_OWORD *)v122 = 0LL;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
      Uuid = 0LL;
      if ( !a4 && ExUuidCreate(&Uuid) < 0 )
        Uuid = 0LL;
      if ( a5 )
        v29 = *a5;
      else
        v29 = 0;
      p_Uuid = &Uuid;
      if ( a4 )
        p_Uuid = a4;
      v31 = *p_Uuid;
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0;
      }
      v137 = v31;
      DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v139, (__int64)&v137, v29);
      xmmword_1C02A0620 = *(_OWORD *)&v139[1];
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        v37 = PsGetCurrentThreadWin32Thread(v35, v34, v36);
      else
        v37 = 0LL;
      v128 = v37;
      v129 = 1;
      if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v128 + 48)) )
      {
        EtwActivityIdControl(3u, &v130);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v145 = 4LL;
          v104 = v129 == 1;
          v144 = &v104;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v130,
            0LL,
            3u,
            &v143);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v38 = W32kEtwEnabledKeyword,
            v39 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v39 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v35, v38, v39);
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
        if ( v128 )
        {
          v43 = *(unsigned int *)(v128 + 24);
          if ( *(_DWORD *)(v128 + 48) || (int)v43 > 0 )
          {
            *(_DWORD *)(v128 + 44) = 1;
            *(GUID *)(v128 + 28) = v130;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v148 = 4LL;
                v108 = v129 == 1;
                v147 = &v108;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v130,
                  0LL,
                  3u,
                  &v146);
                v44 = dword_1C028EE70;
              }
              if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v151 = 4LL;
                v109 = v129 == 1;
                v150 = &v109;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v130,
                  0LL,
                  3u,
                  &v149);
              }
            }
          }
        }
        gptiCurrent = v42;
        if ( v42 )
        {
          *((_DWORD *)v42 + 377) = 1;
          v45 = PsGetCurrentProcessWin32Process(v43);
          if ( v45 )
          {
            if ( (*(_DWORD *)(v45 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v50 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v48 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v49 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v48;
                if ( !*(_DWORD *)(v49 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v46, v47);
                  v49 = *v50;
                }
                HMUnlockObject(v49);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v128);
        gptiCurrent = 0LL;
      }
    }
    if ( !gProtocolType && v6 )
    {
      DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v121);
      DWORD1(v121) = 1;
      UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
      v120 = 0x1A00000000LL;
      v57 = DrvDxgkPollDisplayChildren(&v120);
      DWORD2(v121) = v57;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        v59 = PsGetCurrentThreadWin32Thread(v56, v55, v58);
      else
        v59 = 0LL;
      v131 = v59;
      v132 = 1;
      if ( v59 && (*(int *)(v59 + 24) > 0 || *(_DWORD *)(v131 + 48)) )
      {
        EtwActivityIdControl(3u, &v133);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v154 = 4LL;
          v104 = v132 == 1;
          v153 = &v104;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v133,
            0LL,
            3u,
            &v152);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v60 = W32kEtwEnabledKeyword,
            v61 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v61 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v62 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v56, v60, v61);
        if ( v62 )
          v62[1] = KeQueryPerformanceCounter(0LL);
      }
      v63 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v63 )
      {
        v64 = *v63;
        if ( IsThreadCrossSessionAttached() )
          v64 = 0LL;
        if ( v131 )
        {
          v65 = *(unsigned int *)(v131 + 24);
          if ( *(_DWORD *)(v131 + 48) || (int)v65 > 0 )
          {
            *(_DWORD *)(v131 + 44) = 1;
            *(GUID *)(v131 + 28) = v133;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v157 = 4LL;
                v110 = v132 == 1;
                v156 = &v110;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v133,
                  0LL,
                  3u,
                  &v155);
                v66 = dword_1C028EE70;
              }
              if ( v66 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v160 = 4LL;
                v111 = v132 == 1;
                v159 = &v111;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v133,
                  0LL,
                  3u,
                  &v158);
              }
            }
          }
        }
        gptiCurrent = v64;
        if ( v64 )
        {
          *((_DWORD *)v64 + 377) = 1;
          v67 = PsGetCurrentProcessWin32Process(v65);
          if ( v67 )
          {
            if ( (*(_DWORD *)(v67 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v72 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v70 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v71 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v70;
                if ( !*(_DWORD *)(v71 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v68, v69);
                  v71 = *v72;
                }
                HMUnlockObject(v71);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v131);
        gptiCurrent = 0LL;
      }
      *(_OWORD *)&v139[1] = xmmword_1C02A0620;
      if ( v57 >= 0 )
      {
        HIDWORD(v121) = xxxUserSetDisplayConfig(
                          0,
                          0LL,
                          0x187u,
                          0x80u,
                          0LL,
                          0,
                          0LL,
                          (bool *)&v103,
                          0LL,
                          (__int64)v139,
                          0LL);
        if ( v121 >= 0 )
        {
          UserSessionSwitchLeaveCrit(v74, v73, v75, v76);
          v137 = 0LL;
          if ( a5 )
            v77 = *a5;
          else
            v77 = 0;
          v78 = &v137;
          if ( a4 )
            v78 = a4;
          v79 = *v78;
          if ( gptiForeground )
          {
            v80 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
            v81 = PsGetProcessImageFileName(v80);
          }
          else
          {
            v81 = 0;
          }
          v137 = v79;
          DrvDxgkCheckDisplayState(v7, 0, v81, (unsigned int)v139, (__int64)&v137, v77);
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            v85 = PsGetCurrentThreadWin32Thread(v83, v82, v84);
          else
            v85 = 0LL;
          v134 = v85;
          v135 = 1;
          if ( v85 && (*(int *)(v85 + 24) > 0 || *(_DWORD *)(v134 + 48)) )
          {
            EtwActivityIdControl(3u, &v136);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v163 = 4LL;
              v104 = v135 == 1;
              v162 = &v104;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v136,
                0LL,
                3u,
                &v161);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v86 = W32kEtwEnabledKeyword,
                v87 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v87 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v88 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v83, v86, v87);
            if ( v88 )
              v88[1] = KeQueryPerformanceCounter(0LL);
          }
          v89 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v89 )
          {
            v90 = *v89;
            if ( IsThreadCrossSessionAttached() )
              v90 = 0LL;
            if ( v134 )
            {
              v91 = *(unsigned int *)(v134 + 24);
              if ( *(_DWORD *)(v134 + 48) || (int)v91 > 0 )
              {
                *(_DWORD *)(v134 + 44) = 1;
                *(GUID *)(v134 + 28) = v136;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v166 = 4LL;
                    v112 = v135 == 1;
                    v165 = &v112;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v136,
                      0LL,
                      3u,
                      &v164);
                    v92 = dword_1C028EE70;
                  }
                  if ( v92 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v169 = 4LL;
                    v113 = v135 == 1;
                    v168 = &v113;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v136,
                      0LL,
                      3u,
                      &v167);
                  }
                }
              }
            }
            gptiCurrent = v90;
            if ( v90 )
            {
              *((_DWORD *)v90 + 377) = 1;
              v93 = PsGetCurrentProcessWin32Process(v91);
              if ( v93 )
              {
                if ( (*(_DWORD *)(v93 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v98 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v96 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    v97 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    gpSharedUserCritDeferredUnlockListHead = v96;
                    if ( !*(_DWORD *)(v97 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v94, v95);
                      v97 = *v98;
                    }
                    HMUnlockObject(v97);
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v134);
            gptiCurrent = 0LL;
          }
        }
      }
    }
  }
  v99 = (char *)v122[1];
  if ( !gProtocolType
    && v6
    && (unsigned int)dword_1C0288378 > 5
    && tlgKeywordOn((__int64)&dword_1C0288378, 0x400000000008LL) )
  {
    v116 = HIDWORD(v121);
    v117 = DWORD2(v121);
    v118 = (int)v122[0];
    v106 = v121;
    v119 = DWORD1(v121);
    v107 = 4;
    v115 = v101;
    v114 = v7;
    v123 = v99;
    v124 = v102;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v100,
      byte_1C025B24F,
      (const GUID *)&v139[1],
      v102,
      (__int64)&v107,
      (__int64)&v119,
      (__int64)&v106,
      (__int64)&v118,
      (__int64)&v117,
      (__int64)&v116,
      (__int64)&v115,
      (__int64 *)&v123,
      (__int64)&v114);
  }
  if ( v99 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v99);
}
