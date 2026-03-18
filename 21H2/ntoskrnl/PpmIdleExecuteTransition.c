/*
 * XREFs of PpmIdleExecuteTransition @ 0x140306100
 * Callers:
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PpmGetExitSamplingCountdown @ 0x140224E64 (PpmGetExitSamplingCountdown.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14023B8E8 (PpmPerfArbitratorApplyProcessorState.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     KeWakeProcessor @ 0x1403B4940 (KeWakeProcessor.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     PpmIdleUpdateConcurrency @ 0x1403D98F0 (PpmIdleUpdateConcurrency.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KeUpdatePendingQosRequest @ 0x14045ABA8 (KeUpdatePendingQosRequest.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14045E960 (PpmEventCoordinatedIdleTransition.c)
 *     KdCallPowerHandlers @ 0x140565198 (KdCallPowerHandlers.c)
 *     KeGetInterruptRateDecayTime @ 0x14056839C (KeGetInterruptRateDecayTime.c)
 *     KeQueryWakeSource @ 0x14056A60C (KeQueryWakeSource.c)
 *     KePrepareNonClockOwnerForIdle @ 0x14056C984 (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     PpmExitCoordinatedIdleState @ 0x1405C74C8 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1405C7D34 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x1405C84DC (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x1405C85B0 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x1405C8D78 (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1405C946C (PpmUpdatePlatformIdleAccounting.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x1405CF520 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x1405D9844 (PpmEventEnterPlatformIdleState.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405DBF90 (PopIdleWakeNotifyWakeSource.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  ULONG_PTR v9; // r15
  unsigned __int16 v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int16 v12; // dx
  KSPIN_LOCK *v13; // rcx
  char v14; // r15
  char v15; // di
  char v16; // bl
  bool v17; // r12
  __int64 v18; // r13
  int v19; // eax
  unsigned __int8 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  signed __int64 v25; // rax
  __int64 v26; // r9
  char v27; // r12
  unsigned int v28; // edi
  signed __int64 v29; // r15
  int v30; // ebx
  unsigned __int64 *v31; // r8
  __int64 v32; // r11
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // ecx
  unsigned __int8 v37; // r10
  signed __int64 v38; // r12
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  __int64 (__fastcall *v43)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v44; // r15d
  int v45; // ebx
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int16 v48; // bx
  __int64 v49; // rcx
  unsigned __int8 v50; // dl
  char v51; // r8
  struct _KPRCB *v52; // rbx
  __int64 Number; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int16 v56; // r8
  __int16 v57; // di
  __int64 v58; // r9
  unsigned int v59; // r15d
  int v60; // ebx
  __int64 v61; // r15
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  signed __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rbx
  int v70; // ebx
  char v71; // r13
  int v72; // ebx
  int *v73; // rcx
  __int64 v74; // r8
  char v75; // di
  char v76; // r15
  char v77; // r12
  unsigned int v78; // ebx
  unsigned int v79; // r10d
  unsigned int v80; // r12d
  __int64 v81; // rbx
  __int64 i; // r9
  unsigned int v83; // r15d
  unsigned __int16 *v84; // rdx
  unsigned __int64 v85; // rdi
  unsigned __int16 v86; // bx
  unsigned int v87; // ecx
  int v88; // esi
  int v89; // r13d
  __int64 result; // rax
  __int64 v91; // rcx
  __int64 v92; // rbx
  signed __int16 v93; // tt
  unsigned __int16 v94; // ax
  __int64 v95; // rdx
  signed __int16 v96; // tt
  __int16 v97; // ax
  unsigned __int16 *v98; // r12
  unsigned int v99; // ebx
  __int64 v100; // rax
  unsigned int v101; // edi
  unsigned __int64 v102; // rbx
  __int64 v103; // rcx
  unsigned int v104; // edx
  char v105; // al
  struct _KPRCB *v106; // rax
  __int64 v107; // rcx
  char v108; // bl
  unsigned int v109; // ecx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rbx
  __int64 v112; // r8
  int v113; // eax
  bool v114; // zf
  signed __int64 v115; // r15
  __int64 v116; // rdi
  __int64 v117; // rbx
  bool v118; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  struct _KPRCB *v123; // rcx
  _DWORD *v124; // rdx
  KSPIN_LOCK *v125; // rcx
  unsigned __int64 v126; // rbx
  unsigned int v127; // eax
  struct _KPRCB *v128; // rdi
  _DWORD *v129; // rcx
  unsigned __int64 v130; // rax
  __int64 v131; // rdi
  struct _KPRCB *v132; // rcx
  _DWORD *v133; // rdx
  int v134; // edx
  unsigned __int8 v135; // al
  unsigned int v136; // ecx
  unsigned __int64 *v137; // rax
  unsigned __int16 v138; // ax
  _DWORD *v139; // rcx
  _DWORD *v140; // rcx
  _BYTE *v141; // r15
  __int64 v142; // rcx
  __int64 Prcb; // rax
  unsigned __int64 v144; // rdx
  __int64 v145; // rbx
  __int64 v146; // rdi
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rax
  int v149; // eax
  unsigned int v150; // eax
  unsigned int v151; // eax
  unsigned int v152; // ecx
  unsigned __int64 InterruptRateDecayTime; // rcx
  unsigned __int64 v154; // rbx
  int v155; // eax
  int v156; // eax
  int ExitSamplingCountdown; // eax
  __int64 v158; // r9
  __int64 v159; // r15
  unsigned int v160; // edi
  struct _KPRCB *v161; // rbx
  int v162; // edi
  int v163; // eax
  int v164; // eax
  int v165; // eax
  __int64 v166; // r15
  __int64 v167; // rdx
  __int64 v168; // rdx
  int v169; // ecx
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned __int64 v183; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v185; // rcx
  unsigned __int64 v186; // rax
  unsigned __int64 v187; // rax
  __int64 InternalData; // rax
  __int64 v189; // rax
  __int64 v190; // r12
  signed __int64 v191; // rdx
  __int64 v192; // rbx
  __int64 v193; // rax
  unsigned __int64 v194; // r10
  signed __int64 v195; // rax
  int v196; // r9d
  __int64 v197; // r8
  __int64 v198; // rcx
  unsigned __int64 v199; // r8
  __int64 v200; // rdx
  __int64 v201; // rbx
  __int64 v202; // rax
  unsigned __int64 v203; // r10
  signed __int64 v204; // rax
  int v205; // r9d
  __int64 v206; // r8
  __int64 v207; // rcx
  unsigned __int64 v208; // r8
  __int64 v209; // rdx
  __int64 v210; // r8
  bool v211; // bl
  ULONG_PTR v212; // rdi
  __int64 v213; // rax
  int v214; // eax
  int v215; // eax
  int v216; // eax
  unsigned __int8 v217; // al
  int v218; // eax
  int v219; // ecx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v221; // al
  struct _KPRCB *v222; // r9
  int v223; // eax
  unsigned int v224; // r9d
  __int64 v225; // r10
  __int64 v226; // rdx
  unsigned int v227; // r13d
  __int64 v228; // rdx
  __int64 v229; // rcx
  int v230; // ecx
  int v231; // r9d
  __int64 v232; // rdx
  __int64 v233; // rax
  unsigned __int64 v234; // rdx
  __int64 v235; // rcx
  unsigned __int64 v236; // rdx
  unsigned int v237; // r12d
  __int64 v238; // rdx
  __int64 v239; // r8
  __int64 v240; // r13
  unsigned __int32 v241; // eax
  unsigned __int32 v242; // r9d
  signed __int32 v243; // ecx
  signed __int32 v244[8]; // [rsp+0h] [rbp-498h] BYREF
  unsigned __int8 v245; // [rsp+40h] [rbp-458h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-457h]
  unsigned int v247; // [rsp+44h] [rbp-454h]
  char v248; // [rsp+48h] [rbp-450h]
  unsigned __int8 v249[3]; // [rsp+49h] [rbp-44Fh] BYREF
  int v250; // [rsp+4Ch] [rbp-44Ch]
  char v251; // [rsp+50h] [rbp-448h]
  char v252; // [rsp+51h] [rbp-447h]
  char v253; // [rsp+52h] [rbp-446h]
  int v254; // [rsp+54h] [rbp-444h]
  unsigned int v255; // [rsp+58h] [rbp-440h]
  unsigned int v256; // [rsp+5Ch] [rbp-43Ch]
  int v257; // [rsp+60h] [rbp-438h]
  int v258; // [rsp+68h] [rbp-430h] BYREF
  int v259; // [rsp+6Ch] [rbp-42Ch] BYREF
  int v260; // [rsp+70h] [rbp-428h]
  int v261; // [rsp+74h] [rbp-424h]
  __int64 v262; // [rsp+78h] [rbp-420h]
  unsigned __int64 v263; // [rsp+80h] [rbp-418h]
  int v264; // [rsp+88h] [rbp-410h] BYREF
  unsigned __int64 v265; // [rsp+90h] [rbp-408h] BYREF
  __int64 v266; // [rsp+98h] [rbp-400h]
  __int64 v267; // [rsp+A0h] [rbp-3F8h]
  signed __int64 v268; // [rsp+A8h] [rbp-3F0h]
  __int64 v269; // [rsp+B0h] [rbp-3E8h]
  __int64 v270; // [rsp+B8h] [rbp-3E0h]
  unsigned __int16 v271; // [rsp+C0h] [rbp-3D8h]
  int v272; // [rsp+C2h] [rbp-3D6h]
  __int16 v273; // [rsp+C6h] [rbp-3D2h]
  int v274; // [rsp+C8h] [rbp-3D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-3C8h]
  ULONG_PTR v276; // [rsp+D8h] [rbp-3C0h]
  _QWORD v277[2]; // [rsp+E0h] [rbp-3B8h] BYREF
  __int128 v278; // [rsp+F0h] [rbp-3A8h] BYREF
  __int64 v279; // [rsp+100h] [rbp-398h]
  __int128 v280; // [rsp+108h] [rbp-390h] BYREF
  __int128 v281; // [rsp+118h] [rbp-380h]
  __int128 v282; // [rsp+128h] [rbp-370h]
  __int128 v283; // [rsp+138h] [rbp-360h] BYREF
  _QWORD v284[2]; // [rsp+148h] [rbp-350h] BYREF
  _QWORD v285[3]; // [rsp+158h] [rbp-340h] BYREF
  _OWORD v286[8]; // [rsp+170h] [rbp-328h] BYREF
  __int64 v287; // [rsp+1F0h] [rbp-2A8h]
  _QWORD v288[34]; // [rsp+200h] [rbp-298h] BYREF
  _DWORD v289[68]; // [rsp+310h] [rbp-188h] BYREF
  __int64 v290; // [rsp+420h] [rbp-78h] BYREF
  int v291; // [rsp+428h] [rbp-70h]
  int v292; // [rsp+42Ch] [rbp-6Ch]
  unsigned int v293; // [rsp+490h] [rbp-8h]
  void *retaddr; // [rsp+498h] [rbp+0h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v9 = BugCheckParameter4 + 33672;
  v287 = 0LL;
  DeepSleep = 0;
  v10 = 0;
  v251 = 0;
  v11 = BugCheckParameter4;
  LOBYTE(v257) = 0;
  LOBYTE(v260) = 0;
  v252 = 0;
  v248 = 0;
  v254 = -1;
  v264 = -1;
  v267 = *(_QWORD *)(v8 + 680);
  BugCheckParameter2 = (unsigned int)a2;
  memset(v286, 0, sizeof(v286));
  v265 = a4;
  v247 = a3;
  v256 = a2;
  v276 = BugCheckParameter4;
  v263 = 0LL;
  v261 = 0;
  v258 = 7;
  v262 = v8 + 344LL * (unsigned int)a2;
  v253 = 0;
  v250 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 731) || *(_BYTE *)(v8 + 344LL * (unsigned int)a2 + 1445) )
  {
    v245 = 0;
    v249[0] = 3;
  }
  else
  {
    v245 = 1;
    v249[0] = 4;
  }
  v255 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
    {
      LOBYTE(a2) = 1;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 33672, a2);
    }
    v98 = (unsigned __int16 *)(v8 + 336);
    *(_QWORD *)(v8 + 336) = 2097153LL;
    memset((void *)(v8 + 344), 0, 0x100uLL);
    v99 = *(_DWORD *)(v8 + 740);
    v100 = *(_QWORD *)(v8 + 744);
    v279 = 0LL;
    v277[1] = &v278;
    v101 = 0;
    v277[0] = 1LL;
    v278 = 0LL;
    LOBYTE(v278) = 1;
    BYTE2(v278) = 1;
    if ( v99 )
    {
      v141 = (_BYTE *)(v100 + 4);
      do
      {
        if ( *v141 != 0xFF )
        {
          v142 = *((unsigned int *)v141 - 1);
          DWORD1(v278) = (unsigned __int8)*v141;
          Prcb = KeGetPrcb(v142);
          v250 = PpmTestAndLockProcessor(Prcb, v8 + 336, v277);
          if ( v250 < 0 )
          {
            v9 = v11 + 33672;
            goto LABEL_245;
          }
        }
        ++v101;
        v141 += 8;
      }
      while ( v101 < v99 );
      v9 = v11 + 33672;
    }
    v102 = *(_QWORD *)(v8 + 344);
    v280 = 0LL;
    v270 = v102;
    v281 = 0LL;
    v272 = 0;
    v273 = 0;
    v271 = 0;
    v269 = v8 + 336;
LABEL_138:
    v103 = v271;
    v274 = 0;
    v104 = v8 == -336 ? v271 + 1 : *v98;
    if ( v102 )
    {
LABEL_241:
      _BitScanForward64(&v144, v102);
      v274 = v144;
      v270 = v102 & ~(1LL << v144);
      v145 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v103
                                                                        + (unsigned __int8)v144]);
      v281 = (unsigned __int64)v145;
      v146 = *(_QWORD *)(v145 + 33600);
      *(_QWORD *)&v280 = 0LL;
      *((_QWORD *)&v280 + 1) = PopIdleTransitionTimeout;
      BYTE12(v281) = 1;
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v146 + 664))(*(_QWORD *)(v146 + 680)) )
        {
          v102 = v270;
          goto LABEL_138;
        }
        if ( (*(_DWORD *)(v145 + 33672) & 0xFF000000) != 0x5000000 )
          break;
        PpmIdleTransitionStall(&v280);
      }
      a4 = 3221225514LL;
    }
    else
    {
      while ( 1 )
      {
        LOWORD(v103) = v103 + 1;
        v271 = v103;
        if ( (unsigned __int16)v103 >= v104 )
          break;
        v102 = *(_QWORD *)&v98[4 * (unsigned __int16)v103 + 4];
        v270 = v102;
        v103 = v271;
        if ( v102 )
          goto LABEL_241;
      }
      a4 = 0LL;
    }
    v250 = a4;
    if ( (int)a4 < 0 )
    {
LABEL_245:
      if ( a8 )
        PpmIdleSetSynchronizationState(v9, 0LL);
      v255 = 1;
      goto LABEL_266;
    }
  }
  v12 = *(_WORD *)(v8 + 336);
  v13 = 0LL;
  if ( v12 )
  {
    while ( !*(_QWORD *)(v8 + 8LL * (unsigned __int16)v13 + 344) )
    {
      LOWORD(v13) = (_WORD)v13 + 1;
      if ( (unsigned __int16)v13 >= v12 )
        goto LABEL_7;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_7:
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(v11 + 34112) != 5 )
  {
    v18 = *(_QWORD *)(v11 + 33976);
    if ( v18 && *(_BYTE *)(v18 + 125) )
    {
      v16 = 1;
      _disable();
      v17 = (v293 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 128));
    }
    if ( (*(_BYTE *)(v11 + 34120) & 0x20) == 0 )
    {
      v147 = __rdtsc();
      v13 = (KSPIN_LOCK *)(v147 - *(_QWORD *)(v11 + 34096));
      v148 = *(_QWORD *)(v11 + 34104);
      if ( (unsigned __int64)v13 < v148 && !*(_BYTE *)(v11 + 34061) )
      {
        v149 = *(_DWORD *)(v11 + 236);
        v14 = 1;
        if ( (v149 & 0x300) == 0 )
        {
          v15 = 1;
          v150 = v149 & 0xFFFFFCFF | 0x100;
LABEL_262:
          *(_DWORD *)(v11 + 236) = v150;
          KeUpdatePendingQosRequest(v11);
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      *(_QWORD *)(v11 + 34096) = v147;
      *(_BYTE *)(v11 + 34061) = (unsigned __int64)v13 >= 2 * v148;
    }
    *(_DWORD *)(v11 + 34112) = 5;
    PpmPerfArbitratorApplyProcessorState(v11, 1u, 0, a4);
    *(_BYTE *)(v11 + 236) = 5;
  }
  v19 = *(_DWORD *)(v11 + 236);
  if ( (v19 & 0x300) != 0 )
  {
    v150 = v19 & 0xFFFFFCFF;
    goto LABEL_262;
  }
LABEL_9:
  if ( v16 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v18 + 128));
    if ( v17 )
      _enable();
  }
  if ( !v15 )
  {
    v20 = v245;
    v21 = v256;
    v22 = v262;
    *(_BYTE *)(v11 + 33656) = v245;
    *(_DWORD *)(v11 + 33660) = v21;
    if ( a8 )
    {
      LOBYTE(v21) = 2;
      *(_BYTE *)(v11 + 33657) = *(_BYTE *)(v22 + 1442) == 0;
      PpmIdleSetSynchronizationState(v11 + 33672, v21);
    }
    if ( v14 || *(_BYTE *)(v8 + 6) || *(_BYTE *)(v8 + 7) )
    {
      v111 = -1LL;
      v252 = 1;
      if ( *(_BYTE *)(v8 + 6) )
      {
        if ( KiClockTimerPerCpuTickScheduling && (v151 = *(_DWORD *)(v8 + 32), v151 > 1) )
        {
          v152 = *(_DWORD *)(344LL * (v151 - 1) + v8 + 1388);
          if ( v152 && v152 <= KeMaximumIncrement )
          {
            InterruptRateDecayTime = (unsigned int)KeGetInterruptRateDecayTime(v11, KeMaximumIncrement / v152 - 1);
          }
          else
          {
            InterruptRateDecayTime = *(_QWORD *)(v8 + 712);
            if ( InterruptRateDecayTime <= (unsigned int)KeMaximumIncrement )
              InterruptRateDecayTime = (unsigned int)KeMaximumIncrement;
          }
          v112 = a7;
          v111 = a7 + InterruptRateDecayTime;
        }
        else
        {
          v154 = *(_QWORD *)(v8 + 712);
          v112 = a7;
          if ( v154 <= (unsigned int)KeMaximumIncrement )
            v154 = (unsigned int)KeMaximumIncrement;
          v111 = a7 + (unsigned int)KeMaximumIncrement + v154;
        }
      }
      else
      {
        v112 = a7;
      }
      if ( *(_BYTE *)(v8 + 7) )
      {
        v113 = PpmCurrentProfile[534 * dword_140C232CC + 24];
        if ( v111 >= v112 + (unsigned __int64)(unsigned int)(10 * v113) )
          v111 = v112 + (unsigned int)(10 * v113);
      }
      if ( v14 && v111 >= v112 + PpmPerfQosIdleExpirationTimeout )
        v111 = v112 + PpmPerfQosIdleExpirationTimeout;
      v114 = KiClockTimerPerCpuTickScheduling == 0;
      *(_QWORD *)(v11 + 33648) = v111;
      if ( v114 )
      {
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(v11 + 192) + 72LL),
          *(unsigned __int8 *)(v11 + 209));
      }
      else
      {
        KiSetClockTimer(v11, v111, 0, 5, 0, *(_BYTE *)(v8 + 732) == 0);
        v20 = v245;
      }
    }
    v266 = 2LL;
    if ( *(_BYTE *)(v22 + 1441) || v14 )
    {
LABEL_34:
      v38 = *(_QWORD *)(v11 + 34040);
      v268 = v38;
      if ( v38 )
      {
        _disable();
        v118 = (v293 & 0x200) != 0;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v38);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v163 = SchedulerAssist[6];
              SchedulerAssist[6] = v163 + 1;
              if ( v163 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
          {
            v139 = CurrentPrcb->SchedulerAssist;
            if ( v139 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v164 = v139[6] - 1;
                v139[6] = v164;
                if ( !v164 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v38);
          }
        }
        v121 = *(_QWORD *)(v38 + 16);
        v122 = *(unsigned int *)(v38 + 12);
        if ( a6 > v121 )
        {
          *(_QWORD *)(v38 + 16) = a6;
          *(_QWORD *)(v38 + 24) += a6 - v121;
          *(_QWORD *)(v38 + 8 * v122 + 328) += a6 - v121;
        }
        *(_DWORD *)(v38 + 12) = v122 - 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v38, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v38, 0LL);
        v123 = KeGetCurrentPrcb();
        v124 = v123->SchedulerAssist;
        if ( v124 )
        {
          if ( v123->NestingLevel <= 1u )
          {
            v165 = v124[6] - 1;
            v124[6] = v165;
            if ( !v165 )
              KiRemoveSystemWorkPriorityKick(v123);
          }
        }
        if ( v118 )
          _enable();
        v125 = *(KSPIN_LOCK **)(v11 + 34048);
        if ( v125 )
          PpmIdleUpdateConcurrency(v125);
      }
      *(_DWORD *)(v8 + 20) = v256;
      v39 = __rdtsc();
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        v40 = __readmsr(0xDB2u);
      else
        v40 = 0LL;
      v41 = a6 - *(_QWORD *)(v11 + 33720);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 33736), v41);
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v11 + 33808) += PpmConvertTime(v41, v39 - *(_QWORD *)(v11 + 33688), v40 - *(_QWORD *)(v11 + 33800));
      v42 = *(_QWORD *)(v11 + 33688);
      *(_QWORD *)(v11 + 33720) = a6;
      if ( v39 > v42 )
        *(_QWORD *)(v11 + 33696) += v39 - v42;
      *(_QWORD *)(v11 + 33688) = v39;
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v11 + 33800) = v40;
      LOBYTE(a4) = 1;
      PpmUpdatePerformanceFeedback(v11, 0, 0, a4, 0LL);
      if ( PopSnapEnergyCounters )
        PopSnapEnergyCounters(*(unsigned int *)(v11 + 36), 0LL, 0LL);
      *(_QWORD *)(v11 + 33640) = a6;
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 33632));
      v43 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v8 + 608);
      v44 = v247;
      if ( v43 )
      {
        v45 = v43(v267, v256, v247, *(unsigned int *)(v8 + 1084), *(_QWORD *)(v8 + 1096));
        v250 = v45;
      }
      else
      {
        v45 = v250;
      }
      if ( v45 >= 0 )
      {
        v46 = *(_QWORD *)(v8 + 1096);
        LODWORD(v47) = *(_DWORD *)(v8 + 1084);
        v248 = 1;
        if ( v247 != -1 )
        {
          v166 = PpmPlatformStates + 448LL * v247;
          PpmEventEnterPlatformIdleState(v247);
          if ( !qword_140C54280 && v247 == dword_140C542C0 )
            _InterlockedCompareExchange64(&qword_140C54280, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
          {
            *(_BYTE *)(PpmPlatformStates + 56) = 1;
            ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
          }
          if ( *(_BYTE *)(v166 + 120) )
          {
            LOBYTE(v167) = 1;
            KdPowerTransitionEx(2147483652LL, v167);
            KdCallPowerHandlers(4LL);
          }
          v44 = v247;
        }
        if ( (_DWORD)v47 )
        {
          if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            v290 = v46;
            v291 = 4 * v47;
            v292 = 0;
            EtwTraceKernelEvent((unsigned int)&v290, 1, 1073774592, 4671, 1538);
          }
          do
          {
            v47 = (unsigned int)(v47 - 1);
            v168 = PpmPlatformStates + 448LL * *(unsigned int *)(v46 + 4 * v47);
            *(_QWORD *)(v168 + 424) = a6;
            v169 = *(_DWORD *)(v168 + 416);
            if ( !*(_DWORD *)(PpmPlatformStates + 4) )
              v169 ^= ((unsigned __int16)v169 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
            *(_DWORD *)(v168 + 416) = v169 & 0xF8FFFFFF | 0x4000000;
          }
          while ( (_DWORD)v47 );
        }
        if ( v44 != -1 )
          *(_WORD *)(v8 + 48) |= 0x10u;
        v48 = *(_WORD *)(v8 + 48);
        v49 = *(_QWORD *)(v8 + 704);
        v50 = *(_BYTE *)(v8 + 733);
        v283 = 0LL;
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          LODWORD(v283) = v256;
          WORD3(v283) = v50;
          *((_QWORD *)&v283 + 1) = v49;
          v284[0] = &v283;
          WORD2(v283) = v48;
          v284[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v284, 1, 1073774592, 4665, 1538);
        }
        if ( a8 )
          PpmIdleSetSynchronizationState(v11 + 33672, v249[0]);
        if ( v251 )
        {
          DeepSleep = 0;
          if ( *(_BYTE *)(v262 + 1440) >= 2u && (HvlEnlightenments & 4) == 0 )
          {
            v51 = byte_140C0B230;
            v282 = 0LL;
            if ( byte_140C0B230 == -1 )
            {
              _RAX = 1LL;
              __asm { cpuid }
              v51 = 0;
              *(_QWORD *)&v282 = __PAIR64__(_RBX, _RAX);
              *((_QWORD *)&v282 + 1) = __PAIR64__(_RDX, _RCX);
              if ( (int)_RCX < 0 )
              {
                _RAX = 1073741825LL;
                __asm { cpuid }
                *(_QWORD *)&v282 = __PAIR64__(_RBX, _RAX);
                v51 = (_DWORD)_RAX == 1986945624;
                *((_QWORD *)&v282 + 1) = __PAIR64__(_RDX, _RCX);
              }
              byte_140C0B230 = v51;
            }
            if ( !v51 )
            {
              v52 = KeGetCurrentPrcb();
              if ( v52->CpuVendor == 1 )
              {
                DeepSleep = 0;
              }
              else
              {
                Number = v52->Number;
                v52->DeepSleep = 1;
                LODWORD(Number) = KiProcessorIndexToNumberMappingTable[Number];
                v54 = Number & 0x3F;
                v55 = (unsigned int)Number >> 6;
                if ( (unsigned __int16)word_140C2AF62 > (unsigned int)v55 )
                  _InterlockedOr64((volatile signed __int64 *)&KeSleepingProcessors[8 * v55 + 8], 1LL << v54);
                if ( !v52->DeepSleep )
                {
                  KeInterlockedClearProcessorAffinityEx(KeSleepingProcessors, v52->Number, v54);
                  if ( KiFlushPcid )
                  {
                    v183 = __readcr3();
                    __writecr3(v183);
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( !Process->AddressPolicy )
                      KiSetUserTbFlushPending(Process, v180, v181, v182);
                  }
                  else
                  {
                    v185 = __readcr4();
                    if ( (v185 & 0x20080) != 0 )
                    {
                      __writecr4(v185 ^ 0x80);
                      __writecr4(v185);
                    }
                    else
                    {
                      v186 = __readcr3();
                      __writecr3(v186);
                    }
                  }
                }
                DeepSleep = v52->DeepSleep;
              }
            }
          }
        }
        if ( (*(_BYTE *)(v11 + 1762) & 1) != 0 && (v94 = *(_WORD *)(v11 + 1764)) != 0 )
        {
          *(_WORD *)(v11 + 1760) |= 1u;
          v56 = v94;
        }
        else
        {
          v56 = 0;
        }
        _m_prefetchw((const void *)(v11 + 1772));
        v57 = *(_WORD *)(v11 + 1772) & 4;
        if ( v57 )
        {
          if ( (*(_BYTE *)(v11 + 1760) & 1) != 0 )
          {
            v138 = *(_WORD *)(v11 + 1764);
            if ( (v138 & 3) == 0 )
            {
              v56 |= 2u;
              *(_WORD *)(v11 + 1764) = v138 | 2;
              __writemsr(0x48u, v138 | 2u);
            }
          }
          _InterlockedOr16((volatile signed __int16 *)(v11 + 1772), 2u);
          v92 = *(_QWORD *)(v11 + 11696);
          _m_prefetchw((const void *)(v92 + 1772));
          do
            v93 = *(_WORD *)(v92 + 1772);
          while ( v93 != _InterlockedCompareExchange16((volatile signed __int16 *)(v92 + 1772), v93 & 0xFFE4 | 0xA, v93) );
        }
        v58 = v44;
        v59 = v256;
        v250 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _DWORD, _DWORD, _QWORD))(v8 + 616))(
                 v267,
                 v265,
                 v256,
                 v58,
                 v56,
                 *(_DWORD *)(v8 + 1084),
                 *(_QWORD *)(v8 + 1096));
        v60 = v250;
        if ( v57 )
        {
          v95 = *(_QWORD *)(v11 + 11696);
          _m_prefetchw((const void *)(v95 + 1772));
          do
            v96 = *(_WORD *)(v95 + 1772);
          while ( v96 != _InterlockedCompareExchange16((volatile signed __int16 *)(v95 + 1772), v96 & 0xFFF5 | 2, v96) );
          if ( (*(_WORD *)(v11 + 1772) & 0x10) == 0 )
          {
            v97 = *(_WORD *)(v11 + 1764);
            if ( (v97 & 2) != 0 )
            {
              *(_WORD *)(v11 + 1764) = v97 & 0xFFFD;
              __writemsr(0x48u, v97 & 0xFFFD);
            }
          }
        }
        *(_WORD *)(v11 + 1760) &= ~1u;
        if ( DeepSleep )
        {
          v105 = *(_BYTE *)(v11 + 33114);
          DeepSleep = 0;
          if ( v105 )
          {
            v106 = KeGetCurrentPrcb();
            v107 = v106->Number;
            v106->DeepSleep = 0;
            LODWORD(v107) = KiProcessorIndexToNumberMappingTable[v107];
            v108 = v107 & 0x3F;
            v109 = (unsigned int)v107 >> 6;
            if ( (unsigned __int16)word_140C2AF62 > v109 )
              _InterlockedAnd64((volatile signed __int64 *)&KeSleepingProcessors[8 * v109 + 8], ~(1LL << v108));
            v110 = __readcr4();
            v60 = v250;
            if ( (v110 & 0x20080) != 0 )
            {
              __writecr4(v110 ^ 0x80);
              __writecr4(v110);
            }
            else
            {
              v187 = __readcr3();
              __writecr3(v187);
            }
          }
        }
        if ( *(int *)(v8 + 64) < 0 )
        {
          if ( v60 >= 0 )
            v60 = *(_DWORD *)(v8 + 64);
          v250 = v60;
        }
        v265 = 0LL;
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v265 = __PAIR64__(v60, v59);
          v285[0] = &v265;
          v285[1] = 8LL;
          EtwTraceKernelEvent((unsigned int)v285, 1, 1073774592, 4666, 1538);
        }
      }
      v61 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        v62 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
            v91 = *(_QWORD *)(HalpPerformanceCounter + 72)
                + KeGetPcr()->Prcb.Number * *(_DWORD *)(HalpPerformanceCounter + 80);
          else
            v91 = *(_QWORD *)(HalpPerformanceCounter + 72);
          v67 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v91)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
          goto LABEL_79;
        }
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v189 = (*(__int64 (__fastcall **)(__int64))(v61 + 112))(InternalData);
          v190 = *(_QWORD *)(v61 + 208);
          v191 = v189;
        }
        else
        {
          do
          {
            v190 = *(_QWORD *)(v61 + 208);
            do
            {
              v192 = *(_QWORD *)(v61 + 200);
              v193 = HalpTimerGetInternalData(v61);
              v194 = (*(__int64 (__fastcall **)(__int64))(v61 + 112))(v193);
              _InterlockedOr(v244, 0);
              v195 = *(_QWORD *)(v61 + 200);
            }
            while ( v192 != v195 );
          }
          while ( v190 != *(_QWORD *)(v61 + 208) );
          v196 = *(_DWORD *)(v61 + 220);
          if ( ((v192 ^ v194) & (1LL << ((unsigned __int8)v196 - 1))) != 0 )
          {
            if ( v196 == 64 )
              v197 = -1LL;
            else
              v197 = (1LL << v196) - 1;
            v198 = 0LL;
            if ( v196 != 64 )
              v198 = 1LL << v196;
            v199 = v192 & v197;
            v191 = v194 | v192 ^ v199;
            if ( v194 < v199 )
              v191 += v198;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v61 + 200), v191, v195);
          }
          else
          {
            if ( v196 == 64 )
              v200 = -1LL;
            else
              v200 = (1LL << v196) - 1;
            v191 = v194 | v192 & ~v200;
          }
        }
        v67 = HalpTimerScaleCounter(v190 + v191, *(_QWORD *)(v61 + 192), 10000000LL);
      }
      else
      {
        v62 = *(_QWORD *)(HalpPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v63 = HalpTimerGetInternalData(HalpPerformanceCounter);
          v64 = (*(__int64 (__fastcall **)(__int64))(v61 + 112))(v63);
          v65 = *(_QWORD *)(v61 + 208);
          v66 = v64;
        }
        else
        {
          do
          {
            v65 = *(_QWORD *)(v61 + 208);
            do
            {
              v201 = *(_QWORD *)(v61 + 200);
              v202 = HalpTimerGetInternalData(v61);
              v203 = (*(__int64 (__fastcall **)(__int64))(v61 + 112))(v202);
              _InterlockedOr(v244, 0);
              v204 = *(_QWORD *)(v61 + 200);
            }
            while ( v201 != v204 );
          }
          while ( v65 != *(_QWORD *)(v61 + 208) );
          v205 = *(_DWORD *)(v61 + 220);
          if ( ((v201 ^ v203) & (1LL << ((unsigned __int8)v205 - 1))) != 0 )
          {
            if ( v205 == 64 )
              v206 = -1LL;
            else
              v206 = (1LL << v205) - 1;
            v207 = 0LL;
            if ( v205 != 64 )
              v207 = 1LL << v205;
            v208 = v201 & v206;
            v66 = v203 | v201 ^ v208;
            if ( v203 < v208 )
              v66 += v207;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v61 + 200), v66, v204);
          }
          else
          {
            if ( v205 == 64 )
              v209 = -1LL;
            else
              v209 = (1LL << v205) - 1;
            v66 = v203 | v201 & ~v209;
          }
        }
        v67 = v65 + v66;
      }
      v38 = v268;
LABEL_79:
      v263 = v67;
      if ( v61 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
      {
        v68 = v263;
      }
      else
      {
        v210 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
        if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
          v210 = 10000000LL;
        v68 = HalpTimerScaleCounter(v67, v62, v210);
        v263 = v68;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 33632));
      *(_QWORD *)(v11 + 33640) = 0LL;
      if ( *(_BYTE *)(v11 + 33817) )
      {
        _disable();
        v211 = (v293 & 0x200) != 0;
        KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 33680));
        v212 = v11 + 33704;
        v213 = 2LL;
        do
        {
          if ( *(_QWORD *)v212 && *(_BYTE *)(*(_QWORD *)v212 + 34LL) )
          {
            PpmPerfFeedbackCounterUpdate();
            v213 = v266;
          }
          v212 += 8LL;
          v266 = --v213;
        }
        while ( v213 );
        KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 33680));
        if ( v211 )
          _enable();
      }
      v69 = __rdtsc();
      if ( _bittest64((const signed __int64 *)(v11 + 35232), 0x27u) )
        v13 = (KSPIN_LOCK *)__readmsr(0xDB2u);
      else
        v13 = 0LL;
      *(_QWORD *)(v11 + 33720) = v68;
      *(_QWORD *)(v11 + 33688) = v69;
      if ( _bittest64((const signed __int64 *)(v11 + 35232), 0x27u) )
        *(_QWORD *)(v11 + 33800) = v13;
      if ( v38 )
      {
        v126 = 0LL;
        _disable();
        v127 = v293 >> 9;
        LOBYTE(v127) = (v293 & 0x200) != 0;
        v293 = v127;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v38);
        }
        else
        {
          v128 = KeGetCurrentPrcb();
          v129 = v128->SchedulerAssist;
          if ( v129 )
          {
            if ( v128->NestingLevel <= 1u )
            {
              v214 = v129[6];
              v129[6] = v214 + 1;
              if ( v214 == -1 )
                KiRemoveSystemWorkPriorityKick(v128);
            }
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
          {
            v140 = v128->SchedulerAssist;
            if ( v140 )
            {
              if ( v128->NestingLevel <= 1u )
              {
                v215 = v140[6] - 1;
                v140[6] = v215;
                if ( !v215 )
                  KiRemoveSystemWorkPriorityKick(v128);
              }
            }
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v38);
          }
        }
        v130 = *(_QWORD *)(v38 + 16);
        v131 = *(unsigned int *)(v38 + 12);
        if ( v68 > v130 )
        {
          *(_QWORD *)(v38 + 16) = v68;
          v126 = v68 - v130;
          *(_QWORD *)(v38 + 24) += v68 - v130;
          *(_QWORD *)(v38 + 8 * v131 + 328) += v68 - v130;
        }
        *(_DWORD *)(v38 + 12) = v131 + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v38, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v38, 0LL);
        v132 = KeGetCurrentPrcb();
        v133 = v132->SchedulerAssist;
        if ( v133 )
        {
          if ( v132->NestingLevel <= 1u )
          {
            v216 = v133[6] - 1;
            v133[6] = v216;
            if ( !v216 )
              KiRemoveSystemWorkPriorityKick(v132);
          }
        }
        if ( (_BYTE)v293 )
          _enable();
        if ( !(_DWORD)v131 && v126 )
        {
          v136 = 0;
          v137 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
          while ( 1 )
          {
            if ( v126 < *v137 )
              goto LABEL_197;
            if ( v126 < v137[3] )
            {
              ++v136;
LABEL_197:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8LL * v136 + 32), v126);
              goto LABEL_189;
            }
            if ( v126 < v137[6] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8LL * (v136 + 2) + 32), v126);
              goto LABEL_189;
            }
            if ( v126 < v137[9] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8LL * (v136 + 3) + 32), v126);
              goto LABEL_189;
            }
            if ( v126 < v137[12] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8LL * (v136 + 4) + 32), v126);
              goto LABEL_189;
            }
            if ( v126 < v137[15] )
              break;
            v137 += 18;
            v136 += 6;
            if ( v136 >= 0x24 )
              goto LABEL_197;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8LL * (v136 + 5) + 32), v126);
        }
LABEL_189:
        v13 = *(KSPIN_LOCK **)(v11 + 34048);
        if ( v13 )
          PpmIdleUpdateConcurrency(v13);
      }
      *(_QWORD *)(v11 + 33616) = v68 - a6;
      if ( a8 )
      {
        v217 = PpmIdleSetSynchronizationState(v11 + 33672, 0LL);
        v70 = v250;
        if ( v250 >= 0 && v217 != 8 && v245 )
          KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v217, v11);
        *(_BYTE *)(v11 + 33657) = 0;
      }
      else
      {
        v70 = v250;
      }
      v71 = v248;
      if ( !v251 )
      {
        v72 = 3;
        goto LABEL_98;
      }
      if ( v248
        && v70 >= 0
        && PpmPlatformStates
        && *(_BYTE *)(PpmPlatformStates + 56)
        && PpmDripsStateIndex != -1
        && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
      {
        v218 = KeQueryWakeSource(&v258, v286);
        v219 = v258;
        v72 = 3;
        if ( v218 < 0 )
          v219 = 3;
        v258 = v219;
      }
      else
      {
        v72 = 3;
      }
      goto LABEL_94;
    }
    v23 = *(_QWORD *)(v11 + 200);
    v24 = *(_QWORD *)(v11 + 192);
    v251 = 1;
    _m_prefetchw((const void *)(v24 + 64));
    v25 = _InterlockedOr64((volatile signed __int64 *)(v24 + 64), v23);
    v26 = *(_QWORD *)(v11 + 33600);
    v27 = 0;
    v28 = v247;
    v29 = v25;
    v268 = v25;
    v261 = 0;
    if ( v20 )
    {
      v261 = 1;
    }
    else if ( v247 == -1 )
    {
      v30 = 0;
      if ( *(_WORD *)(v26 + 336) )
      {
        v31 = (unsigned __int64 *)(v26 + 344);
        v32 = *(unsigned __int16 *)(v26 + 336);
        do
        {
          v33 = *v31++;
          v30 += (unsigned int)((0x101010101010101LL
                               * ((((v33 - ((v33 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v33 - ((v33 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v33 - ((v33 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v33 - ((v33 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v32;
        }
        while ( v32 );
        v11 = v276;
        v29 = v268;
        v27 = 0;
        v28 = v247;
      }
      if ( v30 != (_DWORD)KeNumberProcessors_0 - 1 )
        goto LABEL_25;
      v20 = v245;
      v261 = 2;
    }
    v155 = *(_DWORD *)(v26 + 12);
    if ( v155 && (v156 = v155 - 1, (*(_DWORD *)(v26 + 12) = v156) != 0)
      || (ExitSamplingCountdown = PpmGetExitSamplingCountdown(), (*(_DWORD *)(v158 + 12) = ExitSamplingCountdown) == 0) )
    {
      v27 = 0;
      if ( v20 )
      {
LABEL_226:
        v34 = 0LL;
LABEL_26:
        v35 = ((__int64 (__fastcall *)(__int64))off_140C01D90[0])(v34);
        v36 = *(_DWORD *)(v11 + 13144);
        v250 = v35;
        if ( v36 )
        {
          v250 = -2147483631;
          goto LABEL_205;
        }
        if ( v35 < 0 )
        {
LABEL_205:
          if ( a8 )
            PpmIdleSetSynchronizationState(v11 + 33672, 0LL);
          v72 = 0;
          v71 = 0;
          v255 = 0;
LABEL_94:
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(*(_QWORD *)(v11 + 192) + 64LL),
            *(unsigned __int8 *)(v11 + 209));
          if ( DeepSleep && *(_BYTE *)(v11 + 33114) )
            KeWakeProcessor();
          if ( (_BYTE)v260 && v250 >= 0 )
            v73 = &v264;
          else
            v73 = 0LL;
          KeResumeClockTimerFromIdle(v73);
          off_140C01DA0();
          KeAccumulateTicks(v11, *(_DWORD *)(v11 + 13248), MEMORY[0xFFFFF78000000320], 0, 0);
          goto LABEL_98;
        }
        if ( *(_BYTE *)v8 != 1 )
        {
LABEL_29:
          if ( v27 )
            *(_WORD *)(v8 + 48) |= 0x200u;
          v37 = v245;
          if ( v245 )
          {
            v253 = 1;
            _InterlockedIncrement(&PpmNonInterruptibleCount);
            v161 = KeGetCurrentPrcb();
            v162 = KiClockTimerOwner;
            if ( (v161->PendingTickFlags & 1) != 0 )
            {
              off_140C01ED8[0]();
              v161->PendingTickFlags &= ~1u;
              v37 = v245;
              v161->ClockTimerState.ClockActive = 0;
            }
            if ( v161->Number == v162 )
              ++dword_140C2B148;
            v28 = v247;
            if ( v161->ClockOwner )
              v161->ClockOwner = 0;
          }
          if ( *(_BYTE *)(v8 + 732) )
          {
            LOBYTE(v134) = v260;
            if ( v27 )
            {
              v134 = (unsigned __int8)v260;
              if ( !v37 )
                v134 = 1;
              v260 = v134;
            }
            v135 = v257;
            if ( a5 && v28 != -1 && PpmDripsStateIndex != -1 && *(_BYTE *)v8 == 1 )
              v135 = 1;
            KePrepareClockTimerForIdle(a5, v135, *(_QWORD *)(v8 + 712), (unsigned __int8)v134);
          }
          else if ( KiClockTimerPerCpuTickScheduling && (_DWORD)KiClockTimerOwner != *(_DWORD *)(v11 + 36) )
          {
            KePrepareNonClockOwnerForIdle();
          }
          goto LABEL_34;
        }
        v115 = *(_QWORD *)(v11 + 200) | v29;
        v116 = *(unsigned __int8 *)(v11 + 208);
        memset(v288, 0, 0x108uLL);
        v117 = PpmPlatformStates;
        if ( !PpmPlatformStates )
        {
LABEL_163:
          v28 = v247;
          goto LABEL_29;
        }
        LODWORD(v288[0]) = 2097153;
        memset((char *)v288 + 4, 0, 0x104uLL);
        if ( (_WORD)v116 )
        {
          if ( WORD1(v288[0]) <= (unsigned __int16)v116 )
          {
LABEL_292:
            v159 = *(_QWORD *)(v8 + 1040);
            v160 = 0;
            if ( !*(_DWORD *)(v159 + 4) )
              goto LABEL_163;
            while ( *(_DWORD *)(v159 + 4LL * v160 + 8) != -1
                 || !(unsigned int)KeIsSubsetAffinityEx(
                                     v117 + 448LL * *(unsigned int *)(*(_QWORD *)(v8 + 1072) + 24LL * v160 + 4) + 128,
                                     (__int64)v288) )
            {
              if ( ++v160 >= *(_DWORD *)(v159 + 4) )
                goto LABEL_163;
            }
            v250 = -1073741802;
            goto LABEL_205;
          }
          LOWORD(v288[0]) = v116 + 1;
        }
        v288[v116 + 1] |= v115;
        goto LABEL_292;
      }
    }
    else
    {
      v27 = 1;
      *(_BYTE *)(v158 + 3) = 1;
      if ( v20 )
      {
        *(_QWORD *)(v158 + 56) = -1LL;
        goto LABEL_226;
      }
    }
LABEL_25:
    v34 = 1LL;
    goto LABEL_26;
  }
  v72 = 0;
  v250 = -1073741802;
  v255 = 0;
  if ( a8 )
  {
    PpmIdleSetSynchronizationState(v11 + 33672, 0LL);
LABEL_266:
    LOBYTE(v103) = 1;
    ((void (__fastcall *)(__int64))off_140C01FF8[0])(v103);
    v71 = 0;
LABEL_208:
    v75 = 1;
    v76 = 1;
    v77 = 1;
    v74 = 1LL;
    goto LABEL_101;
  }
  v71 = 0;
LABEL_98:
  LOBYTE(v13) = 1;
  ((void (__fastcall *)(KSPIN_LOCK *))off_140C01FF8[0])(v13);
  if ( v252 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( *(_BYTE *)(v262 + 1441) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v74 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          *(_DWORD *)(v74 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
          v72 = v255;
        }
        *(_BYTE *)(v11 + 37108) &= ~1u;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v221 = KeGetCurrentIrql();
            if ( v221 <= 0xFu && CurrentIrql <= 0xFu && v221 >= 2u )
            {
              v222 = KeGetCurrentPrcb();
              v74 = (__int64)v222->SchedulerAssist;
              v223 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v114 = (v223 & *(_DWORD *)(v74 + 20)) == 0;
              *(_DWORD *)(v74 + 20) &= v223;
              if ( v114 )
                KiRemoveSystemWorkPriorityKick(v222);
              v72 = v255;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        *(_BYTE *)(v11 + 37108) &= ~1u;
      }
    }
    else
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v11 + 192) + 72LL),
        *(unsigned __int8 *)(v11 + 209));
    }
    *(_QWORD *)(v11 + 33648) = -1LL;
  }
  if ( v72 != 3 )
    goto LABEL_208;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  LOBYTE(v74) = 0;
LABEL_101:
  v78 = 0;
  v249[0] = 0;
  v79 = -1;
  v259 = -1;
  if ( PpmPlatformStates )
  {
    if ( !v71 )
    {
      v224 = 0;
      if ( *(_DWORD *)(v8 + 1084) )
      {
        do
        {
          v225 = *(unsigned int *)(*(_QWORD *)(v8 + 1096) + 4LL * v224);
          v226 = PpmPlatformStates + 448 * v225;
          if ( (*(_DWORD *)(v226 + 416) & 0x3000000) == 0x1000000 )
            *(_DWORD *)(v226 + 416) = *(_DWORD *)(v226 + 416) & 0xFE000FFF | ((*(_DWORD *)(v226 + 416) & 0xFFF | 0x2000) << 12);
          if ( (_BYTE)v74 )
            ++*(_DWORD *)(1008 * v225 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
          ++v224;
        }
        while ( v224 < *(_DWORD *)(v8 + 1084) );
        v79 = -1;
      }
    }
    v227 = *(_DWORD *)PpmPlatformStates;
    while ( v227 )
    {
      v228 = *(unsigned int *)(v11 + 36);
      --v227;
      LOBYTE(v247) = 0;
      v262 = 448LL * v227 + PpmPlatformStates + 64;
      if ( (unsigned int)KeCheckProcessorAffinityEx(v262 + 64, v228)
        && (unsigned __int8)PpmExitCoordinatedIdleState(v262 + 352, v249) )
      {
        v74 = v262;
        v229 = v78++;
        *(_DWORD *)(*(_QWORD *)(v8 + 1096) + 4 * v229) = v227;
        if ( v78 == 1 && *(_BYTE *)(v74 + 57) )
        {
          v79 = v227;
          v254 = v227;
          if ( v248 )
          {
            v230 = v250;
            if ( v250 < 0 || v77 )
            {
              LOBYTE(v231) = v247;
            }
            else
            {
              LOBYTE(v231) = v247;
              if ( v227 == PpmDripsStateIndex && *(_BYTE *)(PpmPlatformStates + 56) )
              {
                v231 = (unsigned __int8)v247;
                if ( v258 != 7 )
                  v231 = 1;
                v247 = v231;
              }
            }
            if ( *(_BYTE *)(v74 + 56) )
            {
              KdCallPowerHandlers(1LL);
              LOBYTE(v232) = 1;
              KdPowerTransitionEx(2147483649LL, v232);
              v74 = v262;
              v79 = v227;
              LOBYTE(v231) = v247;
              v230 = v250;
            }
            if ( (PopSimulate & 0x100) != 0 && v230 >= 0 && !v76 && a5 && v227 == PpmDripsStateIndex )
              KeBugCheckEx(0xA0u, 0x599uLL, v227, 0LL, 0LL);
          }
          else
          {
            LOBYTE(v231) = v247;
          }
          *(_BYTE *)(PpmPlatformStates + 56) = 0;
        }
        else
        {
          v79 = v254;
          LOBYTE(v231) = v247;
        }
        if ( !v75 )
        {
          v233 = 1008LL * v227 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
          v234 = *(_QWORD *)(v74 + 360);
          v74 = v263;
          BugCheckParameter2 = v233;
          if ( v263 >= v234 )
          {
            v235 = v263 - v234;
            *(_QWORD *)(v233 + 32) += v263 - v234;
          }
          else
          {
            v235 = 0LL;
          }
          v266 = v235;
          if ( (_BYTE)v231 )
          {
            PopIdleWakeNotifyWakeSource(v79, v258, (unsigned int)v286, v234, v74, (__int64)&v259);
            v233 = BugCheckParameter2;
            v235 = v266;
            v79 = v254;
          }
          if ( v250 < 0 && v249[0] )
          {
            ++*(_DWORD *)(v233 + 4);
          }
          else
          {
            ++*(_DWORD *)(v233 + 8);
            PpmUpdatePlatformIdleAccounting(v233, v235);
          }
        }
      }
      else
      {
        v79 = v254;
      }
    }
    if ( v248 )
    {
      PpmEventCoordinatedIdleTransition(0LL, v78, *(_QWORD *)(v8 + 1096), &v259);
      v79 = v254;
    }
  }
  v80 = v255;
  *(_DWORD *)(v8 + 1084) = v78;
  if ( v80 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v8 + 648))(
      v267,
      v256,
      v79,
      v78,
      *(_QWORD *)(v8 + 1096));
  }
  else if ( !*(_BYTE *)v8 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v8 + 656))(v267, v80, v74);
  }
  LODWORD(v81) = *(_DWORD *)(v8 + 1084);
  for ( i = *(_QWORD *)(v8 + 1096);
        (_DWORD)v81;
        *(_DWORD *)(448LL * *(unsigned int *)(i + 4 * v81) + PpmPlatformStates + 416) = 0 )
  {
    v81 = (unsigned int)(v81 - 1);
  }
  if ( v253 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v289[0] = 2097153;
  memset(&v289[1], 0, 0x104uLL);
  v83 = KeGetPcr()->Prcb.Number;
  v84 = (unsigned __int16 *)(v8 + 336);
  v85 = *(_QWORD *)(v8 + 344);
  v86 = 0;
  while ( 1 )
  {
    v257 = 0;
    v87 = v84 ? *v84 : v86 + 1;
    if ( !v85 )
      break;
LABEL_493:
    _BitScanForward64(&v236, v85);
    v85 &= ~(1LL << v236);
    v257 = v236;
    v237 = KiProcessorNumberToIndexMappingTable[64 * v86 + (unsigned __int8)v236];
    v238 = KeGetPrcb(v237);
    v240 = *(_QWORD *)(v238 + 33600);
    _m_prefetchw((const void *)(v238 + 33672));
    v241 = *(_DWORD *)(v238 + 33672);
    do
    {
      v242 = v241;
      v243 = v241 ^ (v241 ^ (v241 - 1)) & 0xFFFFFF;
      if ( (v243 & 0xFFFFFF) == 0 )
      {
        v239 = HIBYTE(v241);
        if ( (_DWORD)v239 == 5 )
        {
          v243 = v243 & 0xFFFFFF | 0x4000000;
        }
        else if ( (_DWORD)v239 == 7 )
        {
          v243 = v243 & 0xFFFFFF | 0x6000000;
        }
      }
      v241 = _InterlockedCompareExchange((volatile signed __int32 *)(v238 + 33672), v243, v241);
    }
    while ( v241 != v242 );
    if ( HIBYTE(v243) == 6 )
      KeAddProcessorAffinityEx((unsigned __int16 *)v289, v237);
    KeInterlockedClearProcessorAffinityEx(v240 + 72, v83, v239);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)(v8 + 336), v237);
    v84 = (unsigned __int16 *)(v8 + 336);
  }
  while ( ++v86 < v87 )
  {
    v85 = *(_QWORD *)&v84[4 * v86 + 4];
    if ( v85 )
      goto LABEL_493;
  }
  v88 = v276;
  if ( LOWORD(v289[0]) )
  {
    while ( !*(_QWORD *)&v289[2 * v10 + 2] )
    {
      if ( ++v10 >= LOWORD(v289[0]) )
        goto LABEL_115;
    }
    HalRequestIpi(0, (__int64)v289);
  }
LABEL_115:
  v89 = v250;
  if ( *(_BYTE *)(v8 + 3) )
    PpmIdleCompleteExitLatencyTrace(v88, v250, v245, v263, v264, v261, v256, v254);
  result = v255;
  *(_DWORD *)(v8 + 68) = v255;
  *(_DWORD *)(v8 + 64) = v89;
  return result;
}
