// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct tagWND *v9; // rsi
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  unsigned int v15; // r12d
  struct tagWND *v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  int v32; // ecx
  int v33; // ebx
  unsigned int v34; // r15d
  unsigned int v35; // r12d
  int v36; // r15d
  int v37; // r13d
  unsigned int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct tagWND *k; // rcx
  char v42; // bl
  unsigned __int64 i; // rax
  __int64 v44; // rax
  _QWORD **ThreadWin32Thread; // rax
  int v46; // ebx
  int v47; // esi
  int v48; // eax
  int v49; // r12d
  bool v50; // zf
  int v51; // edi
  __int16 v52; // bx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  unsigned __int64 v56; // rbx
  unsigned int v57; // r15d
  int v58; // r12d
  unsigned int v59; // edx
  int v60; // r12d
  char v61; // r14
  int v62; // ebx
  struct tagWND *v63; // r15
  int v64; // r13d
  _QWORD *v65; // rax
  _QWORD *v66; // rbx
  __int64 v67; // rax
  struct _KEVENT *v68; // rcx
  int v69; // eax
  __int64 v70; // r9
  __int64 *m; // r14
  __int64 v72; // rdx
  unsigned __int64 v73; // r15
  int v74; // r8d
  int v75; // r9d
  unsigned int v76; // edx
  _DWORD *v77; // rax
  __int64 v78; // rcx
  int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // rbx
  _DWORD *v82; // rdi
  __int64 v83; // rsi
  _DWORD *v84; // rax
  __int64 v85; // r8
  unsigned int *v86; // rax
  int v87; // eax
  _DWORD *v88; // rbx
  __int64 v89; // rax
  _DWORD *v90; // rax
  int v91; // eax
  _QWORD *v92; // rax
  int v93; // r9d
  char v94; // dl
  __int64 v95; // r10
  unsigned int v96; // edx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // r8d
  __int64 v102; // rcx
  __int64 *v103; // rdx
  __int64 **v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // rcx
  int v108; // eax
  __int64 v109; // rax
  char v110; // r15
  int IsEnabledDeviceUsage; // eax
  __int64 j; // rcx
  tagQ *v113; // rbx
  __int64 v114; // rbx
  __int64 v115; // rax
  unsigned int v116; // edx
  int v117; // r11d
  int v118; // eax
  unsigned int v119; // ebx
  struct tagWND *v120; // r14
  int v121; // edi
  tagQ *v122; // rcx
  __int64 v123; // rsi
  __int64 v124; // r14
  __int64 v125; // rcx
  __int64 v126; // rcx
  BOOL v128; // eax
  __int64 v129; // rax
  __int64 v131; // rbx
  int v132; // edx
  unsigned __int64 v133; // r9
  int v134; // eax
  unsigned int v135; // r13d
  unsigned __int16 *v136; // rsi
  __int64 v137; // r15
  int v138; // eax
  int v139; // edi
  int v140; // eax
  int v141; // eax
  __int64 v142; // rcx
  int v143; // eax
  int v144; // eax
  __int64 *v145; // rax
  int v146; // ebx
  __int64 v147; // rbx
  __int64 v148; // rcx
  _QWORD *v149; // rcx
  unsigned __int16 v150; // bx
  __int64 v151; // rcx
  int v152; // eax
  int v153; // eax
  int v154; // eax
  __int64 v155; // rax
  int v156; // eax
  unsigned int v157; // ebx
  __int64 v158; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v160; // r8
  unsigned int v161; // ebx
  __int64 v162; // rax
  struct CInpLockGuard *v163; // rax
  void *v164; // r8
  _QWORD *v165; // r14
  int v166; // eax
  int v167; // eax
  int v168; // eax
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // r9
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // rcx
  char *v175; // rax
  __int64 v176; // rcx
  int v177; // eax
  _QWORD *v178; // rax
  _QWORD *v179; // rbx
  __int64 v180; // rax
  struct _KEVENT *v181; // rcx
  int v182; // eax
  _DWORD *v183; // rdx
  __int64 v184; // rbx
  struct tagBWND *v185; // r9
  __int64 v186; // rdi
  __int64 v187; // rcx
  struct tagWND **v188; // rsi
  struct tagWND *v189; // r12
  enum SLEEP_STATUS *v190; // [rsp+20h] [rbp-2D8h]
  __int64 v191; // [rsp+28h] [rbp-2D0h]
  unsigned __int64 v192; // [rsp+30h] [rbp-2C8h]
  __int64 v193; // [rsp+38h] [rbp-2C0h]
  unsigned int v194; // [rsp+70h] [rbp-288h]
  char v195; // [rsp+74h] [rbp-284h]
  unsigned int v196; // [rsp+78h] [rbp-280h]
  unsigned int v198; // [rsp+88h] [rbp-270h]
  int v199; // [rsp+9Ch] [rbp-25Ch]
  struct tagQMSG *v200; // [rsp+A0h] [rbp-258h] BYREF
  int v201; // [rsp+A8h] [rbp-250h]
  struct tagWND *v202; // [rsp+B0h] [rbp-248h]
  unsigned int v203; // [rsp+B8h] [rbp-240h]
  int v204; // [rsp+BCh] [rbp-23Ch] BYREF
  int v205; // [rsp+C0h] [rbp-238h]
  unsigned int v206; // [rsp+C4h] [rbp-234h]
  unsigned __int64 v207; // [rsp+C8h] [rbp-230h]
  int v208; // [rsp+D0h] [rbp-228h]
  _QWORD *v209; // [rsp+D8h] [rbp-220h] BYREF
  int v210; // [rsp+E0h] [rbp-218h] BYREF
  int v211; // [rsp+E4h] [rbp-214h]
  int v212; // [rsp+E8h] [rbp-210h] BYREF
  int v213[3]; // [rsp+ECh] [rbp-20Ch] BYREF
  int v214[4]; // [rsp+F8h] [rbp-200h] BYREF
  unsigned int v215; // [rsp+108h] [rbp-1F0h]
  unsigned int v216; // [rsp+10Ch] [rbp-1ECh]
  int v217; // [rsp+110h] [rbp-1E8h]
  _BYTE v218[16]; // [rsp+118h] [rbp-1E0h] BYREF
  int v219; // [rsp+128h] [rbp-1D0h]
  __int64 v220; // [rsp+130h] [rbp-1C8h] BYREF
  char v221[8]; // [rsp+138h] [rbp-1C0h] BYREF
  char v222[8]; // [rsp+140h] [rbp-1B8h] BYREF
  char v223[8]; // [rsp+148h] [rbp-1B0h] BYREF
  __int64 v224; // [rsp+150h] [rbp-1A8h] BYREF
  __int128 v225; // [rsp+158h] [rbp-1A0h] BYREF
  __int64 v226; // [rsp+168h] [rbp-190h]
  _OWORD v227[3]; // [rsp+170h] [rbp-188h] BYREF
  _OWORD v228[9]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v229[48]; // [rsp+230h] [rbp-C8h] BYREF
  _BYTE v230[48]; // [rsp+260h] [rbp-98h] BYREF
  __int64 v231[3]; // [rsp+290h] [rbp-68h] BYREF
  int v232; // [rsp+2A8h] [rbp-50h]
  int v233; // [rsp+2ACh] [rbp-4Ch]

  v203 = a3;
  v209 = a1;
  v225 = 0LL;
  v226 = 0LL;
  v195 = 0;
  v204 = 0;
  v207 = 0LL;
  v201 = 0;
  v198 = 0;
  v194 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
