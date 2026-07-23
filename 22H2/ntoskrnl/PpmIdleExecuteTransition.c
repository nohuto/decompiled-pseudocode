/*
 * XREFs of PpmIdleExecuteTransition @ 0x140222470
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 * Callees:
 *     PpmExitCoordinatedIdle @ 0x140223FC0 (PpmExitCoordinatedIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x140224030 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140224BA0 (KeResumeClockTimerFromIdle.c)
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140229340 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BBB30 (KeRemoveProcessorAffinityEx.c)
 *     KePrepareClockTimerForIdle @ 0x1402F0BB0 (KePrepareClockTimerForIdle.c)
 *     HalRequestIpi @ 0x140343EB0 (HalRequestIpi.c)
 *     PpmConvertTime @ 0x14034523C (PpmConvertTime.c)
 *     PpmGetExitSamplingCountdown @ 0x14034AA60 (PpmGetExitSamplingCountdown.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     HalpTimerScaleCounter @ 0x140395BF0 (HalpTimerScaleCounter.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1403985A4 (PpmPerfArbitratorApplyProcessorState.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1403FEB70 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     KdCallPowerHandlers @ 0x140510AC4 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x140510F00 (KdPowerTransitionEx.c)
 *     KeIsSubsetAffinityEx @ 0x140513580 (KeIsSubsetAffinityEx.c)
 *     KeQueryWakeSource @ 0x1405145EC (KeQueryWakeSource.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x14051EDA0 (KeUpdatePendingQosRequest.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14056664C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x140566D10 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x140566ED8 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateConcurrency @ 0x140566F70 (PpmIdleUpdateConcurrency.c)
 *     PpmTestAndLockProcessor @ 0x14056796C (PpmTestAndLockProcessor.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x14056E708 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x14057966C (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rdi
  unsigned __int16 v9; // bp
  unsigned int v11; // r12d
  unsigned __int16 *v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rbx
  unsigned int v15; // edi
  _BYTE *v16; // rbx
  __int64 v17; // rcx
  __int64 Prcb; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // edx
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int8 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rcx
  unsigned __int8 v28; // bl
  unsigned int v29; // edi
  unsigned __int64 v30; // rdx
  char v31; // r14
  char v32; // si
  bool v33; // di
  __int64 v34; // rbx
  int v35; // r9d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // si
  int v41; // edi
  __int64 v42; // r10
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  __int64 v50; // rbx
  char v51; // bp
  unsigned int v52; // r14d
  signed __int64 v53; // rdi
  int v54; // r8d
  unsigned __int64 *v55; // r9
  __int64 v56; // r10
  unsigned __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  int ExitSamplingCountdown; // eax
  char v61; // r9
  int v62; // eax
  int v63; // ecx
  __int64 v64; // r12
  signed __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rsi
  unsigned int v68; // ebx
  __int64 v69; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  int v71; // edi
  int v72; // eax
  int v73; // r8d
  KSPIN_LOCK *v74; // rax
  KSPIN_LOCK *v75; // rcx
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 (__fastcall *v81)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v82; // eax
  unsigned int v83; // r15d
  __int64 v84; // rsi
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rdx
  int v89; // ecx
  __int16 v90; // cx
  __int64 v91; // rdx
  unsigned __int8 v92; // bl
  volatile unsigned __int8 DeepSleep; // si
  char v94; // r8
  struct _KPRCB *v105; // rbx
  __int64 Number; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int16 v112; // r8
  __int16 v113; // bx
  unsigned __int16 v114; // ax
  __int64 v115; // rdx
  signed __int16 v116; // tt
  bool v117; // zf
  __int64 v118; // rdx
  signed __int16 v119; // tt
  __int16 v120; // ax
  char v121; // al
  struct _KPRCB *v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // rcx
  unsigned __int64 v125; // rax
  int v126; // eax
  ULONG_PTR v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rbx
  __int64 v130; // rax
  unsigned __int64 v131; // r8
  signed __int64 v132; // rax
  int v133; // r10d
  unsigned __int64 v134; // rcx
  __int64 v135; // r9
  __int64 v136; // rcx
  unsigned __int64 v137; // rcx
  signed __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rsi
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rsi
  unsigned __int128 v145; // rax
  __int64 v146; // rbx
  __int64 InternalData; // rax
  unsigned __int64 v148; // r8
  int v149; // r10d
  unsigned __int64 v150; // rcx
  __int64 v151; // r9
  __int64 v152; // rdx
  unsigned __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // r8
  bool v156; // di
  __int64 v157; // rax
  ULONG_PTR v158; // rbx
  unsigned __int64 v159; // rbx
  unsigned __int64 v160; // rcx
  unsigned __int8 v161; // al
  int v162; // eax
  int v163; // ecx
  int *v164; // rcx
  int v165; // r8d
  __int64 v166; // rbx
  __int64 v167; // r8
  unsigned __int64 v168; // rsi
  unsigned __int16 v169; // di
  unsigned int v170; // ecx
  unsigned __int64 v171; // rdx
  unsigned int v172; // ebp
  __int64 v173; // rbx
  __int64 v174; // r14
  unsigned __int32 v175; // eax
  unsigned __int32 v176; // r8d
  signed __int32 v177; // ecx
  int v178; // r12d
  int v179; // r13d
  __int64 v180; // rdi
  int v181; // ebx
  __int64 result; // rax
  signed __int32 v183[8]; // [rsp+0h] [rbp-3F8h] BYREF
  unsigned __int8 v184; // [rsp+50h] [rbp-3A8h]
  volatile unsigned __int8 v185; // [rsp+51h] [rbp-3A7h]
  char v186; // [rsp+52h] [rbp-3A6h]
  char v187; // [rsp+53h] [rbp-3A5h]
  unsigned __int8 v188; // [rsp+54h] [rbp-3A4h]
  char v189; // [rsp+55h] [rbp-3A3h]
  char v190; // [rsp+56h] [rbp-3A2h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-3A0h]
  signed __int64 v192; // [rsp+60h] [rbp-398h]
  int v193; // [rsp+68h] [rbp-390h]
  __int64 v194; // [rsp+70h] [rbp-388h]
  unsigned int v195; // [rsp+78h] [rbp-380h]
  int v196; // [rsp+7Ch] [rbp-37Ch]
  int v197; // [rsp+80h] [rbp-378h] BYREF
  int v198; // [rsp+84h] [rbp-374h]
  unsigned int v199; // [rsp+88h] [rbp-370h]
  __int64 v200; // [rsp+90h] [rbp-368h]
  unsigned __int16 *v201; // [rsp+98h] [rbp-360h]
  int v202; // [rsp+A0h] [rbp-358h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp-350h]
  __int64 v204; // [rsp+B0h] [rbp-348h]
  unsigned __int16 *v205; // [rsp+B8h] [rbp-340h]
  unsigned __int64 v206; // [rsp+C0h] [rbp-338h]
  unsigned __int16 v207; // [rsp+C8h] [rbp-330h]
  int v208; // [rsp+CAh] [rbp-32Eh]
  __int16 v209; // [rsp+CEh] [rbp-32Ah]
  int v210; // [rsp+D0h] [rbp-328h]
  __int64 v211; // [rsp+D8h] [rbp-320h]
  unsigned __int64 v212; // [rsp+E0h] [rbp-318h] BYREF
  int v213; // [rsp+E8h] [rbp-310h]
  __int64 v214; // [rsp+F0h] [rbp-308h]
  __int64 v215; // [rsp+F8h] [rbp-300h]
  __int64 v216; // [rsp+100h] [rbp-2F8h]
  __int64 v217; // [rsp+108h] [rbp-2F0h]
  ULONG_PTR v218; // [rsp+110h] [rbp-2E8h]
  _QWORD v219[2]; // [rsp+118h] [rbp-2E0h] BYREF
  __int128 v220; // [rsp+128h] [rbp-2D0h] BYREF
  __int64 v221; // [rsp+138h] [rbp-2C0h]
  __int128 v222; // [rsp+140h] [rbp-2B8h] BYREF
  __int128 v223; // [rsp+150h] [rbp-2A8h]
  __int128 v224; // [rsp+160h] [rbp-298h]
  __int128 v225; // [rsp+170h] [rbp-288h] BYREF
  __int64 v226; // [rsp+180h] [rbp-278h] BYREF
  int v227; // [rsp+188h] [rbp-270h]
  int v228; // [rsp+18Ch] [rbp-26Ch]
  _QWORD v229[2]; // [rsp+190h] [rbp-268h] BYREF
  _QWORD v230[2]; // [rsp+1A0h] [rbp-258h] BYREF
  _OWORD v231[8]; // [rsp+1B0h] [rbp-248h] BYREF
  __int64 v232; // [rsp+230h] [rbp-1C8h]
  _QWORD v233[22]; // [rsp+240h] [rbp-1B8h] BYREF
  _DWORD v234[44]; // [rsp+2F0h] [rbp-108h] BYREF
  int v235; // [rsp+3F0h] [rbp-8h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v232 = 0LL;
  v9 = 0;
  v185 = 0;
  v186 = 0;
  LOBYTE(v193) = 0;
  v11 = 0;
  LOBYTE(v196) = 0;
  v189 = 0;
  v187 = 0;
  v204 = *(_QWORD *)(v8 + 488);
  v218 = BugCheckParameter4;
  memset(v231, 0, sizeof(v231));
  v217 = v8 + 792;
  v216 = a4;
  v195 = a3;
  LODWORD(BugCheckParameter2) = a2;
  v200 = 0LL;
  v198 = 0;
  v197 = 7;
  v202 = -1;
  v194 = v8;
  v211 = v8 + 248LL * (unsigned int)a2;
  v190 = 0;
  LODWORD(v192) = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || *(_BYTE *)(v8 + 248LL * (unsigned int)a2 + 1061) )
  {
    v184 = 0;
    v188 = 3;
  }
  else
  {
    v184 = 1;
    v188 = 4;
  }
  v199 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
    {
      LOBYTE(a2) = 1;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, a2);
    }
    v12 = (unsigned __int16 *)(v8 + 240);
    v201 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v13 = *(_DWORD *)(v8 + 548);
    v14 = *(_QWORD *)(v8 + 552);
    v221 = 0LL;
    v219[1] = &v220;
    v15 = 0;
    v219[0] = 1LL;
    v220 = 0LL;
    LOBYTE(v220) = 1;
    BYTE2(v220) = 1;
    if ( v13 )
    {
      v16 = (_BYTE *)(v14 + 4);
      while ( 1 )
      {
        if ( *v16 != 0xFF )
        {
          v17 = *((unsigned int *)v16 - 1);
          DWORD1(v220) = (unsigned __int8)*v16;
          Prcb = KeGetPrcb(v17);
          LODWORD(v192) = PpmTestAndLockProcessor(Prcb, v12, v219);
          v20 = (unsigned int)v192;
          if ( (int)v192 < 0 )
            break;
        }
        ++v15;
        v16 += 8;
        if ( v15 >= v13 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v21 = *((_QWORD *)v12 + 1);
      v206 = v21;
      v222 = 0LL;
      v208 = 0;
      v223 = 0LL;
      v209 = 0;
      v207 = 0;
      v205 = v12;
LABEL_15:
      while ( 1 )
      {
        v213 = 0;
        v22 = v12 ? *v12 : v207 + 1;
        if ( !v21 )
          break;
LABEL_21:
        _BitScanForward64(&v23, v21);
        v21 &= ~(1LL << v23);
        v213 = v23;
        v206 = v21;
        v24 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * v207 + (unsigned __int8)v23]);
        v223 = (unsigned __int64)v24;
        v25 = *(_QWORD *)(v24 + 0x8000);
        *(_QWORD *)&v222 = 0LL;
        *((_QWORD *)&v222 + 1) = PopIdleTransitionTimeout;
        v26 = *(unsigned __int8 (__fastcall **)(__int64))(v25 + 472);
        v27 = *(_QWORD *)(v25 + 488);
        BYTE12(v223) = 1;
        if ( !v26(v27) )
        {
          while ( (*(_DWORD *)(v24 + 32832) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(&v222);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v25 + 472))(*(_QWORD *)(v25 + 488)) )
            {
              v21 = v206;
              goto LABEL_15;
            }
          }
          v20 = 3221225514LL;
          LODWORD(v192) = -1073741782;
          goto LABEL_27;
        }
      }
      while ( 1 )
      {
        v19 = ++v207;
        if ( v207 >= v22 )
          break;
        v206 = *(_QWORD *)&v12[4 * v207 + 4];
        v21 = v206;
        if ( v206 )
          goto LABEL_21;
      }
      v20 = 0LL;
      LODWORD(v192) = 0;
    }
LABEL_27:
    if ( (int)v20 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
      v28 = 0;
      v29 = 1;
      v199 = 1;
      goto LABEL_309;
    }
    v8 = v194;
  }
  v19 = 0LL;
  v30 = *(unsigned __int16 *)(v8 + 240);
  v201 = (unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v30 )
  {
    while ( !*(_QWORD *)(v8 + 240 + 8LL * (unsigned __int16)v19 + 8) )
    {
      LOWORD(v19) = v19 + 1;
      if ( (unsigned __int16)v19 >= (unsigned __int16)v30 )
        goto LABEL_37;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_37:
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  v214 = 2LL;
  v35 = 512;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(BugCheckParameter4 + 33264) != 2 )
  {
    v34 = *(_QWORD *)(BugCheckParameter4 + 33136);
    if ( v34 && *(_BYTE *)(v34 + 125) )
    {
      v32 = 1;
      _disable();
      v33 = (v235 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v34 + 128));
      v35 = 512;
    }
    if ( (*(_BYTE *)(BugCheckParameter4 + 33272) & 4) == 0 )
    {
      v30 = __rdtsc();
      v19 = v30 - *(_QWORD *)(BugCheckParameter4 + 33248);
      v36 = *(_QWORD *)(BugCheckParameter4 + 33256);
      if ( v19 < v36 && !*(_BYTE *)(BugCheckParameter4 + 33213) )
      {
        v37 = *(_DWORD *)(BugCheckParameter4 + 236);
        v31 = 1;
        if ( (v37 & 0x300) == 0 )
        {
          LOBYTE(v9) = 1;
          v38 = v37 & 0xFFFFFCFF | 0x200;
LABEL_52:
          *(_DWORD *)(BugCheckParameter4 + 236) = v38;
          KeUpdatePendingQosRequest(BugCheckParameter4);
          goto LABEL_53;
        }
        goto LABEL_53;
      }
      *(_QWORD *)(BugCheckParameter4 + 33248) = v30;
      *(_BYTE *)(BugCheckParameter4 + 33213) = v19 >= 2 * v36;
    }
    *(_DWORD *)(BugCheckParameter4 + 33264) = 2;
    LOBYTE(v30) = 1;
    PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v30, 0LL, 512LL);
    *(_BYTE *)(BugCheckParameter4 + 236) = 2;
  }
  v39 = *(_DWORD *)(BugCheckParameter4 + 236);
  if ( (v39 & 0x300) != 0 )
  {
    v38 = v39 & 0xFFFFFCFF;
    goto LABEL_52;
  }
LABEL_53:
  if ( v32 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v34 + 128));
    if ( v33 )
      _enable();
  }
  if ( (_BYTE)v9 )
  {
    v9 = 0;
    v20 = 3221225494LL;
    v29 = 0;
    v199 = 0;
    LODWORD(v192) = -1073741802;
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    v28 = 0;
    goto LABEL_308;
  }
  v40 = v184;
  v41 = BugCheckParameter2;
  v42 = v211;
  *(_BYTE *)(BugCheckParameter4 + 32816) = v184;
  *(_DWORD *)(BugCheckParameter4 + 32820) = v41;
  if ( a8 )
  {
    LOBYTE(v30) = 2;
    *(_BYTE *)(BugCheckParameter4 + 32817) = *(_BYTE *)(v42 + 1058) == 0;
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, v30);
  }
  if ( v31 || *(_BYTE *)(v194 + 6) || *(_BYTE *)(v194 + 7) )
  {
    v43 = -1LL;
    v189 = 1;
    if ( *(_BYTE *)(v194 + 6) )
    {
      v44 = *(_QWORD *)(v194 + 520);
      if ( v44 <= KeMaximumIncrement )
        v44 = KeMaximumIncrement;
      v43 = a7 + KeMaximumIncrement + v44;
    }
    if ( *(_BYTE *)(v194 + 7) )
    {
      v45 = PpmCurrentProfile[342 * dword_140C2334C + 24];
      if ( v43 >= a7 + (unsigned __int64)(unsigned int)(10 * v45) )
        v43 = a7 + (unsigned int)(10 * v45);
    }
    if ( v31 && v43 >= a7 + PpmPerfQosIdleExpirationTimeout )
      v43 = a7 + PpmPerfQosIdleExpirationTimeout;
    *(_QWORD *)(BugCheckParameter4 + 32808) = v43;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
  }
  if ( *(_BYTE *)(v42 + 1057) || v31 )
  {
    v64 = v194;
    goto LABEL_135;
  }
  v46 = *(_QWORD *)(BugCheckParameter4 + 200);
  v47 = *(_QWORD *)(BugCheckParameter4 + 192);
  v186 = 1;
  _m_prefetchw((const void *)(v47 + 64));
  v48 = *(_QWORD *)(v47 + 64);
  do
  {
    v49 = v48;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 64), v46 | v48, v48);
  }
  while ( v49 != v48 );
  v50 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v51 = 0;
  v52 = v195;
  v53 = v48;
  v192 = v48;
  v198 = 0;
  if ( v40 )
  {
    v198 = 1;
  }
  else if ( v195 == -1 )
  {
    v54 = 0;
    if ( *(_WORD *)(v50 + 240) )
    {
      v55 = (unsigned __int64 *)(v50 + 248);
      v56 = *(unsigned __int16 *)(v50 + 240);
      do
      {
        v57 = *v55++;
        v54 += (unsigned int)((0x101010101010101LL
                             * ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v56;
      }
      while ( v56 );
      v53 = v192;
      v11 = 0;
      v52 = v195;
      v40 = v184;
    }
    if ( v54 != (_DWORD)KeNumberProcessors_0 - 1 )
      goto LABEL_97;
    v198 = 2;
  }
  v58 = *(_DWORD *)(v50 + 12);
  if ( !v58 || (v59 = v58 - 1, (*(_DWORD *)(v50 + 12) = v59) == 0) )
  {
    ExitSamplingCountdown = PpmGetExitSamplingCountdown();
    v51 = 0;
    *(_DWORD *)(v50 + 12) = ExitSamplingCountdown;
    if ( ExitSamplingCountdown )
      v51 = v61;
  }
  if ( v51 )
  {
    *(_BYTE *)(v50 + 3) = 1;
    if ( !v40 )
    {
LABEL_97:
      v11 = 1;
      goto LABEL_98;
    }
    *(_QWORD *)(v50 + 56) = -1LL;
  }
  if ( !v40 )
    goto LABEL_97;
LABEL_98:
  v62 = ((__int64 (__fastcall *)(_QWORD))off_140C00740[0])(v11);
  v63 = *(_DWORD *)(BugCheckParameter4 + 12504);
  LODWORD(v192) = v62;
  if ( v63 )
  {
    LODWORD(v192) = -2147483631;
LABEL_100:
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    v9 = 0;
    v29 = 0;
    v199 = 0;
    v28 = 0;
LABEL_299:
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    if ( v185 && *(_BYTE *)(BugCheckParameter4 + 32410) )
      KeWakeProcessor();
    v20 = (unsigned int)v192;
    if ( (_BYTE)v196 && (int)v192 >= 0 )
      v164 = &v202;
    else
      v164 = 0LL;
    KeResumeClockTimerFromIdle(v164);
    off_140C00750();
    KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 12596), MEMORY[0xFFFFF78000000320], 0, 0);
    goto LABEL_308;
  }
  if ( v62 < 0 )
    goto LABEL_100;
  v64 = v194;
  if ( *(_BYTE *)v194 == 1 )
  {
    v65 = *(_QWORD *)(BugCheckParameter4 + 200) | v53;
    v66 = *(unsigned __int8 *)(BugCheckParameter4 + 208);
    memset(v233, 0, 0xA8uLL);
    v67 = PpmPlatformStates;
    if ( PpmPlatformStates )
    {
      LODWORD(v233[0]) = 1310721;
      memset((char *)v233 + 4, 0, 0xA4uLL);
      if ( (_WORD)v66 )
        LOWORD(v233[0]) = v66 + 1;
      v233[v66 + 1] |= v65;
      v68 = 0;
      v69 = *(_QWORD *)(v64 + 752);
      if ( *(_DWORD *)(v69 + 4) )
      {
        while ( *(_DWORD *)(v69 + 4LL * v68 + 8) != -1
             || !(unsigned int)KeIsSubsetAffinityEx(
                                 v67 + 384LL * *(unsigned int *)(*(_QWORD *)(v64 + 784) + 24LL * v68 + 4) + 128,
                                 v233) )
        {
          if ( ++v68 >= *(_DWORD *)(v69 + 4) )
            goto LABEL_112;
        }
        LODWORD(v192) = -1073741802;
        goto LABEL_100;
      }
    }
LABEL_112:
    v40 = v184;
  }
  if ( v51 )
    *(_WORD *)(v64 + 48) |= 0x200u;
  if ( v40 )
  {
    v190 = 1;
    _InterlockedIncrement(&PpmNonInterruptibleCount);
    CurrentPrcb = KeGetCurrentPrcb();
    v71 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_140C00888[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v71 )
      ++dword_140C31668;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  if ( *(_BYTE *)(v64 + 540) )
  {
    LOBYTE(v72) = v196;
    if ( v51 )
    {
      v72 = (unsigned __int8)v196;
      if ( !v40 )
        v72 = 1;
      v196 = v72;
    }
    if ( a5 && v52 != -1 && PpmDripsStateIndex != -1 )
    {
      v73 = (unsigned __int8)v193;
      if ( *(_BYTE *)v64 == 1 )
        v73 = 1;
      v193 = v73;
    }
    KePrepareClockTimerForIdle(a5, (unsigned __int8)v193, *(_QWORD *)(v64 + 520), (unsigned __int8)v72);
  }
  v41 = BugCheckParameter2;
LABEL_135:
  v74 = *(KSPIN_LOCK **)(BugCheckParameter4 + 33192);
  SpinLock = v74;
  if ( v74 )
  {
    PpmIdleUpdateConcurrency(v74);
    v75 = *(KSPIN_LOCK **)(BugCheckParameter4 + 33200);
    if ( v75 )
      PpmIdleUpdateConcurrency(v75);
  }
  *(_DWORD *)(v64 + 20) = v41;
  v76 = __rdtsc();
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
  {
    v77 = __readmsr(0xDB2u);
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v77 = 0LL;
  }
  v78 = a6 - *(_QWORD *)(BugCheckParameter4 + 32880);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter4 + 32896), v78);
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32968) += PpmConvertTime(
                                                 v78,
                                                 v76 - *(_QWORD *)(BugCheckParameter4 + 32848),
                                                 v77 - *(_QWORD *)(BugCheckParameter4 + 32960));
  v79 = *(_QWORD *)(BugCheckParameter4 + 32848);
  *(_QWORD *)(BugCheckParameter4 + 32880) = a6;
  if ( v76 > v79 )
    *(_QWORD *)(BugCheckParameter4 + 32856) += v76 - v79;
  *(_QWORD *)(BugCheckParameter4 + 32848) = v76;
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32960) = v77;
  LOBYTE(v35) = 1;
  PpmUpdatePerformanceFeedback(BugCheckParameter4, 0, 0, v35, 0LL);
  if ( PopSnapEnergyCounters )
    PopSnapEnergyCounters(*(unsigned int *)(BugCheckParameter4 + 36), 0LL, 0LL);
  v80 = v194;
  _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 32800), a6);
  v81 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v194 + 416);
  if ( v81 )
  {
    v82 = v81(v204, (unsigned int)BugCheckParameter2, v195, *(unsigned int *)(v194 + 796), *(_QWORD *)(v194 + 808));
    v20 = v82;
    LODWORD(v192) = v82;
  }
  else
  {
    v20 = (unsigned int)v192;
  }
  if ( (int)v20 >= 0 )
  {
    v83 = v195;
    v84 = *(_QWORD *)(v194 + 808);
    LODWORD(v85) = *(_DWORD *)(v194 + 796);
    v187 = 1;
    if ( v195 != -1 )
    {
      v86 = PpmPlatformStates + 384LL * v195;
      PpmEventEnterPlatformIdleState(v195);
      if ( !qword_140C50040 && v195 == dword_140C50080 )
        _InterlockedCompareExchange64(&qword_140C50040, MEMORY[0xFFFFF78000000008], 0LL);
      if ( a5 )
      {
        *(_BYTE *)(PpmPlatformStates + 56) = 1;
        ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
      }
      if ( *(_BYTE *)(v86 + 120) )
      {
        LOBYTE(v87) = 1;
        KdPowerTransitionEx(2147483652LL, v87);
        KdCallPowerHandlers(4LL);
      }
      v80 = v194;
    }
    if ( (_DWORD)v85 )
    {
      if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v226 = v84;
        v227 = 4 * v85;
        v228 = 0;
        EtwTraceKernelEvent((unsigned int)&v226, 1, 1073774592, 4671, 1538);
      }
      do
      {
        v85 = (unsigned int)(v85 - 1);
        v88 = PpmPlatformStates + 384LL * *(unsigned int *)(v84 + 4 * v85);
        *(_QWORD *)(v88 + 328) = a6;
        v89 = *(_DWORD *)(v88 + 320);
        if ( !*(_DWORD *)(PpmPlatformStates + 4) )
          v89 ^= ((unsigned __int16)v89 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
        *(_DWORD *)(v88 + 320) = v89 & 0xF8FFFFFF | 0x4000000;
      }
      while ( (_DWORD)v85 );
    }
    if ( v83 != -1 )
      *(_WORD *)(v80 + 48) |= 0x10u;
    v90 = *(_WORD *)(v80 + 48);
    v91 = *(_QWORD *)(v80 + 512);
    v92 = *(_BYTE *)(v80 + 541);
    v225 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      LODWORD(v225) = BugCheckParameter2;
      WORD2(v225) = v90;
      *((_QWORD *)&v225 + 1) = v91;
      v229[0] = &v225;
      WORD3(v225) = v92;
      v229[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v229, 1, 1073774592, 4665, 1538);
    }
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, v188);
    DeepSleep = 0;
    if ( v186 )
    {
      v185 = 0;
      if ( *(_BYTE *)(v211 + 1056) >= 2u && (HvlEnlightenments & 4) == 0 )
      {
        v94 = byte_140C10E58;
        v224 = 0LL;
        if ( byte_140C10E58 == -1 )
        {
          _RAX = 1LL;
          __asm { cpuid }
          v94 = 0;
          *(_QWORD *)&v224 = __PAIR64__(_RBX, _RAX);
          *((_QWORD *)&v224 + 1) = __PAIR64__(_RDX, _RCX);
          if ( (int)_RCX < 0 )
          {
            _RAX = 1073741825LL;
            __asm { cpuid }
            *(_QWORD *)&v224 = __PAIR64__(_RBX, _RAX);
            v94 = (_DWORD)_RAX == 1986945624;
            *((_QWORD *)&v224 + 1) = __PAIR64__(_RDX, _RCX);
          }
          byte_140C10E58 = v94;
        }
        if ( !v94 )
        {
          v105 = KeGetCurrentPrcb();
          if ( v105->CpuVendor != 1 )
          {
            Number = v105->Number;
            v105->DeepSleep = 1;
            _InterlockedOr64(
              (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                        + 12760072
                                        + 0x140000000LL),
              1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
            if ( !v105->DeepSleep )
            {
              v107 = 8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[v105->Number] >> 6) + 12760072;
              _InterlockedAnd64(
                (volatile signed __int64 *)(v107 + 0x140000000LL),
                ~(1LL << (KiProcessorIndexToNumberMappingTable[v105->Number] & 0x3F)));
              if ( KiFlushPcid )
              {
                v108 = __readcr3();
                __writecr3(v108);
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( !Process->AddressPolicy )
                  KiSetUserTbFlushPending(Process, v107, 0x140000000uLL, 1LL);
              }
              else
              {
                v110 = __readcr4();
                if ( (v110 & 0x20080) != 0 )
                {
                  __writecr4(v110 ^ 0x80);
                  __writecr4(v110);
                }
                else
                {
                  v111 = __readcr3();
                  __writecr3(v111);
                }
              }
            }
            DeepSleep = v105->DeepSleep;
          }
          v185 = DeepSleep;
        }
      }
    }
    v112 = 0;
    if ( (*(_BYTE *)(BugCheckParameter4 + 1762) & 1) != 0 && *(_WORD *)(BugCheckParameter4 + 1764) )
      *(_WORD *)(BugCheckParameter4 + 1760) |= 1u;
    _m_prefetchw((const void *)(BugCheckParameter4 + 1772));
    v113 = *(_WORD *)(BugCheckParameter4 + 1772) & 4;
    if ( v113 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 1760) & 1) != 0 )
      {
        v114 = *(_WORD *)(BugCheckParameter4 + 1764);
        if ( (v114 & 3) == 0 )
        {
          v112 = 2;
          *(_WORD *)(BugCheckParameter4 + 1764) = v114 | 2;
          __writemsr(0x48u, v114 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(BugCheckParameter4 + 1772), 2u);
      v115 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v115 + 1772));
      do
        v116 = *(_WORD *)(v115 + 1772);
      while ( v116 != _InterlockedCompareExchange16((volatile signed __int16 *)(v115 + 1772), v116 & 0xFFE4 | 0xA, v116) );
    }
    v117 = (*(_BYTE *)(BugCheckParameter4 + 1762) & 0x40) == 0;
    v193 = v112;
    if ( !v117 )
      HIWORD(v193) = *(_WORD *)(BugCheckParameter4 + 36522);
    LODWORD(v192) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _QWORD))(v80 + 424))(
                      v204,
                      v216,
                      (unsigned int)BugCheckParameter2,
                      v83,
                      v193,
                      *(_DWORD *)(v80 + 796),
                      *(_QWORD *)(v80 + 808));
    v20 = (unsigned int)v192;
    if ( v113 )
    {
      v118 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v118 + 1772));
      do
        v119 = *(_WORD *)(v118 + 1772);
      while ( v119 != _InterlockedCompareExchange16((volatile signed __int16 *)(v118 + 1772), v119 & 0xFFF5 | 2, v119) );
      if ( (*(_WORD *)(BugCheckParameter4 + 1772) & 0x10) == 0 )
      {
        v120 = *(_WORD *)(BugCheckParameter4 + 1764);
        if ( (v120 & 2) != 0 )
        {
          *(_WORD *)(BugCheckParameter4 + 1764) = v120 & 0xFFFD;
          __writemsr(0x48u, v120 & 0xFFFD);
        }
      }
    }
    *(_WORD *)(BugCheckParameter4 + 1760) &= ~1u;
    if ( DeepSleep )
    {
      v121 = *(_BYTE *)(BugCheckParameter4 + 32410);
      v185 = 0;
      if ( v121 )
      {
        v122 = KeGetCurrentPrcb();
        v123 = v122->Number;
        v122->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_140C2B408[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v123] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v123] & 0x3F)));
        v124 = __readcr4();
        if ( (v124 & 0x20080) != 0 )
        {
          __writecr4(v124 ^ 0x80);
          __writecr4(v124);
        }
        else
        {
          v125 = __readcr3();
          __writecr3(v125);
        }
      }
    }
    v126 = *(_DWORD *)(v80 + 64);
    if ( v126 < 0 )
    {
      if ( (int)v20 >= 0 )
        v20 = (unsigned int)v126;
      LODWORD(v192) = v20;
    }
    v212 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v212 = __PAIR64__(v20, BugCheckParameter2);
      v230[0] = &v212;
      v230[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v230, 1, 1073774592, 4666, 1538);
    }
  }
  v127 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v117 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
    v215 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( v117 )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v154 = *(_QWORD *)(HalpPerformanceCounter + 72)
             + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v154 = *(_QWORD *)(HalpPerformanceCounter + 72);
      *(_QWORD *)&v145 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v154);
      v144 = *(_QWORD *)(v127 + 208);
      *((_QWORD *)&v145 + 1) = v145;
    }
    else
    {
      do
      {
        v144 = *(_QWORD *)(v127 + 208);
        do
        {
          v146 = *(_QWORD *)(v127 + 200);
          InternalData = HalpTimerGetInternalData(v127);
          v148 = (*(__int64 (__fastcall **)(__int64))(v127 + 112))(InternalData);
          _InterlockedOr(v183, 0);
          *(_QWORD *)&v145 = *(_QWORD *)(v127 + 200);
        }
        while ( v146 != (_QWORD)v145 );
      }
      while ( v144 != *(_QWORD *)(v127 + 208) );
      v149 = *(_DWORD *)(v127 + 220);
      v150 = v146 ^ v148;
      if ( _bittest64((const __int64 *)&v150, (unsigned __int8)(v149 - 1)) )
      {
        v151 = 1LL << v149;
        v152 = -1LL;
        if ( v149 != 64 )
          v152 = v151 - 1;
        v153 = v152 & v146;
        *((_QWORD *)&v145 + 1) = v148 | v146 ^ v152 & v146;
        if ( v148 < v153 )
          *((_QWORD *)&v145 + 1) += v151;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v127 + 200), *((signed __int64 *)&v145 + 1), v145);
      }
      else if ( v149 == 64 )
      {
        *((_QWORD *)&v145 + 1) = v148;
      }
      else
      {
        *((_QWORD *)&v145 + 1) = v148 | v146 & ~((1LL << v149) - 1);
      }
    }
    goto LABEL_261;
  }
  v215 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v142 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v142 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v143 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v142);
    v144 = MEMORY[0xFFFFF780000003B8];
    v145 = (unsigned __int64)v143 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
LABEL_261:
    v141 = *((_QWORD *)&v145 + 1) + v144;
    v200 = v141;
    goto LABEL_262;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    v139 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v140 = (*(__int64 (__fastcall **)(__int64))(v127 + 112))(v139);
    v128 = *(_QWORD *)(v127 + 208);
    v138 = v140;
  }
  else
  {
    do
    {
      v128 = *(_QWORD *)(v127 + 208);
      do
      {
        v129 = *(_QWORD *)(v127 + 200);
        v130 = HalpTimerGetInternalData(v127);
        v131 = (*(__int64 (__fastcall **)(__int64))(v127 + 112))(v130);
        _InterlockedOr(v183, 0);
        v132 = *(_QWORD *)(v127 + 200);
      }
      while ( v129 != v132 );
    }
    while ( v128 != *(_QWORD *)(v127 + 208) );
    v133 = *(_DWORD *)(v127 + 220);
    v134 = v129 ^ v131;
    if ( _bittest64((const __int64 *)&v134, (unsigned __int8)(v133 - 1)) )
    {
      v135 = 1LL << v133;
      v136 = -1LL;
      if ( v133 != 64 )
        v136 = v135 - 1;
      v137 = v129 & v136;
      v138 = v131 | v129 ^ v137;
      if ( v131 < v137 )
        v138 += v135;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v127 + 200), v138, v132);
    }
    else if ( v133 == 64 )
    {
      v138 = v131;
    }
    else
    {
      v138 = v131 | v129 & ~((1LL << v133) - 1);
    }
  }
  v141 = HalpTimerScaleCounter(v128 + v138, *(_QWORD *)(v127 + 192), 10000000LL);
  v200 = v141;
LABEL_262:
  if ( v127 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v155 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v155 = 10000000LL;
    v141 = HalpTimerScaleCounter(v141, v215, v155);
    v200 = v141;
  }
  _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 32800), 0LL);
  if ( *(_BYTE *)(BugCheckParameter4 + 32977) )
  {
    _disable();
    v156 = (v235 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter4 + 32840));
    v157 = 2LL;
    v158 = BugCheckParameter4 + 32864;
    do
    {
      if ( *(_QWORD *)v158 && *(_BYTE *)(*(_QWORD *)v158 + 34LL) )
      {
        PpmPerfFeedbackCounterUpdate();
        v157 = v214;
      }
      v158 += 8LL;
      v214 = --v157;
    }
    while ( v157 );
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter4 + 32840));
    if ( v156 )
      _enable();
  }
  v159 = __rdtsc();
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    v160 = __readmsr(0xDB2u);
  else
    v160 = 0LL;
  *(_QWORD *)(BugCheckParameter4 + 32880) = v141;
  *(_QWORD *)(BugCheckParameter4 + 32848) = v159;
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32960) = v160;
  v19 = (unsigned __int64)SpinLock;
  if ( SpinLock )
  {
    PpmIdleUpdateConcurrency(SpinLock);
    v19 = *(_QWORD *)(BugCheckParameter4 + 33200);
    if ( v19 )
      PpmIdleUpdateConcurrency((PKSPIN_LOCK)v19);
  }
  *(_QWORD *)(BugCheckParameter4 + 32784) = v141 - a6;
  if ( a8 )
  {
    v161 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    if ( (int)v20 >= 0 && v161 != 8 && v184 )
      KeBugCheckEx(0xA0u, 0x702uLL, (unsigned int)BugCheckParameter2, v161, BugCheckParameter4);
    *(_BYTE *)(BugCheckParameter4 + 32817) = 0;
  }
  v28 = v187;
  if ( v186 )
  {
    if ( v187
      && (int)v20 >= 0
      && PpmPlatformStates
      && *(_BYTE *)(PpmPlatformStates + 56)
      && PpmDripsStateIndex != -1
      && *(_DWORD *)(384LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 320) )
    {
      v162 = KeQueryWakeSource(&v197, v231);
      v163 = v197;
      v29 = 3;
      if ( v162 < 0 )
        v163 = 3;
      v197 = v163;
    }
    else
    {
      v29 = 3;
    }
    goto LABEL_299;
  }
  v29 = 3;
LABEL_308:
  v12 = v201;
LABEL_309:
  LOBYTE(v19) = 1;
  ((void (__fastcall *)(unsigned __int64))off_140C009A8[0])(v19);
  if ( v189 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    *(_QWORD *)(BugCheckParameter4 + 32808) = -1LL;
  }
  v165 = v28;
  v166 = v217;
  LODWORD(SpinLock) = PpmExitCoordinatedIdle(
                        BugCheckParameter4,
                        v217,
                        v165,
                        v20,
                        v29 != 3,
                        v200,
                        a5,
                        (__int64)v231,
                        v197);
  if ( v29 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v194 + 456))(
      v204,
      (unsigned int)BugCheckParameter2,
      (unsigned int)SpinLock,
      *(unsigned int *)(v166 + 4),
      *(_QWORD *)(v166 + 16));
  }
  else if ( !*(_BYTE *)v194 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v194 + 464))(v204, v29);
  }
  v167 = *(_QWORD *)(v166 + 16);
  for ( LODWORD(v166) = *(_DWORD *)(v166 + 4);
        (_DWORD)v166;
        *(_DWORD *)(384LL * *(unsigned int *)(v167 + 4 * v166) + PpmPlatformStates + 320) = 0 )
  {
    v166 = (unsigned int)(v166 - 1);
  }
  if ( v190 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v234[0] = 1310721;
  memset(&v234[1], 0, 0xA4uLL);
  LODWORD(v20) = KeGetPcr()->Prcb.Number;
  v168 = *((_QWORD *)v12 + 1);
  v169 = 0;
  while ( 1 )
  {
    v210 = 0;
    v170 = v12 ? *v12 : v169 + 1;
    if ( !v168 )
      break;
LABEL_326:
    _BitScanForward64(&v171, v168);
    v168 &= ~(1LL << v171);
    v210 = v171;
    v172 = KiProcessorNumberToIndexMappingTable[64 * v169 + (unsigned __int8)v171];
    v173 = KeGetPrcb(v172);
    v174 = *(_QWORD *)(v173 + 0x8000);
    _m_prefetchw((const void *)(v173 + 32832));
    v175 = *(_DWORD *)(v173 + 32832);
    do
    {
      v176 = v175;
      v177 = v175 ^ (v175 ^ (v175 - 1)) & 0xFFFFFF;
      if ( (v177 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v175) == 5 )
        {
          v177 = v177 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v175) == 7 )
        {
          v177 = v177 & 0xFFFFFF | 0x6000000;
        }
      }
      v175 = _InterlockedCompareExchange((volatile signed __int32 *)(v173 + 32832), v177, v175);
    }
    while ( v175 != v176 );
    if ( HIBYTE(v177) == 6 )
      KeAddProcessorAffinityEx(v234, v172);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v174
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)));
    v12 = v201;
    KeRemoveProcessorAffinityEx(v201, v172);
    v9 = 0;
  }
  while ( ++v169 < v170 )
  {
    v168 = *(_QWORD *)&v12[4 * v169 + 4];
    if ( v168 )
      goto LABEL_326;
  }
  v178 = (int)SpinLock;
  v179 = v218;
  if ( LOWORD(v234[0]) )
  {
    while ( !*(_QWORD *)&v234[2 * v9 + 2] )
    {
      if ( ++v9 >= LOWORD(v234[0]) )
        goto LABEL_341;
    }
    HalRequestIpi(0LL, v234);
  }
LABEL_341:
  v180 = v194;
  v181 = v192;
  if ( *(_BYTE *)(v194 + 3) )
    PpmIdleCompleteExitLatencyTrace(v179, v192, v184, v200, v202, v198, BugCheckParameter2, v178);
  result = v199;
  *(_DWORD *)(v180 + 68) = v199;
  *(_DWORD *)(v180 + 64) = v181;
  return result;
}
