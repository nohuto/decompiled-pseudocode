__int64 __fastcall KiDeferredReadySingleThread(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  bool v4; // zf
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  int v8; // edx
  int v9; // edi
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al
  char v14; // al
  int v15; // r15d
  int v16; // r14d
  int v17; // edx
  char v18; // r15
  unsigned __int64 *v19; // r14
  char v20; // al
  int v21; // edx
  bool v22; // di
  unsigned int v23; // eax
  unsigned __int8 v24; // di
  char v25; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v27; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned int v29; // eax
  __int64 v30; // r8
  char v31; // r10
  int v32; // r11d
  char v33; // r12
  int v34; // r8d
  int v35; // r9d
  char v36; // cl
  char v37; // al
  int v38; // r8d
  unsigned __int64 v39; // rcx
  bool v40; // r12
  unsigned __int8 v41; // r15
  unsigned int v42; // eax
  __int64 FirstSetLeftAffinity; // rdi
  unsigned __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 *v49; // rcx
  __int64 v50; // rdi
  unsigned __int16 *v51; // r10
  __int64 v52; // r8
  unsigned __int16 v53; // r11
  unsigned __int64 *v54; // r9
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r11
  char v61; // r10
  int v62; // eax
  __int64 v63; // rdx
  unsigned __int64 v64; // r8
  __int64 *v65; // rdx
  __int64 v66; // r9
  unsigned __int8 *v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // r11
  int v70; // edx
  _BYTE *v71; // rax
  __int64 *v72; // r9
  __int64 v73; // r10
  __int64 v74; // rax
  __int64 *v75; // r14
  __int64 v76; // r12
  unsigned __int64 v77; // r13
  unsigned __int8 v78; // r8
  char v79; // r14
  unsigned int v80; // r15d
  unsigned int j; // edi
  char v82; // al
  unsigned __int8 *v83; // rdx
  unsigned __int8 v84; // al
  unsigned __int64 *v85; // r9
  int v86; // edx
  __int64 result; // rax
  char *v88; // r15
  __int64 k; // r13
  char v90; // r12
  __int64 v91; // rdi
  int v92; // edx
  _WORD *v93; // r14
  __int64 v94; // rcx
  __int64 v95; // rdx
  unsigned __int64 v96; // rdi
  int v97; // r9d
  unsigned __int64 v98; // rdx
  struct _KPRCB **v99; // r13
  unsigned int v100; // r10d
  unsigned int v101; // r8d
  __int64 v102; // r9
  _QWORD *v103; // rdi
  struct _KPRCB *v104; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KTHREAD *NextThread; // rax
  ULONG_PTR CurrentThread; // rcx
  char v108; // dl
  char v109; // dl
  char v110; // r12
  ULONG_PTR v111; // r15
  char v112; // al
  bool v113; // r8
  char v114; // al
  char v115; // dl
  unsigned __int8 v116; // dl
  _QWORD *v117; // r9
  unsigned int v118; // r8d
  _QWORD *v119; // rdx
  _BYTE *v120; // rcx
  __int64 v121; // rdx
  unsigned int v122; // r15d
  _QWORD *v123; // r13
  unsigned int v124; // ecx
  _QWORD *v125; // rax
  BOOL v126; // r12d
  char v127; // al
  unsigned __int8 *v128; // rdx
  __int64 v129; // rax
  char v130; // dl
  char v131; // cl
  char v132; // al
  unsigned int v133; // ecx
  unsigned int v134; // r14d
  _QWORD *v135; // rcx
  __int64 v136; // r12
  __int64 v137; // r8
  char v138; // r14
  unsigned int v139; // r15d
  unsigned int i; // edi
  char v141; // al
  unsigned __int8 *v142; // rdx
  unsigned __int8 v143; // al
  unsigned __int64 *v144; // r9
  unsigned __int64 v145; // r10
  int v146; // edx
  _QWORD *v147; // rdi
  __int64 v148; // r14
  unsigned __int64 *v149; // r8
  unsigned __int64 v150; // r9
  int v151; // edx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v153; // [rsp+30h] [rbp-D0h]
  char v154; // [rsp+30h] [rbp-D0h]
  char v155[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v156; // [rsp+34h] [rbp-CCh]
  int v157; // [rsp+38h] [rbp-C8h]
  unsigned int v158; // [rsp+3Ch] [rbp-C4h]
  unsigned int v159; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v160; // [rsp+48h] [rbp-B8h]
  __int64 v161; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v162; // [rsp+58h] [rbp-A8h]
  int v163; // [rsp+60h] [rbp-A0h] BYREF
  int v164; // [rsp+64h] [rbp-9Ch]
  unsigned int v165; // [rsp+68h] [rbp-98h]
  unsigned int v166; // [rsp+6Ch] [rbp-94h]
  __int64 v167; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v168; // [rsp+78h] [rbp-88h] BYREF
  __int64 v169; // [rsp+80h] [rbp-80h] BYREF
  __int64 v170; // [rsp+88h] [rbp-78h]
  __int128 v171; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v172; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v173; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v174; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v175; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v176; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v177; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v178[42]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v179[42]; // [rsp+230h] [rbp+130h] BYREF

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_BYTE *)(a2 + 566) == 1;
  v170 = a3;
  v5 = a2;
  v162 = a2;
  v6 = a1;
  v161 = a1;
  v171 = 0LL;
  v158 = 0;
  if ( v4 )
    v153 = *(_BYTE *)(a2 + 567);
  else
    v153 = 0;
  v163 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v163);
    while ( *(_QWORD *)(v5 + 64) );
  }
  v4 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
  v167 = 0LL;
  if ( v4 )
  {
    v18 = 0;
    goto LABEL_30;
  }
  _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x100000u);
  v7 = KiReadGuestSchedulerAssistPriority(v5, &v167);
  v8 = *(_DWORD *)(v5 + 1024);
  v9 = v7;
  if ( v7 != v8 )
  {
    v10 = v5 + (char)v7;
    v11 = *(_BYTE *)(v10 + 824);
    if ( v11 == -1 )
      KeBugCheckEx(0x157u, v5, (char)v9, 1uLL, 0LL);
    *(_BYTE *)(v10 + 824) = v11 + 1;
    *(_DWORD *)(v5 + 856) |= 1 << v9;
    if ( v8 != 32 )
    {
      v12 = v5 + (char)v8;
      v13 = *(_BYTE *)(v12 + 824);
      if ( !v13 )
        KeBugCheckEx(0x157u, v5, (char)v8, 2uLL, 0LL);
      v14 = v13 - 1;
      *(_BYTE *)(v12 + 824) = v14;
      if ( !v14 )
        *(_DWORD *)(v5 + 856) ^= 1 << v8;
    }
    *(_DWORD *)(v5 + 1024) = v9;
  }
  v15 = *(char *)(v5 + 195);
  v16 = KiComputePriorityFloor(v5, v9);
  if ( (*(_BYTE *)(v5 + 564) & 0xF0) != 0 )
  {
    if ( v16 > v15 )
      goto LABEL_20;
  }
  else if ( v16 != v15 )
  {
LABEL_20:
    KiSetBasePriorityAndClearDecrement(v5, 0LL, 0LL);
    KiUpdateThreadPriority(0, v17, v5, v16, 0);
  }
  v159 = *(unsigned __int8 *)(v5 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(v5, &v159);
  a2 = v159;
  if ( v159 != (unsigned __int8)*(_DWORD *)(v5 + 512) )
    KiSetThreadQosLevelUnsafe(v5, v159);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(v5 + 968), 0xFFEFFFFF);
  if ( v15 != v16 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(v5, v15, v9, v16, (__int64)&v167);
  v18 = 1;
LABEL_30:
  v19 = (unsigned __int64 *)(v5 + 32);
  if ( !*(_BYTE *)(v5 + 566) )
  {
    if ( v3 < *v19 )
    {
      v158 = *(unsigned __int8 *)(v5 + 565);
      goto LABEL_89;
    }
    v20 = KiComputeNewPriority(v5, 1LL);
    if ( !v18 )
      KiUpdateThreadPriority(0, v21, v5, v20, 0);
    KiTryScheduleNextForegroundBoost(v5);
    goto LABEL_86;
  }
  if ( *(char *)(v5 + 195) >= 16 )
  {
    v22 = 1;
    goto LABEL_77;
  }
  v23 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
  if ( v3 < *v19 )
  {
    v24 = 0;
    if ( *(char *)(v5 + 563) < 14 && (*(_BYTE *)(v5 + 564) || v23 < 2) )
      goto LABEL_54;
  }
  else
  {
    v24 = 4;
    if ( v23 < 2 )
      v24 = 5;
  }
  v24 |= 8u;
  v25 = KiComputeNewPriority(v5, 1LL);
  if ( !v18 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v25 > *(char *)(v5 + 195) )
    {
      if ( *(_BYTE *)(v5 + 793) )
      {
        v27 = (struct _SINGLE_LIST_ENTRY *)(v5 + 808);
        if ( *(_QWORD *)(v5 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
          {
            v27->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v27;
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(v5 + 195) = v25;
    v29 = KiComputeHeteroThreadQos(v5, 0LL);
    a2 = (unsigned __int8)*(_DWORD *)(v5 + 512);
    if ( v29 != (_DWORD)a2 )
      KiSetThreadQosLevelUnsafe(v5, v29);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    {
      LOBYTE(v30) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 968), (unsigned int)*(char *)(v5 + 195), v30);
    }
  }
LABEL_54:
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1850LL) == 2 )
    v24 |= 2u;
  if ( (v24 & 1) != 0 || (*(_DWORD *)(v5 + 120) & 8) != 0 || *(char *)(v5 + 195) <= 0 )
    goto LABEL_71;
  v31 = *(_BYTE *)(v5 + 564);
  if ( v31 )
  {
    if ( (v31 & 0xF0) == 0 && (v24 & 2) != 0 )
    {
      v32 = *(char *)(v5 + 563);
      v33 = v153;
      v34 = v153 + v32;
      v35 = v34;
LABEL_64:
      v35 += (char)PsPrioritySeparation;
      goto LABEL_65;
    }
LABEL_71:
    if ( (KiVelocityFlags & 0x8000) == 0
      && (v24 & 6) == 6
      && (*(_DWORD *)(v5 + 120) & 8) == 0
      && *(char *)(v5 + 195) > 0 )
    {
      KiScheduleNextForegroundBoost(v5);
    }
    goto LABEL_76;
  }
  v32 = *(char *)(v5 + 563);
  a2 = v24;
  v33 = v153;
  LOBYTE(a2) = v24 >> 1;
  v34 = v153 + v32;
  v35 = v34;
  if ( (v24 & 2) != 0 )
    goto LABEL_64;
LABEL_65:
  if ( v35 >= 16 )
    v35 = 15;
  if ( v35 > *(char *)(v5 + 195) )
  {
    v36 = 0;
    if ( v35 > v34 )
      v36 = v35 - v32 - v33;
    *(_BYTE *)(v5 + 564) = v31 ^ (v36 ^ v31) & 0xF;
    KiUpdateThreadPriority(0, a2, v5, v35, 0);
  }
LABEL_76:
  v22 = (v24 & 8) != 0;
LABEL_77:
  if ( *(_BYTE *)(v5 + 566) != 2 )
    goto LABEL_85;
  v37 = *(_BYTE *)(v5 + 195);
  if ( v37 > 0 )
  {
    a2 = *(unsigned __int8 *)(v5 + 567);
    if ( v37 < (char)a2 && v37 < 13 && (*(_DWORD *)(v5 + 120) & 8) == 0 )
    {
      v38 = 13;
      if ( (char)a2 < 13 )
        v38 = *(unsigned __int8 *)(v5 + 567);
      KiSetPriorityBoost(0, v5, v38, v3, KiLockQuantumTarget);
LABEL_85:
      if ( !v22 )
        goto LABEL_89;
      goto LABEL_86;
    }
  }
  if ( v22 )
  {
LABEL_86:
    v39 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
    if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
    *v19 = v39;
    goto LABEL_89;
  }
  a2 = *v19;
  if ( v3 > *v19 || (a2 -= v3, a2 < (unsigned int)KiLockQuantumTarget) )
    *v19 = v3 + (unsigned int)KiLockQuantumTarget;
LABEL_89:
  v4 = *(_DWORD *)(v5 + 484) == 0;
  v166 = *(_DWORD *)(v5 + 588);
  *(_WORD *)(v5 + 565) = 0;
  v40 = !v4 || *(_BYTE *)(v5 + 390) == 1;
  v41 = 0;
  v154 = _bittestandreset((signed __int32 *)(v5 + 116), 1u);
  if ( *(_QWORD *)(v5 + 568) != KiCpuSetSequence && (*(_DWORD *)(v5 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v5);
  v42 = *(_DWORD *)(v5 + 588);
  v177 = 0LL;
  v165 = v42;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    FirstSetLeftAffinity = *(unsigned int *)(v5 + 536);
    LODWORD(FirstSetLeftAffinity) = FirstSetLeftAffinity & 0x7FFFFFFF;
    v44 = KiProcessorBlock[FirstSetLeftAffinity];
    if ( !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v5 + 576), v44) )
    {
      FirstSetLeftAffinity = (unsigned int)KeFindFirstSetLeftAffinityEx(v47, v45, v46);
      v44 = KiProcessorBlock[FirstSetLeftAffinity];
    }
    KiPopulateTrivialProcessorSelectionResult(&v177, v5, v44);
    v49 = (__int64 *)(v5 + 104);
    *(_DWORD *)(v5 + 536) = FirstSetLeftAffinity;
    v50 = *(_QWORD *)(v5 + 104);
    if ( v50 )
      v50 += *(unsigned int *)(v44 + 216);
    goto LABEL_240;
  }
  v51 = *(unsigned __int16 **)(v5 + 576);
  v52 = 0LL;
  v53 = *v51;
  if ( !*v51 )
    goto LABEL_120;
  v54 = (unsigned __int64 *)(v51 + 4);
  v55 = *v51;
  do
  {
    v56 = *v54++;
    v57 = v56 - ((v56 >> 1) & 0x5555555555555555LL);
    a2 = v57 & 0x3333333333333333LL;
    v52 = ((unsigned int)((0x101010101010101LL
                         * (((v57 & 0x3333333333333333LL)
                           + ((v57 >> 2) & 0x3333333333333333LL)
                           + (((v57 & 0x3333333333333333LL) + ((v57 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
        + (unsigned int)v52;
    --v55;
  }
  while ( v55 );
  v5 = v162;
  v41 = 0;
  v6 = v161;
  if ( (unsigned int)v52 > 1 )
  {
    if ( *(_BYTE *)(v162 + 125) )
    {
      v58 = *(unsigned __int16 *)(v162 + 584);
      v171 = 0LL;
      WORD4(v171) = v58;
      if ( (unsigned __int16)v58 >= v53 )
        v59 = 0LL;
      else
        v59 = *(_QWORD *)&v51[4 * v58 + 4];
      *(_QWORD *)&v171 = v59;
      KiHeteroChooseTargetProcessor(v59, v162, &v171, &v177);
    }
    else
    {
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v162, v161, v52, v54) )
        v41 = !v40;
      KiChooseTargetProcessor(v6, (_DWORD *)v5, *(unsigned __int16 **)(v5 + 576), (__int64)&v177, v41);
    }
    v60 = v177;
    v48 = DWORD2(v177);
    v44 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v61 = v177;
    v160 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
LABEL_120:
    v62 = KeFindFirstSetLeftAffinityEx(v51, a2, v52);
    v63 = (*(_DWORD *)(v5 + 120) >> 1) & 1;
    v44 = KiProcessorBlock[v62];
    v160 = v44;
    KiAcquirePrcbLocksForPreemptionAttempt(v44, v63, &v177);
    v60 = v177;
    v64 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v61 = v177;
    v172 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v65 = 0LL;
    v66 = 0LL;
    if ( (v177 & 1) != 0 )
    {
      if ( (v177 & 1) == 1 )
      {
        v67 = *(unsigned __int8 **)(v64 + 34904);
        v66 = *v67;
        v65 = (__int64 *)(v67 + 8);
      }
      v48 = 1LL;
      if ( (_DWORD)v66 )
      {
        do
        {
          v68 = *v65++;
          v48 = ((*(_BYTE *)(v68 + 35) & 1) == 0) & (unsigned __int8)v48;
          --v66;
        }
        while ( v66 );
      }
    }
    else
    {
      v48 = (*(_BYTE *)(v64 + 35) & 1) == 0;
    }
    *((_QWORD *)&v177 + 1) = (unsigned int)v48;
  }
  v69 = v60 & 0xFFFFFFFFFFFFFFFEuLL;
  v173 = v69;
  if ( (v61 & 1) != 0 )
  {
    v71 = *(_BYTE **)(v69 + 34904);
    v72 = (__int64 *)(v71 + 8);
    v70 = 1;
    if ( *v71 )
    {
      v73 = (unsigned __int8)*v71;
      do
      {
        v74 = *v72++;
        v70 = ((*(_BYTE *)(v74 + 35) & 1) == 0) & (unsigned __int8)v70;
        --v73;
      }
      while ( v73 );
    }
  }
  else
  {
    v70 = (*(_BYTE *)(v69 + 35) & 1) == 0;
  }
  if ( v70 != (_DWORD)v48 )
    __fastfail(0x21u);
  v75 = (__int64 *)(v5 + 104);
  *(_DWORD *)(v5 + 536) = *(_DWORD *)(v44 + 36);
  v50 = *(_QWORD *)(v5 + 104);
  if ( v50 )
  {
    v50 += *(unsigned int *)(v44 + 216);
    if ( v50 )
    {
      if ( KiIsThreadConstrainedBySchedulingGroup(v5) )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v50) )
        {
          v49 = (__int64 *)(v5 + 104);
          if ( !v40 )
          {
LABEL_240:
            if ( !v154 )
              *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
            if ( !v50 )
            {
              v50 = *v49;
              if ( *v49 )
                v50 += *(unsigned int *)(v44 + 216);
            }
            v129 = *(_QWORD *)(v44 + 35000);
            if ( v129 )
              *(_BYTE *)(v129 + 16) = 0;
            v130 = 0;
            *(_BYTE *)(v5 + 388) = 1;
            v155[0] = 0;
            if ( v50 && (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
            {
              LOBYTE(v48) = 1;
              if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v50, v48, v155) )
              {
                KiAddThreadToScbQueue(v44, v50, v5, v158);
                goto LABEL_291;
              }
              v130 = v155[0];
            }
            KiAddThreadToPrcbQueue(v44, v5, *(char *)(v5 + 195), v158, v130);
LABEL_291:
            v149 = 0LL;
            v150 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
            v151 = 0;
            v176 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v177 & 1) != 0 )
            {
              if ( (v177 & 1) == 1 )
              {
                v149 = (unsigned __int64 *)(*(_QWORD *)(v150 + 34904) + 8LL);
                v151 = **(unsigned __int8 **)(v150 + 34904);
              }
              if ( !v151 )
                goto LABEL_298;
            }
            else
            {
              v149 = &v176;
              v151 = 1;
            }
            do
              _InterlockedAnd64((volatile signed __int64 *)(v149[--v151] + 48), 0LL);
            while ( v151 );
LABEL_298:
            result = 0LL;
            *(_QWORD *)&v177 = 0LL;
            *(_QWORD *)(v5 + 64) = 0LL;
            goto LABEL_299;
          }
        }
      }
    }
  }
  if ( !DWORD2(v177) )
  {
    v49 = (__int64 *)(v5 + 104);
    if ( v41 )
      goto LABEL_240;
    v96 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v162 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    memset(v178, 0, sizeof(v178));
    v97 = v177 & 1;
    v157 = 0;
    v98 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v164 = v97;
    v99 = 0LL;
    v168 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v100 = 0;
    if ( (v177 & 1) == 0 )
    {
      v100 = 1;
      v156 = 0;
      v157 = 1;
      v99 = (struct _KPRCB **)&v168;
LABEL_185:
      v102 = v100;
      v103 = &v178[6];
      v161 = v100;
      while ( 1 )
      {
        *(v103 - 3) = 0LL;
        *v103 = 0LL;
        v104 = *v99;
        *(v103 - 1) = -1LL;
        *((_BYTE *)v103 + 4) = 63;
        *(v103 - 4) = v104;
        SharedReadyQueue = v104->SharedReadyQueue;
        if ( (v104->IdleState & 8) != 0 && (v104->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
          SharedReadyQueue = 0LL;
        NextThread = v104->NextThread;
        *(v103 - 3) = SharedReadyQueue;
        CurrentThread = (ULONG_PTR)NextThread;
        *(v103 - 2) = NextThread;
        if ( !NextThread )
        {
          CurrentThread = (ULONG_PTR)v104->CurrentThread;
          *(v103 - 2) = CurrentThread;
        }
        if ( NextThread == (_KTHREAD *)CurrentThread )
        {
          *(_BYTE *)v103 |= 4u;
        }
        else
        {
          v108 = *(_BYTE *)v103;
          if ( v104 == KeGetCurrentPrcb() )
            v109 = v108 | 4;
          else
            v109 = v108 & 0xFB;
          *(_BYTE *)v103 = v109;
        }
        v110 = 0;
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) == 0 )
          goto LABEL_211;
        if ( CurrentThread == v5 )
          goto LABEL_201;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
          break;
LABEL_211:
        v113 = (v104->IdleState & 1) == 0;
        v114 = v113 | *(_BYTE *)v103 & 0xFE;
        v115 = (v104->PriorityState->AllFields >> 6) ^ (*(_BYTE *)v103 | v113);
        v101 = v156;
        v116 = v114 ^ v115 & 2;
        *(_BYTE *)v103 = v116;
        if ( ((v116 >> 1) & 1u) > v101 )
          v101 = (v116 >> 1) & 1;
        v103 += 5;
        ++v99;
        v156 = v101;
        v161 = --v102;
        if ( !v102 )
        {
          v98 = v168;
          v75 = (__int64 *)(v5 + 104);
          v100 = v157;
          v97 = v164;
          v96 = v162;
          goto LABEL_215;
        }
      }
      v110 = 1;
LABEL_201:
      v111 = CurrentThread;
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 && *(_DWORD *)(CurrentThread + 536) == v104->Number )
      {
        if ( *(_BYTE *)(CurrentThread + 388) == 2
          || *(_BYTE *)(CurrentThread + 388) == 3
          || *(_BYTE *)(CurrentThread + 388) == 5
          && (v112 = *(_BYTE *)(CurrentThread + 112) & 7, v112 != 1)
          && (unsigned __int8)(v112 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(CurrentThread);
          v102 = v161;
        }
      }
      if ( v110 )
        *(_QWORD *)(v111 + 64) = 0LL;
      goto LABEL_211;
    }
    if ( v97 == 1 )
    {
      v99 = (struct _KPRCB **)(*(_QWORD *)(v96 + 34904) + 8LL);
      v100 = **(unsigned __int8 **)(v96 + 34904);
      v157 = v100;
    }
    v156 = 0;
    v101 = 0;
    if ( v100 )
      goto LABEL_185;
LABEL_215:
    HIDWORD(v178[0]) = v101;
    LODWORD(v178[1]) = v97;
    LOBYTE(v178[0]) = v100;
    if ( v97 )
      BYTE1(v178[0]) = *(_BYTE *)(*(_QWORD *)(v98 + 34904) + 1LL);
    else
      BYTE1(v178[0]) = 0;
    if ( v101 )
    {
      v117 = 0LL;
      v118 = 0;
      if ( v100 )
      {
        v119 = &v178[2];
        while ( v119[2] == *(_QWORD *)(*v119 + 34944LL) )
        {
          ++v118;
          v119 += 5;
          if ( v118 >= v100 )
            goto LABEL_225;
        }
        v117 = v119;
LABEL_225:
        v120 = &v178[6];
        v121 = v100;
        do
        {
          if ( v120 - 32 != (_BYTE *)v117 )
          {
            *((_QWORD *)v120 - 2) = v117[2];
            *v120 = *((_BYTE *)v117 + 32) | 0x20;
          }
          v120 += 40;
          --v121;
        }
        while ( v121 );
        LOBYTE(v100) = v178[0];
      }
    }
    v122 = (unsigned __int8)v100;
    v123 = 0LL;
    v124 = 0;
    if ( (_BYTE)v100 )
    {
      v125 = &v178[2];
      while ( *v125 != v96 )
      {
        ++v124;
        v125 += 5;
        if ( v124 >= (unsigned __int8)v100 )
          goto LABEL_236;
      }
      v123 = v125;
    }
LABEL_236:
    v169 = 0LL;
    v126 = HIDWORD(v177) != 0;
    v50 = 0LL;
    if ( KiGroupSchedulingEnabled )
    {
      v127 = KiEvaluateGroupSchedulingPreemption(v123, v5, HIDWORD(v177) != 0, &v169);
      v50 = v169;
      v128 = (unsigned __int8 *)(v123 + 4);
      if ( !v127 )
      {
LABEL_238:
        v49 = v75;
LABEL_239:
        v44 = v160;
        goto LABEL_240;
      }
    }
    else
    {
      v131 = *((_BYTE *)v123 + 32);
      v128 = (unsigned __int8 *)(v123 + 4);
      v48 = v123[2];
      if ( (v131 & 1) == 0 )
      {
        v132 = *(_BYTE *)(v5 + 195);
        if ( v132 <= *(char *)(v48 + 195)
          && (v132 != *(_BYTE *)(v48 + 195) || !HIDWORD(v177) && (v131 & 0x18) == 0)
          && ((v131 & 0x10) == 0 || !v132) )
        {
          goto LABEL_238;
        }
      }
    }
    v133 = (*(_DWORD *)(v5 + 120) >> 1) & 1;
    if ( v133 < ((*v128 >> 1) & 1u) )
      v133 = (*v128 >> 1) & 1;
    if ( v133 == 1 )
    {
      v134 = 0;
      if ( v122 )
      {
        while ( 1 )
        {
          v135 = &v178[5 * v134 + 2];
          if ( v135 != v123 && !(unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v135, v5, v126) )
            break;
          if ( ++v134 >= v122 )
            goto LABEL_265;
        }
        v49 = (__int64 *)(v5 + 104);
        goto LABEL_239;
      }
    }
LABEL_265:
    v136 = v170;
    if ( (unsigned __int8)KiScheduleThreadToRescheduleContext((unsigned __int8 *)v178, v5, v162, v154, v170) )
      KiSearchForNewThreadsForRescheduleContext(v178, v136);
    v137 = LOBYTE(v178[0]);
    v138 = 0;
    v139 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v139 = 2;
    for ( i = 0; i < LOBYTE(v178[0]); ++i )
    {
      v141 = KiCommitRescheduleContextEntry(&v178[5 * i + 2], v6, v139, v136);
      v137 = LOBYTE(v178[0]);
      v138 |= v141;
    }
    if ( LODWORD(v178[1]) == 1 )
    {
      v142 = *(unsigned __int8 **)(v178[2] + 34904LL);
      v143 = v142[1] + 1;
      if ( v143 >= *v142 )
        v143 = 0;
      v142[1] = v143;
    }
    v144 = 0LL;
    v145 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v175 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v146 = 0;
    if ( (v177 & 1) != 0 )
    {
      if ( (v177 & 1) == 1 )
      {
        v144 = (unsigned __int64 *)(*(_QWORD *)(v145 + 34904) + 8LL);
        v146 = **(unsigned __int8 **)(v145 + 34904);
      }
      if ( !v146 )
        goto LABEL_284;
    }
    else
    {
      v144 = &v175;
      v146 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v144[--v146] + 48), 0LL);
    while ( v146 );
    v137 = LOBYTE(v178[0]);
LABEL_284:
    result = 0LL;
    *(_QWORD *)&v177 = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( v138 )
    {
      result = (unsigned __int8)v137;
      if ( (_BYTE)v137 )
      {
        v147 = &v178[2];
        v148 = (unsigned __int8)v137;
        do
        {
          result = KiCompleteRescheduleContextEntry(v147, v6, v137, v144);
          v147 += 5;
          --v148;
        }
        while ( v148 );
      }
    }
    goto LABEL_299;
  }
  memset(v179, 0, sizeof(v179));
  KiStartRescheduleContext((__int64)v179, (__int64 *)&v177, v5);
  v76 = v170;
  v77 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
  KiScheduleThreadToRescheduleContext((unsigned __int8 *)v179, v5, v177 & 0xFFFFFFFFFFFFFFFEuLL, v154, v170);
  v78 = v179[0];
  v79 = 0;
  v80 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v80 = 2;
  for ( j = 0; j < LOBYTE(v179[0]); ++j )
  {
    v82 = KiCommitRescheduleContextEntry(&v179[5 * j + 2], v6, v80, v76);
    v78 = v179[0];
    v79 |= v82;
  }
  if ( LODWORD(v179[1]) == 1 )
  {
    v83 = *(unsigned __int8 **)(v179[2] + 34904LL);
    v84 = v83[1] + 1;
    if ( v84 >= *v83 )
      v84 = 0;
    v83[1] = v84;
  }
  v85 = 0LL;
  v174 = v77;
  v86 = 0;
  if ( (v177 & 1) == 0 )
  {
    v85 = &v174;
    v86 = 1;
    do
LABEL_154:
      _InterlockedAnd64((volatile signed __int64 *)(v85[--v86] + 48), 0LL);
    while ( v86 );
    v78 = v179[0];
    goto LABEL_156;
  }
  if ( (v177 & 1) == 1 )
  {
    v85 = (unsigned __int64 *)(*(_QWORD *)(v77 + 34904) + 8LL);
    v86 = **(unsigned __int8 **)(v77 + 34904);
  }
  if ( v86 )
    goto LABEL_154;
LABEL_156:
  result = 0LL;
  *(_QWORD *)&v177 = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( v79 )
  {
    result = v78;
    if ( v78 )
    {
      v88 = (char *)&v179[6] + 3;
      for ( k = v78; k; --k )
      {
        v90 = *v88;
        v91 = *(_QWORD *)(v88 - 35);
        if ( (*v88 & 0x10) == 0 && ((v90 & 8) == 0 || !*(_BYTE *)(v91 + 7)) )
          goto LABEL_172;
        result = *(unsigned __int8 *)(v6 + 12761);
        if ( (_BYTE)result )
        {
          if ( (_BYTE)result == 1 )
          {
            v92 = *(_DWORD *)(v6 + 12764);
            if ( v92 == *(_DWORD *)(v91 + 36) )
              goto LABEL_172;
            v93 = (_WORD *)(v6 + 12768);
            *(_BYTE *)(v6 + 12761) = 2;
            result = KeAddProcessorAffinityEx((unsigned __int16 *)(v6 + 12768), v92);
          }
          else
          {
            v93 = (_WORD *)(v6 + 12768);
          }
          v94 = *(unsigned __int8 *)(v91 + 208);
          v95 = *(_QWORD *)(v91 + 200);
          if ( *v93 > (unsigned __int16)v94 )
            goto LABEL_171;
          if ( v93[1] > (unsigned __int16)v94 )
          {
            result = (unsigned int)(v94 + 1);
            *v93 = v94 + 1;
LABEL_171:
            *(_QWORD *)&v93[4 * v94 + 4] |= v95;
          }
        }
        else
        {
          *(_BYTE *)(v6 + 12761) = 1;
          result = *(unsigned int *)(v91 + 36);
          *(_DWORD *)(v6 + 12764) = result;
        }
LABEL_172:
        if ( (v90 & 4) != 0 )
          result = KiHvEnlightenedGuestPriorityKick(v6, v91, v88[1]);
        if ( (v90 & 1) != 0 )
        {
          result = *(_QWORD *)(v88 - 11);
          _InterlockedDecrement16((volatile signed __int16 *)(result + 868));
        }
        v88 += 40;
      }
    }
  }
LABEL_299:
  if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
    return EtwTraceIdealProcessor(v5, 1350LL, v166, v165, BugCheckParameter4);
  return result;
}