LABEL_8:
    v9 = (struct tagWND *)a2;
    v202 = (struct tagWND *)a2;
    v11 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
    goto LABEL_8;
  v9 = (struct tagWND *)ValidateHwnd(a2);
  v202 = v9;
  if ( !v9 )
  {
    *a1 = 0LL;
    *((_DWORD *)a1 + 2) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  *(_QWORD *)&v225 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v225;
  *((_QWORD *)&v225 + 1) = v9;
  HMLockObject(v9);
  v11 = 1;
LABEL_9:
  v205 = v11;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  v206 = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(v203, v12, WORD1(a5));
  v196 = v15;
  v217 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1448LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  v211 = v15 & 7;
  if ( v211 != 7 )
  {
    if ( (v15 & 6) == 0 )
      goto LABEL_22;
    v13 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      goto LABEL_22;
  }
  if ( v14 )
  {
    if ( *((_QWORD *)v9 + 2) != gptiCurrent )
      goto LABEL_22;
    v16 = v9;
  }
  else
  {
    if ( a2 )
      goto LABEL_22;
    v16 = 0LL;
  }
  xxxUpdateInputHangInfo(v16, 1LL);
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  v21 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v21 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded(gptiCurrent, v18, v19, v20);
  v199 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v15 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1272LL) & 0x80000) != 0
    && (v15 & *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL)) != 0 )
  {
    v25 = *((_QWORD *)PtiCurrentShared(v23) + 58);
    if ( !*(_QWORD *)(v25 + 56) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v25) + 58) + 48LL) )
      TryAttachShellFrame(gptiCurrent, v22);
  }
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || (v27 = (_QWORD *)(v26 + 72), v28 = *(_QWORD *)(v26 + 72), v28 == gptiCurrent)
    && *(_QWORD *)(v26 + 80) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = (_QWORD *)(v26 + 72);
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v24,
        (_DWORD)gFullLog,
        4,
        18,
        20,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        v26,
        gptiCurrent,
        *(_QWORD *)(v26 + 72));
    }
    else
    {
      v29 = (_QWORD *)(v26 + 72);
    }
    v30 = 0LL;
    *v29 = 0LL;
    v195 = 1;
  }
  else
  {
    v29 = (_QWORD *)(v26 + 72);
    if ( v28 && !*(_DWORD *)(v28 + 908) && PhkFirstGlobalValid(gptiCurrent, 1) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v24,
          (_DWORD)gFullLog,
          4,
          18,
          21,
          (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
          v26,
          gptiCurrent,
          *v27);
      *v27 = 0LL;
    }
    v30 = 0LL;
  }
  v31 = gptiCurrent;
  if ( *v29 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 880LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v32 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v32 & 0x80000) != 0 )
    {
      v219 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v32 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x2000u);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v215 = v15 & 0xFFFFFFBF;
  v216 = ~(v15 & 0xFFFFFFBF);
  while ( 2 )
  {
    while ( 2 )
    {
      v33 = v194;
LABEL_67:
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v34 = v198;
            while ( 1 )
            {
              v35 = v34;
              v36 = v207;
              v37 = v201;
              v38 = v207;
              v200 = 0LL;
              _InterlockedOr(
                (volatile signed __int32 *)(*(_QWORD *)(v31 + 448) + 8LL),
                *(_DWORD *)(*(_QWORD *)(v31 + 448) + 12LL));
              if ( *(_QWORD *)(v31 + 456) == gpdeskRecalcQueueAttach )
              {
                gpdeskRecalcQueueAttach = 0LL;
                if ( *(_QWORD *)(v31 + 456) )
                {
                  v39 = *((_QWORD *)PtiCurrentShared(gpdeskRecalcQueueAttach) + 58);
                  if ( !*(_QWORD *)(v39 + 48) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v39) + 58) + 56LL) )
                    zzzReattachThreads(2LL, 0LL, 0LL);
                }
              }
              v40 = *(_QWORD *)(v31 + 448);
              *(_WORD *)(v31 + 880) |= *(_WORD *)(v40 + 4) & (unsigned __int16)v215;
              _InterlockedAnd((volatile signed __int32 *)(v40 + 4), v216);
              k = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(v31 + 448) + 8LL);
              if ( ((unsigned __int8)k & 0x40) != 0 )
              {
                if ( ((unsigned __int8)v196 & (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v31 + 448) + 8LL) & 0x40) == 0 )
                {
                  v194 = v33 | 0x80;
                  v49 = v33 | 0x80;
                  goto LABEL_255;
                }
                do
                {
                  xxxReceiveMessage(v31);
                  k = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(v31 + 448) + 8LL);
                }
                while ( ((unsigned __int8)k & 0x40) != 0 );
              }
              LOBYTE(k) = v217 != 0;
              v42 = v196;
              if ( v217 != 0 && (v196 & 0x40) != 0 && *(_DWORD *)(v31 + 1164) )
              {
                do
                {
                  *(_DWORD *)(v31 + 1164) = 0;
                  for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v31 + 1128));
                        i;
                        i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v31 + 1128)) )
                  {
                    xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v22, v24);
                  }
                }
                while ( *(_DWORD *)(v31 + 1164) );
                v42 = v196;
              }
              if ( *(_QWORD *)(v31 + 1504) && (v42 & 8) != 0 )
              {
                v44 = SGDGetUserSessionState(k);
                if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v44 + 8)) )
                {
                  v208 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
                }
                ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( ThreadWin32Thread )
                  v30 = *ThreadWin32Thread;
                memset(v227, 0, 32);
                v46 = 0;
                v210 = 0;
                v220 = 0LL;
                v47 = 0;
                ZwSetIoCompletionEx(v30[183], v30[187], 0LL, 2LL, 0, 0LL);
                do
                {
                  while ( 1 )
                  {
                    LOBYTE(v191) = 0;
                    v48 = ZwRemoveIoCompletionEx(v30[183], v227, 1LL, &v210, &v220, v191);
                    if ( v48 )
                    {
                      if ( v48 == 258 )
                        v46 = 1;
                    }
                    else if ( DWORD2(v227[0]) == 1 )
                    {
                      v46 = 3;
                    }
                    else if ( DWORD2(v227[0]) == 2 )
                    {
                      v46 = 2;
                    }
                    else if ( !DWORD2(v227[0]) && v30[188] )
                    {
                      v46 = DWORD2(v227[0]) + 4;
                      xxxHandleCoreMessagingQueueCompletion((__int64)v30, (ULONG64 *)v227, DWORD2(v227[0]) + 1);
                    }
                    if ( v46 != 3 )
                      break;
                    v47 = 1;
                    v46 = 0;
                  }
                  v50 = v46 == 4;
                  v46 = 0;
                }
                while ( v50 );
                if ( v47 )
                  ZwAssociateWaitCompletionPacket(v30[186], v30[183], v30[185], 0LL, 1LL, 0, 0LL, 0LL);
                v31 = gptiCurrent;
              }
              v51 = *(_DWORD *)(*(_QWORD *)(v31 + 448) + 8LL);
              v52 = v196 & v51;
              if ( (v196 & v51) == 0 )
              {
                v49 = v194 | 0x100;
                v194 |= 0x100u;
                v30 = 0LL;
                goto LABEL_255;
              }
              v53 = *(_QWORD *)(v31 + 432);
              if ( *(_QWORD *)(v53 + 72) == v31 && (*(_DWORD *)(v53 + 396) & 0x400) != 0 )
              {
                EtwTraceInputQueueNoRemoveLocker();
                if ( (v52 & 0x3C07) != 0 )
                {
                  v54 = xxxScanSysQueue(v31, a1, v202, v203, v206, a5, v52 & 0x3C07, &v200);
                  if ( v54 == 1 )
                    goto LABEL_147;
                  if ( !v54 )
                    UnblockDeferredInput((struct tagTHREADINFO *)v31);
                }
                else if ( (v51 & 0x2000) != 0 )
                {
                  v49 = v194 | 0x200;
                  v194 |= 0x200u;
                  v30 = 0LL;
                  goto LABEL_255;
                }
              }
              if ( (v52 & 8) == 0 )
                goto LABEL_126;
              if ( (unsigned int)xxxReadPostMessage(
                                   (struct tagTHREADINFO *)v31,
                                   (struct tagMSG *)a1,
                                   v202,
                                   v203,
                                   v206,
                                   v199) )
              {
                if ( (a5 & 1) != 0 )
                {
                  v129 = *((unsigned int *)a1 + 2);
                  if ( (unsigned int)v129 >= 0x400 ? 0 : (unsigned __int16)MessageTable[v129] >> 15 )
                    xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
                }
                v60 = v194 | 1;
                goto LABEL_324;
              }
              k = v202;
              if ( v202
                || (v22 = v203, v203 <= v206) && v206 >= 0x200 && v203 <= 0x20E && (v203 || v206 != -1) && v203 > 0x60 )
              {
                if ( (*(_DWORD *)(v31 + 1272) & 0x20000000) != 0 )
                {
                  Feature_DeliverDespiteMessageFilter__private_ReportDeviceUsage();
                  memset(v228, 0, 48);
                  if ( (unsigned int)xxxReadPostMessage(
                                       (struct tagTHREADINFO *)v31,
                                       (struct tagMSG *)v228,
                                       0LL,
                                       0x60u,
                                       0x60u,
                                       1) )
                    xxxSendPostedMessage((const struct tagMSG *)v228, (struct tagMSG *)v228);
LABEL_126:
                  k = v202;
                }
              }
              if ( k == (struct tagWND *)1 )
              {
                v49 = v194 | 0x400;
                v194 |= 0x400u;
                v30 = 0LL;
                goto LABEL_255;
              }
              if ( (v52 & 0x3C07) == 0 )
              {
                if ( (v51 & 0x2000) == 0 )
                {
LABEL_150:
                  v30 = 0LL;
                  goto LABEL_151;
                }
                v49 = v194 | 0x800;
                v194 |= 0x800u;
                v30 = 0LL;
LABEL_255:
                v61 = v196;
LABEL_256:
                v64 = a5 & 2;
LABEL_257:
                v109 = *(_QWORD *)(v31 + 432);
                if ( *(_QWORD *)(v109 + 72) == v31 )
                {
                  *(_QWORD *)(v109 + 80) = 0LL;
                  LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                  LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v22,
                      v24,
                      (_DWORD)gFullLog,
                      4,
                      18,
                      22,
                      (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
                      *(_QWORD *)(v31 + 432),
                      v31,
                      *(_QWORD *)(*(_QWORD *)(v31 + 432) + 72LL));
                  *(_QWORD *)(*(_QWORD *)(v31 + 432) + 72LL) = 0LL;
                  **(_DWORD **)(v31 + 448) &= ~1u;
                  v110 = 1;
                  v195 = 1;
                }
                else
                {
                  v110 = v195;
                }
                IsEnabledDeviceUsage = Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage(k, v22, v24);
                j = IsEnabledDeviceUsage != 0;
                if ( IsEnabledDeviceUsage )
                {
                  v195 = 1;
                  goto LABEL_271;
                }
                if ( v110 )
                {
LABEL_271:
                  v113 = *(tagQ **)(v31 + 432);
                  if ( tagQ::AreMultipleThreadsAttached(v113) )
                  {
                    v22 = 0LL;
                    v114 = *((_QWORD *)v113 + 3);
                    if ( !v114 )
                      goto LABEL_281;
                    if ( (*(_DWORD *)(v114 + 100) & 0x10) != 0 )
                      goto LABEL_281;
                    v115 = *(_QWORD *)(v114 + 104);
                    if ( v115 == v31 )
                      goto LABEL_281;
                    v30 = *(_QWORD **)(v114 + 104);
                    if ( !v115 )
                      goto LABEL_281;
                    v116 = CalcWakeMask(*(unsigned int *)(v114 + 24), *(unsigned int *)(v114 + 24), 0LL);
                    v118 = -8265;
                    if ( *(_DWORD *)(v114 + 96) )
                      v118 = -73;
                    v22 = v118 & v116;
                    if ( v117 != 786 )
                      LODWORD(v22) = v22 & 0xFFFFFF7F;
                    j = (unsigned int)v22 & *(_DWORD *)(v30[56] + 4LL);
                    if ( (_DWORD)j != (_DWORD)v22 )
                    {
LABEL_281:
                      if ( v30 )
                        SetWakeBit((__int64)v30, v22);
                    }
                  }
                }
                if ( !a6 )
                {
                  if ( v64 )
                    goto LABEL_479;
                  v178 = (_QWORD *)PsGetCurrentProcessWin32Process(j);
                  v179 = v178;
                  if ( v178 && !*v178 )
                    v179 = 0LL;
                  v180 = *(_QWORD *)(v31 + 424);
                  if ( !*(_QWORD *)(v180 + 328) )
                    *(_QWORD *)(v180 + 328) = v31;
                  if ( *(_QWORD *)(*(_QWORD *)(v31 + 424) + 328LL) == v31 )
                  {
                    EtwTraceWakeInputIdle(0LL, v31);
                    v181 = (struct _KEVENT *)v179[2];
                    if ( !v181 )
                      goto LABEL_474;
                    if ( v181 != (struct _KEVENT *)-1LL )
                    {
                      KeSetEvent(v181, 1, 0);
                      ObfDereferenceObject((PVOID)v179[2]);
LABEL_474:
                      v179[2] = -1LL;
                    }
                  }
                  v182 = *((_DWORD *)v179 + 3);
                  if ( (v182 & 4) != 0 )
                  {
                    *((_DWORD *)v179 + 3) = v182 & 0xFFFFFFFB;
                    zzzCalcStartCursorHide(0LL, 0LL);
                  }
                  for ( j = *(unsigned int *)(*(_QWORD *)(v31 + 448) + 8LL);
                        (j & 0x40) != 0;
                        j = *(unsigned int *)(*(_QWORD *)(v31 + 448) + 8LL) )
                  {
                    xxxReceiveMessage(v31);
                  }
                  goto LABEL_479;
                }
                v119 = 0;
                if ( v205 )
                {
                  if ( v211 == 7 || (v61 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
                  {
                    v120 = v202;
                    if ( *((_QWORD *)v202 + 2) == gptiCurrent )
                    {
                      v119 = 1;
                      xxxUpdateInputHangInfo(v202, 0LL);
                    }
                  }
                  else
                  {
                    v120 = v202;
                  }
                  v121 = xxxRealSleepThread(v196, 0LL, 1, 0, 0LL);
                  if ( v119 )
                    xxxUpdateInputHangInfo(v120, 1LL);
LABEL_314:
                  if ( v121 )
                  {
                    v30 = 0LL;
                    v33 = 0;
                    v194 = 0;
                    goto LABEL_67;
                  }
                  v194 = v49 | 0x10000;
LABEL_479:
                  v165 = a1;
                  v137 = gptiCurrent;
LABEL_480:
                  v135 = 0;
                  v136 = (unsigned __int16 *)(v165 + 2);
                  goto LABEL_481;
                }
                v204 = 0;
                v122 = *(tagQ **)(v31 + 432);
                v123 = *((_QWORD *)v122 + 10);
                v124 = *((_QWORD *)v122 + 9);
                if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(v122) )
                {
                  v126 = *((_QWORD *)PtiCurrentShared(v125) + 58);
                  if ( !*(_QWORD *)(v126 + 48)
                    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v126) + 58) + 56LL)
                    && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                  {
                    v119 = gdwMDAQTimeoutDefenseInDepth;
                    v201 = 0;
                    v198 = 0;
                    LODWORD(v207) = 0;
                  }
                }
                v121 = xxxSleepThread2(v196, v119, 1, 0, (enum SLEEP_STATUS *)&v204);
                v128 = 0;
                if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0
                  && tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                {
                  j = *((_QWORD *)PtiCurrentShared(j) + 58);
                  if ( !*(_QWORD *)(j + 48) )
                  {
                    j = *((_QWORD *)PtiCurrentShared(j) + 58);
                    if ( !*(_QWORD *)(j + 56) && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                      v128 = 1;
                  }
                }
                if ( !v128
                  || (j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), j != *(_QWORD *)(gptiCurrent + 1432LL))
                  && j
                  || !v204 )
                {
                  v31 = gptiCurrent;
                  goto LABEL_314;
                }
                v30 = 0LL;
                v172 = v123;
                v31 = gptiCurrent;
                v173 = SlowAppThreadInShellFrame(gptiCurrent, v124, v172, v204 == 2);
                v33 = v194;
                if ( v173 )
                  TryDetachShellFrame(gptiCurrent, v173, v204 == 2, 0LL);
                goto LABEL_67;
              }
              v55 = xxxScanSysQueue(v31, a1, v202, v203, v206, a5, v52 & 0x3C07, &v200);
              if ( v55 != 2 )
              {
                v30 = 0LL;
                v201 = 0;
                v198 = 0;
                v207 = 0LL;
                if ( v55 != 1 )
                  goto LABEL_151;
LABEL_147:
                v60 = v194 | 2;
                goto LABEL_324;
              }
              if ( !(unsigned int)IsShellFrameHangResilient(v31) || (v52 & 1) == 0 )
                goto LABEL_150;
              v30 = 0LL;
              if ( !a6 )
                goto LABEL_151;
              v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v50 = v36 == 0;
              v57 = 0;
              if ( !v50 )
                v57 = v35;
              v198 = v57;
              v58 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              if ( v38 )
                v58 = v37;
              v201 = v58;
              if ( v38 )
                v56 = v38;
              v207 = v56;
              v59 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v56;
              if ( v59 >= 0xFA )
                break;
              xxxSleepThread2(v196, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v204);
              v34 = v57 + 1;
              v198 = v34;
              v207 = v56;
              v201 = v58;
              v33 = v194;
            }
            if ( v58 == (_DWORD)v56 )
            {
              TraceLoggingSysQueueLockedRetryFailed(v57, v59);
              v201 = 0;
              v207 = v56;
              v198 = v57;
            }
LABEL_151:
            k = *(struct tagWND **)(v31 + 448);
            v22 = *((_DWORD *)k + 2) & 0x40;
            v61 = v196;
            if ( ((unsigned __int8)v196 & *((_BYTE *)k + 8) & 0x40) == 0 )
            {
              if ( !(_DWORD)v22 )
                goto LABEL_154;
              v49 = v194 | 0x1000;
              v194 |= 0x1000u;
              goto LABEL_256;
            }
            if ( (_DWORD)v22 )
            {
              do
              {
                xxxReceiveMessage(v31);
                k = *(struct tagWND **)(v31 + 448);
              }
              while ( (*((_DWORD *)k + 2) & 0x40) != 0 );
            }
LABEL_154:
            v62 = *((_DWORD *)k + 2);
            if ( (v196 & v62) == 0 )
            {
              v49 = v194 | 0x2000;
              v194 |= 0x2000u;
              goto LABEL_256;
            }
            v63 = v202;
            if ( ((unsigned __int8)v196 & (unsigned __int8)v62 & 0x20) == 0 || !(unsigned int)xxxDoPaint(v202, a1) )
            {
              v64 = a5 & 2;
              if ( (a5 & 2) != 0 )
                goto LABEL_182;
              v65 = (_QWORD *)PsGetCurrentProcessWin32Process(k);
              v66 = v65;
              if ( v65 && !*v65 )
                v66 = 0LL;
              v67 = *(_QWORD *)(v31 + 424);
              if ( !*(_QWORD *)(v67 + 328) )
                *(_QWORD *)(v67 + 328) = v31;
              if ( *(_QWORD *)(*(_QWORD *)(v31 + 424) + 328LL) == v31 )
              {
                EtwTraceWakeInputIdle(0LL, v31);
                v68 = (struct _KEVENT *)v66[2];
                if ( !v68 )
                  goto LABEL_170;
                if ( v68 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v68, 1, 0);
                  ObfDereferenceObject((PVOID)v66[2]);
LABEL_170:
                  v66[2] = -1LL;
                }
              }
              v69 = *((_DWORD *)v66 + 3);
              if ( (v69 & 4) != 0 )
              {
                *((_DWORD *)v66 + 3) = v69 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0LL);
              }
              for ( k = *(struct tagWND **)(v31 + 448); (*((_DWORD *)k + 2) & 0x40) != 0; k = *(struct tagWND **)(v31 + 448) )
                xxxReceiveMessage(v31);
              v22 = *((_DWORD *)k + 2) & 0x40;
              if ( ((unsigned __int8)v196 & *((_BYTE *)k + 8) & 0x40) != 0 )
              {
                if ( (_DWORD)v22 )
                {
                  do
                  {
                    xxxReceiveMessage(v31);
                    k = *(struct tagWND **)(v31 + 448);
                  }
                  while ( (*((_DWORD *)k + 2) & 0x40) != 0 );
                }
LABEL_178:
                v62 = *((_DWORD *)k + 2);
                if ( (v62 & v196) == 0 )
                {
                  v49 = v194 | 0x8000;
                  v194 |= 0x8000u;
                  goto LABEL_257;
                }
LABEL_182:
                if ( ((unsigned __int8)v62 & (unsigned __int8)v196 & 0x10) != 0 )
                {
                  v70 = gptiCurrent + 1256LL;
                  for ( m = *(__int64 **)(gptiCurrent + 1256LL); ; m = (__int64 *)*m )
                  {
                    if ( m == (__int64 *)v70 )
                    {
                      v108 = 0;
                      goto LABEL_251;
                    }
                    v72 = m[4];
                    if ( !v63 || v63 == (struct tagWND *)v72 || (unsigned int)IsChild((__int64)v63, v72) )
                      break;
                  }
                  if ( (gdwExtraInstrumentations & 2) != 0 )
                  {
                    v73 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    v74 = v73 - *((_DWORD *)m + 18);
                    v75 = dword_1C0361368;
                    if ( !dword_1C0361368 )
                      v75 = v73;
                    dword_1C0361368 = v75;
                    v76 = 0;
                    v77 = &unk_1C0315128;
                    do
                    {
                      if ( *((_DWORD *)m - 4) <= *v77 )
                        break;
                      ++v76;
                      ++v77;
                    }
                    while ( v76 < 7 );
                    v78 = v76 + 8LL * gTimerCoalCurrentState;
                    ++gaTimerDeliveryDistribution[2 * v78];
                    v79 = v74 - *((_DWORD *)m - 4) + gaTimerDeliveryDistribution[2 * v78 + 1];
                    gaTimerDeliveryDistribution[2 * v78 + 1] = v79;
                    if ( gaTimerDeliveryDistribution[2 * v78] >= 0x7FFFFFFFu || (v80 = 0LL, v79 >= 0x3FFFFFFF) )
                      v80 = 1LL;
                    if ( (_DWORD)v80 || (unsigned int)(v73 - v75) >= 0xEA60 )
                    {
                      v81 = 0LL;
                      v82 = &unk_1C0360C08;
                      v83 = 4LL;
                      do
                      {
                        v84 = (_DWORD *)SGDGetUserSessionState(v80);
                        v85 = 0LL;
                        v80 = gServiceSessionId;
                        if ( *v84 != gServiceSessionId )
                          v85 = 4LL;
                        *v82 = *((_DWORD *)&gTimerCoalescingSpec + v81 + v85);
                        ++v81;
                        v82 += 16;
                        --v83;
                      }
                      while ( v83 );
                      v86 = (unsigned int *)SGDGetUserSessionState(gServiceSessionId);
                      EtwTraceTimerDelayStatistics(*v86, 8LL, 4LL, &unk_1C0315128, 32, 8, gaTimerDeliveryDistribution);
                      dword_1C0361368 = v73;
                      LODWORD(v80) = 1;
                      v31 = gptiCurrent;
                    }
                    if ( (_DWORD)v80 )
                      memset_0(gaTimerDeliveryDistribution, 0, 0x100uLL);
                  }
                  v87 = *((_DWORD *)m + 19);
                  if ( *((_DWORD *)m + 18) == v87 )
                    *((_DWORD *)m + 18) = v87;
                  if ( *(_DWORD *)(gptiCurrent + 824LL) < gUserPostMessageLimit )
                  {
                    v89 = SGDGetUserSessionState(gUserPostMessageLimit);
                    v90 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v89 + 16872));
                    v88 = v90;
                    if ( v90 )
                    {
                      memset_0(v90, 0, 0xA0uLL);
                      v91 = 8;
                      if ( *(_DWORD *)(gptiCurrent + 828LL) != 2 )
                        v91 = 4;
                      v88[25] |= v91;
                      v92 = *(_QWORD **)(gptiCurrent + 816LL);
                      if ( v92 )
                      {
                        *v92 = v88;
                        *((_QWORD *)v88 + 1) = *(_QWORD *)(gptiCurrent + 816LL);
                      }
                      else
                      {
                        *(_QWORD *)(gptiCurrent + 808LL) = v88;
                        *(_QWORD *)(gptiCurrent + 840LL) = 0LL;
                      }
                      *(_QWORD *)(gptiCurrent + 816LL) = v88;
                      v93 = *(_DWORD *)(gptiCurrent + 824LL) + 1;
                      *(_DWORD *)(gptiCurrent + 824LL) = v93;
                      v94 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      if ( v94 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_AND_TRACE_SF_qqdd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v94,
                          v24,
                          v93,
                          (__int64)v190,
                          v191,
                          v192,
                          v193);
                      v30 = 0LL;
                    }
                    else
                    {
                      UserSetLastError(8);
                      v30 = 0LL;
                      v88 = 0LL;
                    }
                  }
                  else
                  {
                    UserSetLastError(1816);
                    v30 = 0LL;
                    v88 = 0LL;
                  }
                  if ( v88 )
                  {
                    v95 = m[4];
                    if ( v95 )
                    {
                      v96 = *(_DWORD *)(*(_QWORD *)(v95 + 40) + 288LL);
                    }
                    else
                    {
                      v97 = *(_QWORD *)(gptiCurrent + 432LL);
                      v98 = *(_QWORD *)(v97 + 128);
                      if ( v98 )
                        v99 = *(_QWORD *)(v98 + 16);
                      else
                        v99 = *(_QWORD *)(v97 + 104);
                      v96 = *(_DWORD *)(*(_QWORD *)(v99 + 424) + 280LL);
                    }
                    if ( (*(_DWORD *)(m - 1) & 2) == 0 || (v100 = 280LL, !*(m - 3)) )
                      v100 = *(m - 3);
                    v101 = 280;
                    if ( (*(_DWORD *)(m - 1) & 2) == 0 )
                      v101 = 275;
                    StoreQMessage(
                      (struct tagQMSG *)v88,
                      (struct _EX_PUSH_LOCK **)v95,
                      v101,
                      m[5],
                      v100,
                      0,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL,
                      v96,
                      0LL,
                      0LL);
                    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x108u);
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x108u);
                      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL) & 0x108) != 0 )
                        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
                    }
                  }
                  *((_DWORD *)m - 2) &= ~1u;
                  v102 = *(m - 4);
                  v103 = (__int64 *)*m;
                  v104 = (__int64 **)m[1];
                  if ( *(__int64 **)(*m + 8) != m || *v104 != m )
                    goto LABEL_462;
                  *v104 = v103;
                  v103[1] = (__int64)v104;
                  v50 = (*(_DWORD *)(v102 + 604))-- == 1;
                  if ( v50 )
                    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v102 + 448) + 8LL), 0xFFFFFFEF);
                  v105 = m + 2;
                  v106 = m[2];
                  v107 = (_QWORD *)m[3];
                  if ( *(__int64 **)(v106 + 8) != m + 2
                    || (_QWORD *)*v107 != v105
                    || (*v107 = v106,
                        *(_QWORD *)(v106 + 8) = v107,
                        k = (struct tagWND *)gtmrListHead[0],
                        v22 = gtmrListHead[1],
                        *(_QWORD *)v22 != gtmrListHead[0]) )
                  {
LABEL_462:
                    __fastfail(3u);
                  }
                  *v105 = gtmrListHead[0];
                  m[3] = v22;
                  *(_QWORD *)v22 = v105;
                  gtmrListHead[1] = v105;
                  v108 = 1;
LABEL_251:
                  if ( v108 )
                  {
                    v33 = v194 | 8;
                    v194 |= 8u;
                    continue;
                  }
                  v49 = v194;
                  goto LABEL_255;
                }
                v49 = v194;
              }
              else
              {
                if ( !(_DWORD)v22 )
                  goto LABEL_178;
                v49 = v194 | 0x4000;
                v194 |= 0x4000u;
              }
              goto LABEL_257;
            }
            break;
          }
          v60 = v194 | 4;
LABEL_324:
          v194 = v60;
          v131 = (__int64)a1;
          v132 = *((_DWORD *)a1 + 2);
          if ( v132 == 595 && a1[3] == -1LL )
            v133 = -1LL;
          else
            v133 = 0LL;
          if ( (unsigned int)(v132 - 571) <= 1 )
          {
            v136 = (unsigned __int16 *)(a1 + 2);
            v137 = gptiCurrent;
            v135 = 1;
LABEL_338:
            v138 = 1;
            goto LABEL_339;
          }
          if ( (unsigned int)(v132 - 577) <= 3 || (unsigned int)(v132 - 581) <= 5 || (unsigned int)(v132 - 593) <= 2 )
          {
            v135 = 1;
            v134 = 1;
          }
          else
          {
            v134 = 0;
            v135 = 1;
          }
          v136 = (unsigned __int16 *)(a1 + 2);
          v137 = gptiCurrent;
          if ( v134 && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v133, *v136) )
            goto LABEL_338;
          v138 = 0;
LABEL_339:
          if ( !v138
            || (*(_DWORD *)(v137 + 1272) & 0x2000) != 0
            || (*(_DWORD *)(v137 + 1276) & 0x40) != 0
            || (v139 = 1,
                (unsigned int)IsPTPAllowedOnThread((struct tagTHREADINFO *)v137, *((_DWORD *)a1 + 2), *(_QWORD *)v136)) )
          {
            v139 = 0;
          }
          v140 = *((_DWORD *)a1 + 2);
          if ( v140 != 842 && v140 != 537 && v140 != 568
            || (v141 = Feature_MTestAbSh1__private_IsEnabledDeviceUsage(), v142 = 1LL, !v141) )
          {
            v142 = 0LL;
          }
          if ( (a5 & 1) != 0
            && ((v143 = *((_DWORD *)a1 + 2), v143 == 258)
             || v143 == 582
             || v143 == 578
             || v143 == 583
             || v143 == 579
             || (_DWORD)v142
             || (v142 = 49152LL, (unsigned __int16)v143 >= 0xC000u)) )
          {
            v24 = (unsigned int)a5;
            v214[0] = 0;
            v142 = gpsi;
            if ( gpsi && *(_QWORD *)(gpsi + 856LL) )
            {
              if ( gptiCurrent == gptiRit
                || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0
                || !*(_QWORD *)(gptiCurrent + 456LL)
                || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x400) != 0
                && (v233 = 0,
                    v231[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                    v232 = 0,
                    v231[2] = (unsigned int)a5,
                    v231[1] = (__int64)a1,
                    (unsigned int)xxxCallHook(0, 3uLL, (__int64)v231, 9)) )
              {
                v131 = (__int64)a1;
              }
              else
              {
                v131 = (__int64)a1;
                if ( (unsigned int)fnHkINLPMSG(196608, a5, (_DWORD)a1, 0, *(_QWORD *)(gpsi + 856LL), 0, (__int64)v214) )
                {
                  v144 = *((_DWORD *)a1 + 2);
                  if ( v144 == 258 )
                  {
                    *((_DWORD *)a1 + 2) = 0;
                    *(_QWORD *)v136 = 0LL;
                    a1[3] = 0LL;
                  }
                  else if ( v144 == 842 )
                  {
                    *(_QWORD *)v136 = 0LL;
                    a1[3] = 0LL;
                  }
                }
              }
              goto LABEL_371;
            }
            v131 = (__int64)a1;
          }
          else
          {
LABEL_371:
            v24 = (unsigned int)a5;
          }
          if ( ((a5 & 1) == 0 || !v200 || !*(_QWORD *)(v137 + 1304) && !*(_QWORD *)(v137 + 1320)) && !v139 )
          {
            v145 = *(__int64 **)(v137 + 464);
            v142 = *v145;
            if ( ((*(_BYTE *)(v137 + 680) | *(_BYTE *)(*v145 + 16)) & 0x10) != 0 )
              xxxCallHook(0, (unsigned int)v24, v131, 3);
          }
          v146 = a5 & 1;
          if ( (a5 & 1) != 0 )
          {
            if ( *(_DWORD *)(v137 + 1160) )
            {
              v147 = SGDGetUserSessionState(v142);
              if ( *(_WORD *)(SGDGetUserSessionState(v148) + 16280)
                && *(_QWORD *)(v147 + 16288) == v137
                && *(_DWORD *)(v147 + 16284) == *(_DWORD *)(v137 + 1160) )
              {
                ForceCompletePendingPromotion();
                xxxProcessMousePromotionQueue();
              }
              else
              {
                *(_DWORD *)(v137 + 1160) = 0;
              }
            }
            v149 = a1;
            if ( *((_DWORD *)a1 + 2) == 583 && _bittest16((const signed __int16 *)a1 + 9, 0xDu) )
            {
              PointerPromotion::MarkPendingPromotion((PointerPromotion *)v137, (struct tagTHREADINFO *)*v136, v24);
              v149 = a1;
            }
            v150 = 0;
            v151 = *((unsigned int *)v149 + 2);
            if ( (unsigned int)(v151 - 577) <= 3 )
              goto LABEL_394;
            if ( (unsigned int)(v151 - 581) > 0x12 || (v152 = 1, (_DWORD)v151 == 589) )
              v152 = 0;
            v50 = v152 == 0;
            v153 = 0;
            if ( !v50 )
LABEL_394:
              v153 = 1;
            if ( !v153 || (v154 = 1, (_DWORD)v151 == 595) )
              v154 = 0;
            if ( v154 )
              v150 = *v136;
            v155 = SGDGetUserSessionState(v151);
            CTouchProcessor::UpdateThreadPointerList(
              *(CTouchProcessor **)(v155 + 3424),
              (struct tagTHREADINPUTPOINTERLIST *)(v137 + 1128),
              v150);
            v146 = a5 & 1;
          }
          if ( !v200 )
            goto LABEL_413;
          v156 = *((_DWORD *)v200 + 25);
          if ( (v156 & 0x100) == 0 )
            goto LABEL_413;
          if ( !v146 )
            goto LABEL_412;
          if ( *(_QWORD *)(v137 + 1320) )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)v218,
              "ShellHandwriting Delegation",
              0LL);
            InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v200);
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)v221,
              "ShellHandwriting DelegationCallout",
              (const struct InputTraceLogging::ThreadLockedPerfRegion *)v218);
            v31 = gptiCurrent;
            v157 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1320LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v221);
            if ( (*((_DWORD *)v200 + 25) & 0x20) != 0 )
            {
              v158 = SGDGetUserSessionState(v200);
              TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v158 + 3424));
              CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v229, TouchProcessorLock, v160);
              *((_DWORD *)v200 + 25) &= ~0x100u;
              _HandleShellHandwritingDelegatedInputWorker(gptiCurrent, v157, v200);
              CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v229);
            }
            v33 = 0x20000;
            v194 = 0x20000;
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v218);
            v30 = 0LL;
            continue;
          }
          break;
        }
        if ( *(_QWORD *)(v137 + 1304) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v209,
            "Delegation",
            0LL);
          EtwTraceBeginDelegateInputCallback(v200, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v200);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)v222,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v209);
          v31 = gptiCurrent;
          v161 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1304LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v222);
          EtwTraceEndDelegateInputCallback(v200, a1);
          if ( (*((_DWORD *)v200 + 25) & 0x20) != 0 )
          {
            v162 = SGDGetUserSessionState(v200);
            v163 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v162 + 3424));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v230, v163, v164);
            *((_DWORD *)v200 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(gptiCurrent, v161, v200);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v230);
          }
          v33 = 0x20000;
          v194 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v209);
          v30 = 0LL;
          continue;
        }
        break;
      }
LABEL_412:
      *((_DWORD *)v200 + 25) = v156 & 0xFFFFFEFF;
LABEL_413:
      if ( v139 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v223,
          "PTPDownleveling",
          0LL);
        xxxClientCallDefaultInputHandler(a1);
        memset(&v228[3], 0, 48);
        *(_OWORD *)a1 = 0LL;
        *((_OWORD *)a1 + 1) = 0LL;
        *((_OWORD *)a1 + 2) = 0LL;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v223);
        v31 = gptiCurrent;
        v30 = 0LL;
        continue;
      }
      break;
    }
    v22 = *(_QWORD *)v136;
    v165 = a1;
    j = *((unsigned int *)a1 + 2);
    if ( (unsigned int)(j - 577) <= 3
      || ((unsigned int)(j - 581) > 0x12 || (_DWORD)j == 589 ? (_QWORD *)(v30 = 0LL, v166 = 0) : (v166 = 1, v30 = 0LL),
          v166) )
    {
      v167 = 1;
      v30 = 0LL;
    }
    else
    {
      v167 = 0;
    }
    if ( v167 )
    {
      v168 = 0;
      goto LABEL_430;
    }
    if ( (_DWORD)j != 528 || (v169 = 1, (_WORD)v22 != 582) )
      v169 = 0;
    v50 = v169 == 0;
    v168 = 0;
    if ( !v50 )
    {
      v22 >>= 16;
LABEL_430:
      LOBYTE(v168) = (_WORD)v22 == 1;
    }
    if ( v168 )
    {
      LOBYTE(v22) = 1;
      v170 = HMValidateHandleNoSecure(*a1, v22);
      if ( v170 )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(v170) )
        {
          if ( (unsigned int)dword_1C0357098 > 5 )
          {
            v212 = v146;
            v213[0] = *((_DWORD *)a1 + 2);
            v224 = v171;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              j,
              (unsigned int)&unk_1C031DCB7,
              v24,
              v171,
              (__int64)&v224,
              (__int64)v213,
              (__int64)&v212);
          }
          if ( v146 )
            xxxClientCallDefWindowProc(a1);
          memset(&v228[6], 0, 48);
          *(_OWORD *)a1 = 0LL;
          *((_OWORD *)a1 + 1) = 0LL;
          *((_OWORD *)a1 + 2) = 0LL;
          v31 = gptiCurrent;
          continue;
        }
      }
    }
    break;
  }
  if ( a6 && *((_DWORD *)a1 + 2) == 18 )
  {
    v194 = v60 | 0x40000;
    goto LABEL_480;
  }
  if ( v146 )
  {
    v174 = *(_QWORD *)(v137 + 1104);
    if ( v174 )
    {
      LOBYTE(v22) = 18;
      v175 = (char *)HMValidateHandleNoRip(v174, v22);
      if ( v175 )
        FreeHidData(v175);
      *(_QWORD *)(v137 + 1104) = 0LL;
    }
    v176 = *(_QWORD *)(v137 + 1112);
    if ( v176 )
    {
      FreeTouchInputInfo(v176, 1LL);
      *(_QWORD *)(v137 + 1112) = 0LL;
    }
    j = *(_QWORD *)(v137 + 1120);
    if ( j )
    {
      FreeGestureInfo(j, 1LL);
      *(_QWORD *)(v137 + 1120) = 0LL;
    }
    v177 = *((_DWORD *)a1 + 2);
    if ( v177 == 255 )
    {
      if ( *(_QWORD *)v136 <= 1uLL )
        *(_QWORD *)(v137 + 1104) = a1[3];
    }
    else if ( v177 == 576 && HMValidateHandle(a1[3], 0x14u) )
    {
      *(_QWORD *)(v137 + 1112) = a1[3];
    }
    else if ( ((*((_DWORD *)a1 + 2) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(a1[3], 0x15u) )
    {
      *(_QWORD *)(v137 + 1120) = a1[3];
    }
  }
LABEL_481:
  if ( v205 )
    ThreadUnlock1(j, v22, v24);
  if ( !(unsigned int)HandleProcessSpinning() )
  {
    v135 = 0;
    goto LABEL_492;
  }
  if ( v135 )
  {
    if ( *((_DWORD *)v165 + 2) == 512 && (*(_DWORD *)(v137 + 1272) & 0x40000) != 0 )
    {
      v183 = *(_DWORD **)(v137 + 672);
      if ( v183 )
      {
        if ( (v183[50] & 0x80000) != 0 && v183[69] )
        {
          v183[70] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v183[69];
          ++v183[71];
          v183[69] = 0;
        }
      }
    }
LABEL_492:
    if ( v135 )
    {
      *(_QWORD *)(v137 + 1224) = *v165;
      *(_DWORD *)(v137 + 1232) = *((_DWORD *)v165 + 2);
      *(_QWORD *)(v137 + 1240) = *(_QWORD *)v136;
      v184 = *v165;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v184 < *(_QWORD *)(gpsi + 8LL)
        && ((v186 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v184,
             v188 = (struct tagWND **)HMPkheFromPhe(v186),
             LOWORD(v184) = WORD1(v184) & 0x7FFF,
             (WORD1(v184) & 0x7FFF) == *(_WORD *)(v186 + 26))
         || (_WORD)v184 == 0x7FFF
         || !(_WORD)v184 && PsGetCurrentProcessWow64Process(v187))
        && (*(_BYTE *)(v186 + 25) & 1) == 0
        && *(_BYTE *)(v186 + 24) == 1 )
      {
        v189 = *v188;
      }
      else
      {
        v189 = 0LL;
      }
      InputTraceLogging::Delivery::GetMessageW(
        (const struct tagMSG *)v165,
        (const struct tagTHREADINFO *)v137,
        v189,
        v185,
        v199);
    }
  }
  EtwTraceBeginAppMessageProcessing(a6, v194, v165);
  return v135;
}
