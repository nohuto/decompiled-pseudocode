bool __fastcall KiDirectSwitchThread(__int64 a1, int a2, char a3)
{
  unsigned __int8 v3; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rcx
  ULONG_PTR v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 *v16; // rbx
  __int64 *v17; // r15
  volatile signed __int32 *v18; // rdi
  __int64 *v19; // rcx
  __int64 **v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned int CurrentFrequency; // eax
  __int64 v28; // r10
  unsigned __int16 *v29; // r8
  unsigned int i; // edx
  char v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  unsigned __int64 v38; // rdi
  __int64 v39; // r12
  int v40; // eax
  int v41; // edx
  int v42; // ebx
  ULONG_PTR v43; // rcx
  char v44; // al
  ULONG_PTR v45; // rcx
  char v46; // al
  char v47; // al
  int v48; // r15d
  int v49; // edi
  int v50; // edx
  __int64 v51; // rdx
  int v52; // ebx
  int v53; // ebx
  unsigned __int64 v54; // r11
  __int64 v55; // r10
  unsigned int v56; // ecx
  int v57; // r13d
  int v58; // r15d
  unsigned int v59; // edi
  char v60; // al
  bool v61; // cc
  unsigned int v62; // ebx
  unsigned int v63; // r9d
  unsigned int v64; // r8d
  unsigned int v65; // eax
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // rax
  _WORD *v69; // rdx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 *v76; // r11
  unsigned int v77; // ecx
  __int64 *v78; // rax
  char v79; // di
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned int j; // r10d
  __int64 *v83; // rcx
  int v84; // eax
  unsigned int v85; // r15d
  _QWORD *v86; // r13
  unsigned int v87; // ecx
  _QWORD *v88; // rax
  char DoesThreadDominateRescheduleContextEntry; // al
  char v90; // cl
  char v91; // dl
  char v92; // al
  unsigned int v93; // ecx
  unsigned int v94; // edi
  _QWORD *v95; // rcx
  _QWORD *v96; // r10
  unsigned int v97; // ecx
  _QWORD *v98; // rax
  unsigned __int8 v99; // r11
  unsigned int v100; // r13d
  unsigned int v101; // r12d
  __int64 v102; // rdi
  _QWORD *v103; // r10
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // ecx
  char v108; // al
  __int64 v109; // r11
  __int64 v110; // rcx
  char v111; // al
  bool v112; // cl
  __int64 v113; // r11
  int v114; // edi
  __int64 v115; // rdx
  __int64 v116; // rdi
  int v117; // eax
  unsigned int v118; // r12d
  __int64 v119; // r11
  _QWORD *v120; // r10
  __int64 v121; // rcx
  unsigned __int64 v122; // rax
  __int64 v123; // rcx
  int v124; // ecx
  char v125; // al
  __int64 v126; // r11
  __int64 v127; // rdi
  __int64 v128; // rcx
  char v129; // al
  bool v130; // cl
  char v131; // al
  char v132; // cl
  char v133; // al
  __int64 v134; // r11
  unsigned int v135; // edi
  char v136; // r15
  char v137; // r12
  unsigned int v138; // ebx
  unsigned __int8 *v139; // rdx
  unsigned __int8 v140; // al
  unsigned __int64 *v141; // r8
  int v142; // edx
  unsigned __int64 v143; // r9
  int v144; // ebx
  char v145; // r15
  __int64 v146; // r12
  _QWORD *v147; // rdi
  _QWORD *v150; // [rsp+38h] [rbp-C8h] BYREF
  int ThreadEffectiveRankNonZero; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v152; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v153; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v154; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v155; // [rsp+58h] [rbp-A8h] BYREF
  int v156; // [rsp+5Ch] [rbp-A4h] BYREF
  int v157; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v158; // [rsp+68h] [rbp-98h]
  unsigned __int64 v159; // [rsp+70h] [rbp-90h]
  _QWORD *v160; // [rsp+80h] [rbp-80h] BYREF
  __int64 v161; // [rsp+88h] [rbp-78h] BYREF
  __int64 v162; // [rsp+90h] [rbp-70h]
  unsigned __int64 v163; // [rsp+98h] [rbp-68h]
  unsigned __int64 v164; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v165[42]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a2;
  LODWORD(v154) = a2;
  memset(v165, 0, sizeof(v165));
  v7 = *(_QWORD **)(a1 + 11528);
  v153 = 0LL;
  v150 = 0LL;
  v160 = v7;
  if ( v7 )
    *(_QWORD *)(a1 + 11528) = *v7;
  v8 = (ULONG_PTR)(v7 - 27);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v7 - 27, 1LL, v3, 1LL);
  v9 = *(_QWORD *)(v8 + 104);
  v10 = *(_QWORD *)(a1 + 8);
  v162 = v10;
  ThreadEffectiveRankNonZero = 0;
  v158 = v9;
  if ( v9 )
  {
    v11 = *(unsigned int *)(a1 + 216);
    v12 = v11 + v9 == 0;
    v9 += v11;
    v158 = v9;
    if ( !v12 )
    {
      LOBYTE(v5) = 1;
      ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v9, v5, 0LL);
      if ( ThreadEffectiveRankNonZero )
      {
        v14 = *(_QWORD *)(v10 + 104);
        if ( v14 )
        {
          v15 = *(unsigned int *)(a1 + 216) + v14;
          if ( v15 )
          {
            v155 = KiGetThreadEffectiveRankNonZero(v10, v15, v13, v6);
            if ( v155 )
              KiGetComparisonRanks(v9, v15, &ThreadEffectiveRankNonZero, &v155);
          }
        }
      }
    }
  }
  v16 = *(__int64 **)(v8 + 208);
  v17 = &v16[6 * *(unsigned __int8 *)(v8 + 587)];
  do
  {
    if ( *((_BYTE *)v16 + 17) < 5u )
    {
      v18 = (volatile signed __int32 *)v16[4];
      KiAcquireKobjectLockSafe(v18);
      if ( *((_BYTE *)v16 + 17) == 4 )
      {
        v19 = (__int64 *)*v16;
        v20 = (__int64 **)v16[1];
        if ( *(__int64 **)(*v16 + 8) != v16 || *v20 != v16 )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = (__int64)v20;
      }
      _InterlockedAnd(v18, 0xFFFFFF7F);
    }
    v16 += 6;
  }
  while ( v16 != v17 );
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v21 = __rdtsc();
  v22 = v21 - *(_QWORD *)(a1 + 33152);
  v23 = v22 + *(_QWORD *)(v10 + 72);
  *(_QWORD *)(v10 + 72) = v23;
  v24 = v22 * *(unsigned int *)(a1 + 33208);
  v163 = v23;
  v25 = (v24 >> 16) + *(unsigned int *)(v10 + 80);
  *(_QWORD *)(a1 + 33152) = v21;
  if ( v25 > 0xFFFFFFFF )
    LODWORD(v25) = -1;
  v12 = (*(_BYTE *)(v10 + 2) & 0xBE) == 0;
  *(_DWORD *)(v10 + 80) = v25;
  if ( !v12 )
    KiEndThreadAccountingPeriodEx(a1, v10, v22, 0LL);
  v26 = __rdtsc();
  *(_QWORD *)(a1 + 33400) += v26 - *(_QWORD *)(a1 + 33152);
  if ( (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
    v29 = (unsigned __int16 *)(a1 + 34154);
    for ( i = 0; i < 3; ++i )
    {
      if ( CurrentFrequency <= *v29 )
        break;
      ++v29;
    }
    if ( KeHeteroSystem )
      v31 = *(_BYTE *)(a1 + 34056);
    else
      v31 = *(_BYTE *)(a1 + 34059);
    v158 = v9;
    v32 = (v31 != 0) + 2LL * i + 4176;
    *(_QWORD *)(a1 + 8 * v32) += v28;
  }
  if ( (*(_BYTE *)(v10 + 2) & 0x40) != 0 )
  {
    v33 = *(_QWORD *)(v10 + 968);
    if ( v33 )
      *(_BYTE *)(v33 + 64) = 1;
  }
  *(_QWORD *)(a1 + 33152) = v26;
  if ( (*(_BYTE *)(v10 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(v10, 0LL);
  v12 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v12 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v36 = *SchedulerAssist;
    do
    {
      v37 = v36;
      v36 = _InterlockedCompareExchange(SchedulerAssist, v36 & 0xFFDFFFFF, v36);
    }
    while ( v37 != v36 );
    if ( (v36 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  v38 = *(_QWORD *)(v10 + 32);
  v39 = *(_QWORD *)(v8 + 72);
  v159 = v38;
  v156 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v156);
    while ( *(_QWORD *)(v8 + 64) );
  }
  v12 = (*(_DWORD *)(v8 + 120) & 0x400000) == 0;
  v161 = 0LL;
  if ( v12 )
  {
    LOBYTE(v6) = 0;
  }
  else
  {
    _InterlockedOr(*(volatile signed __int32 **)(v8 + 968), 0x100000u);
    v40 = KiReadGuestSchedulerAssistPriority(v8, &v161);
    v41 = *(_DWORD *)(v8 + 1024);
    v42 = v40;
    if ( v40 != v41 )
    {
      v43 = (char)v40 + v8;
      v44 = *(_BYTE *)(v43 + 824);
      if ( v44 == -1 )
        KeBugCheckEx(0x157u, v8, (char)v42, 1uLL, 0LL);
      *(_BYTE *)(v43 + 824) = v44 + 1;
      *(_DWORD *)(v8 + 856) |= 1 << v42;
      if ( v41 != 32 )
      {
        v45 = (char)v41 + v8;
        v46 = *(_BYTE *)(v45 + 824);
        if ( !v46 )
          KeBugCheckEx(0x157u, v8, (char)v41, 2uLL, 0LL);
        v47 = v46 - 1;
        *(_BYTE *)(v45 + 824) = v47;
        if ( !v47 )
          *(_DWORD *)(v8 + 856) ^= 1 << v41;
      }
      *(_DWORD *)(v8 + 1024) = v42;
    }
    v48 = *(char *)(v8 + 195);
    v49 = KiComputePriorityFloor(v8, v42);
    if ( v49 != v48 )
    {
      KiSetBasePriorityAndClearDecrement(v8, 0LL, 0);
      KiUpdateThreadPriority(0, v50, v8, v49, 0);
    }
    v152 = *(unsigned __int8 *)(v8 + 1122);
    KiCheckAssistDataForBamQosLevelOverride(v8, &v152);
    if ( v152 != (unsigned __int8)*(_DWORD *)(v8 + 512) )
      KiSetThreadQosLevelUnsafe(v8, v152);
    if ( (*(_DWORD *)(v8 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(v8 + 968), 0xFFEFFFFF);
    if ( v48 != v49 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
      EtwTraceXSchedulerPriorityUpdate(v8, v48, v42, v49, (__int64)&v161);
    v38 = v159;
    LOBYTE(v6) = 1;
  }
  v52 = 32 * (KiComputeEffectivePriority(v8, (unsigned __int8)v154, v39, v6) & 1);
  if ( *(_QWORD *)(v8 + 568) != KiCpuSetSequence && (*(_DWORD *)(v8 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v8);
  v157 = 0;
  v153 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v157);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v53 = v52 | 0xF;
  v54 = v163;
  v55 = v162;
  v56 = v53 & 0xFFFFFFFA;
  v57 = *(char *)(v8 + 195);
  v58 = *(char *)(v162 + 195);
  if ( v163 + (unsigned int)KiDirectQuantumTarget <= v38 )
    v56 = v53;
  v59 = v56 & 0xFFFFFFF3;
  if ( a3 )
    v59 = v56;
  if ( v57 <= v58 )
  {
    if ( (v59 & 4) == 0 )
    {
      if ( (v59 & 8) == 0 )
      {
        v58 = 0;
        goto LABEL_90;
      }
      LOBYTE(v51) = 1;
      v60 = KiComputeNewPriority(v162, v51);
      v55 = v162;
      v54 = v163;
      v58 = v60;
    }
    if ( v58 >= 16 )
    {
      if ( v57 >= 16 )
      {
        v61 = v58 < v57;
        if ( v58 > v57 )
          goto LABEL_92;
LABEL_91:
        if ( !v61 )
          goto LABEL_93;
        goto LABEL_92;
      }
      v58 = 15;
    }
LABEL_90:
    v61 = v58 < v57;
    goto LABEL_91;
  }
  v59 &= ~1u;
  *(_BYTE *)(v162 + 565) = 1;
LABEL_92:
  v58 = v57;
LABEL_93:
  v62 = v59 & 0xFFFFFFFD;
  if ( !*(_QWORD *)(a1 + 16) )
    v62 = v59;
  v63 = 1 << v58;
  v64 = *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 8LL) | *(_DWORD *)(a1 + 32472);
  if ( (v62 & 1) == 0 )
  {
    v65 = v62 & 0xFFFFFFFD;
    if ( v63 > v64 )
      v65 = v62;
    v62 = v65;
    if ( ThreadEffectiveRankNonZero )
    {
      if ( v64 > 1 )
        goto LABEL_109;
      v66 = *(_DWORD *)(*(_QWORD *)(v158 + 416) + 116LL);
      v67 = *(_QWORD *)(a1 + 32568);
      if ( (v67 & 1) != 0 )
      {
        if ( v67 == 1 )
          goto LABEL_110;
        v68 = v67 ^ ((a1 + 32560) | 1);
      }
      else
      {
        v68 = *(_QWORD *)(a1 + 32568);
      }
      if ( v68 )
      {
        if ( *(_DWORD *)(v68 + 28) != v66 )
        {
          if ( *(_DWORD *)(v68 + 28) > v66 )
            goto LABEL_110;
          goto LABEL_109;
        }
        if ( *(unsigned __int16 *)(v68 + 26) >= v63 )
LABEL_109:
          v62 &= ~2u;
      }
    }
  }
LABEL_110:
  v69 = *(_WORD **)(v8 + 576);
  v70 = *(unsigned __int8 *)(a1 + 208);
  if ( (unsigned __int16)v70 >= *v69 || ((*(_QWORD *)&v69[4 * v70 + 4] >> *(_BYTE *)(a1 + 209)) & 1) == 0 )
    v62 &= ~2u;
  v71 = *(_DWORD *)(v8 + 120);
  if ( (v71 & 0x20000) == 0 || (v71 & 0x100000) != 0 )
    v62 &= ~2u;
  if ( (v62 & 1) != 0 )
  {
    if ( (v62 & 2) == 0 || (v64 & v63) != 0 )
    {
      v72 = v39;
      v54 = v159 - (unsigned int)KiDirectQuantumTarget;
      v73 = (unsigned int)KiDirectQuantumTarget + v39;
      if ( (v62 & 2) == 0 )
        *(_BYTE *)(v8 + 565) = 1;
    }
    else
    {
      v72 = v39;
      v73 = v159 + v39 - v54;
    }
    v62 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)(v8 + 120), 5u);
    *(_QWORD *)(v8 + 32) = v73;
    *(_QWORD *)(v55 + 32) = v54;
  }
  else
  {
    v72 = v39;
  }
  if ( v62 >= 0x20 )
  {
    v74 = v72 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v8 + 651);
    if ( (*(_DWORD *)(v8 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 5u);
    *(_QWORD *)(v8 + 32) = v74;
  }
  if ( v58 != v57 )
  {
    KiUpdateThreadPriority(0, v72, v8, v58, 0);
    *(_BYTE *)(v8 + 564) += 16 * (v58 - v57);
  }
  *(_BYTE *)(v8 + 567) = v154;
  *(_BYTE *)(v8 + 566) = 0;
  if ( (v62 & 2) != 0 )
  {
    KiStartRescheduleContext((__int64)v165, (__int64 *)&v153, v8);
    v75 = LOBYTE(v165[0]);
    v76 = 0LL;
    v77 = 0;
    if ( LOBYTE(v165[0]) )
    {
      v78 = &v165[2];
      while ( *v78 != a1 )
      {
        ++v77;
        v78 += 5;
        if ( v77 >= LOBYTE(v165[0]) )
          goto LABEL_137;
      }
      v76 = v78;
    }
LABEL_137:
    v79 = *((_BYTE *)v76 + 32);
    v80 = *v76;
    *((_BYTE *)v76 + 34) |= 2u;
    *((_BYTE *)v76 + 33) &= ~1u;
    v81 = *(_QWORD *)(v80 + 24);
    v76[2] = v81;
    v76[3] = v81;
    *((_BYTE *)v76 + 32) = v79 & 0xC0 | 5;
    if ( (v79 & 2) != 0 )
    {
      for ( j = 0; j < LOBYTE(v165[0]); ++j )
      {
        v83 = &v165[5 * j + 2];
        if ( v83 != v76 )
          KiAdjustRescheduleContextEntryForThreadRemoval(v83, v75, 0, 1);
      }
      v84 = HIDWORD(v165[0]);
      if ( (v79 & 2) != 0 )
        v84 = 0;
      HIDWORD(v165[0]) = v84;
    }
    v85 = LOBYTE(v165[0]);
    v86 = 0LL;
    v87 = 0;
    if ( LOBYTE(v165[0]) )
    {
      v88 = &v165[2];
      while ( *v88 != a1 )
      {
        ++v87;
        v88 += 5;
        if ( v87 >= LOBYTE(v165[0]) )
          goto LABEL_151;
      }
      v86 = v88;
    }
LABEL_151:
    v154 = 0LL;
    if ( KiGroupSchedulingEnabled )
    {
      DoesThreadDominateRescheduleContextEntry = KiEvaluateGroupSchedulingPreemption(v86, v8, 0LL, &v154);
      if ( !DoesThreadDominateRescheduleContextEntry )
        goto LABEL_168;
    }
    else
    {
      v90 = *((_BYTE *)v86 + 32);
      if ( (v90 & 1) == 0 )
      {
        v91 = *(_BYTE *)(v86[2] + 195LL);
        v92 = *(_BYTE *)(v8 + 195);
        if ( v92 <= v91 && (v92 != v91 || (v90 & 0x18) == 0) && ((v90 & 0x10) == 0 || !v92) )
        {
          DoesThreadDominateRescheduleContextEntry = 0;
          goto LABEL_168;
        }
      }
    }
    v93 = (*(_DWORD *)(v8 + 120) >> 1) & 1;
    if ( v93 < ((*((unsigned __int8 *)v86 + 32) >> 1) & 1u) )
      v93 = (*((unsigned __int8 *)v86 + 32) >> 1) & 1;
    if ( v93 == 1 && (v94 = 0, v85) )
    {
      while ( 1 )
      {
        v95 = &v165[5 * v94 + 2];
        if ( v95 != v86 )
        {
          DoesThreadDominateRescheduleContextEntry = KiDoesThreadDominateRescheduleContextEntry(
                                                       (__int64)v95,
                                                       v8,
                                                       0LL,
                                                       0LL);
          if ( !DoesThreadDominateRescheduleContextEntry )
            break;
        }
        if ( ++v94 >= v85 )
          goto LABEL_167;
      }
    }
    else
    {
LABEL_167:
      DoesThreadDominateRescheduleContextEntry = 1;
    }
LABEL_168:
    v62 ^= ((unsigned __int8)v62 ^ (unsigned __int8)(2 * DoesThreadDominateRescheduleContextEntry)) & 2;
    if ( (v62 & 2) == 0 )
      goto LABEL_251;
    *(_BYTE *)(v8 + 565) = 0;
    v96 = 0LL;
    v97 = 0;
    if ( v85 )
    {
      v98 = &v165[2];
      while ( *v98 != a1 )
      {
        ++v97;
        v98 += 5;
        if ( v97 >= v85 )
          goto LABEL_176;
      }
      v96 = v98;
    }
LABEL_176:
    v99 = *((_BYTE *)v96 + 32);
    v100 = (*(_DWORD *)(v8 + 120) >> 1) & 1;
    if ( v100 >= ((v99 >> 1) & 1u) )
    {
      if ( v100 )
      {
        v118 = 0;
        v114 = 0;
        if ( !v85 )
          goto LABEL_223;
        do
        {
          v119 = v165[5 * v118 + 2];
          v120 = &v165[5 * v118 + 2];
          v121 = v120[3];
          v122 = v121 - 1;
          if ( v119 == a1 )
          {
            if ( v122 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v121) )
            {
              if ( (*((_BYTE *)v120 + 33) & 1) != 0 )
                *(_DWORD *)(v123 + 116) |= 2u;
              *(_BYTE *)(v123 + 565) = 1;
              KiInsertDeferredReadyList(&v150, v123);
            }
            v124 = *(_DWORD *)(v8 + 120);
            v125 = v120[4] & 0xC4;
            *((_BYTE *)v120 + 33) &= ~1u;
            v120[2] = v8;
            v120[3] = v8;
            *((_BYTE *)v120 + 32) = v125 | (2 * (((v124 & 2) != 0) | 2));
            if ( !KiIsPrcbThread(v8) )
              *(_DWORD *)(v8 + 536) = *(_DWORD *)(v126 + 36);
          }
          else
          {
            v127 = *(_QWORD *)(v119 + 34944);
            if ( v122 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v121) )
            {
              if ( (*((_BYTE *)v120 + 33) & 1) != 0 )
                *(_DWORD *)(v128 + 116) |= 2u;
              *(_BYTE *)(v128 + 565) = 1;
              KiInsertDeferredReadyList(&v150, v128);
            }
            v129 = v120[4] & 0xE4;
            v130 = (*(_DWORD *)(v8 + 120) & 2) != 0;
            v120[2] = v8;
            v131 = v129 | (2 * (v130 | 2));
            v132 = v131 | 0x20;
            v133 = v131 & 0xDF;
            if ( v8 == v127 )
              v132 = v133;
            *((_BYTE *)v120 + 32) = v132;
            *((_BYTE *)v120 + 33) &= ~1u;
            v120[3] = v127;
            if ( !KiIsPrcbThread(v127) )
              *(_DWORD *)(v127 + 536) = *(_DWORD *)(v134 + 36);
          }
          ++v118;
        }
        while ( v118 < LOBYTE(v165[0]) );
      }
      else
      {
        v115 = v96[3];
        v116 = *v96;
        if ( (unsigned __int64)(v115 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v115 + 544) != &KiInitialProcess )
        {
          if ( (*((_BYTE *)v96 + 33) & 1) != 0 )
            *(_DWORD *)(v115 + 116) |= 2u;
          *(_BYTE *)(v115 + 565) = 1;
          KiInsertDeferredReadyList(&v150, v115);
        }
        v117 = *(_DWORD *)(v8 + 120);
        *((_BYTE *)v96 + 33) &= ~1u;
        v96[2] = v8;
        v96[3] = v8;
        *((_BYTE *)v96 + 32) = v99 & 0xC4 | (2 * (((v117 & 2) != 0) | 2));
        if ( *(_UNKNOWN **)(v8 + 544) != &KiInitialProcess )
          *(_DWORD *)(v8 + 536) = *(_DWORD *)(v116 + 36);
      }
      v114 = 0;
    }
    else
    {
      v101 = 0;
      if ( v85 )
      {
        do
        {
          v102 = v165[5 * v101 + 2];
          v103 = &v165[5 * v101 + 2];
          v104 = v103[3];
          v105 = v104 - 1;
          if ( v102 == a1 )
          {
            if ( v105 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v104) )
            {
              if ( (*((_BYTE *)v103 + 33) & 1) != 0 )
                *(_DWORD *)(v106 + 116) |= 2u;
              *(_BYTE *)(v106 + 565) = 1;
              KiInsertDeferredReadyList(&v150, v106);
            }
            v107 = *(_DWORD *)(v8 + 120);
            v108 = v103[4] & 0xC4;
            *((_BYTE *)v103 + 33) &= ~1u;
            v103[2] = v8;
            v103[3] = v8;
            *((_BYTE *)v103 + 32) = v108 | (2 * (((v107 & 2) != 0) | 2));
            if ( !KiIsPrcbThread(v8) )
              *(_DWORD *)(v8 + 536) = *(_DWORD *)(v102 + 36);
          }
          else
          {
            v109 = *(_QWORD *)(v102 + 24);
            if ( v105 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v104) )
            {
              if ( (*((_BYTE *)v103 + 33) & 1) != 0 )
                *(_DWORD *)(v110 + 116) |= 2u;
              *(_BYTE *)(v110 + 565) = 1;
              KiInsertDeferredReadyList(&v150, v110);
            }
            v111 = v103[4] & 0xC5;
            v112 = (*(_DWORD *)(v109 + 120) & 2) != 0;
            v103[2] = v109;
            *((_BYTE *)v103 + 32) = v111 | (2 * v112) | 5;
            *((_BYTE *)v103 + 33) &= ~1u;
            v103[3] = v109;
            if ( !KiIsPrcbThread(v109) )
              *(_DWORD *)(v113 + 536) = *(_DWORD *)(v102 + 36);
          }
          ++v101;
        }
        while ( v101 < LOBYTE(v165[0]) );
      }
      v114 = 1;
    }
LABEL_223:
    v135 = v62 | (v114 << 7);
    HIDWORD(v165[0]) = v100;
    if ( v135 >= 0x80 )
      KiSearchForNewThreadsForRescheduleContext(v165, (__int64)&v150);
    v136 = 0;
    v137 = 0;
    v138 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v137 = 2;
    if ( LOBYTE(v165[0]) )
    {
      do
        v136 |= KiCommitRescheduleContextEntry((__int64)&v165[5 * v138++ + 2], (struct _KPRCB *)a1, v137, &v150);
      while ( v138 < LOBYTE(v165[0]) );
    }
    if ( LODWORD(v165[1]) == 1 )
    {
      v139 = *(unsigned __int8 **)(v165[2] + 34904LL);
      v140 = v139[1] + 1;
      if ( v140 >= *v139 )
        v140 = 0;
      v139[1] = v140;
    }
    v141 = 0LL;
    v142 = 0;
    v143 = v153 & 0xFFFFFFFFFFFFFFFEuLL;
    v144 = v135 | ((v136 & 1) << 8);
    v164 = v153 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v153 & 1) != 0 )
    {
      if ( (v153 & 1) == 1 )
      {
        v141 = (unsigned __int64 *)(*(_QWORD *)(v143 + 34904) + 8LL);
        v142 = **(unsigned __int8 **)(v143 + 34904);
      }
      if ( !v142 )
        goto LABEL_240;
    }
    else
    {
      v141 = &v164;
      v142 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v141[--v142] + 48), 0LL);
    while ( v142 );
LABEL_240:
    v145 = 0;
    v62 = v144 | 0x50;
    v153 = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( v62 < 0x100 )
    {
      v146 = a1 + 12760;
    }
    else
    {
      KiCompleteRescheduleContext(v165, a1);
      v146 = a1 + 12760;
      KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
    v147 = v150;
    if ( v150 )
    {
      v150 = (_QWORD *)*v150;
      do
      {
        KiDeferredReadySingleThread(a1, (unsigned __int64)(v147 - 27), (__int64)&v150);
        v147 = v150;
        ++v145;
        if ( v150 )
          v150 = (_QWORD *)*v150;
        if ( (v145 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v146);
      }
      while ( v147 );
      KiFlushSoftwareInterruptBatch(v146);
    }
  }
LABEL_251:
  if ( (v62 & 0x40) == 0 )
  {
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v153);
    *(_QWORD *)(v8 + 64) = 0LL;
  }
  if ( (v62 & 0x10) == 0 )
  {
    if ( KiCanThreadBeReadiedImmediately(v8) )
    {
      *v160 = 0LL;
      KiReadyDeferredReadyList(a1, &v160);
    }
    else
    {
      KiInswapAndReadyThread(a1, v8);
    }
  }
  return *(_QWORD *)(a1 + 11528) == 0LL;
}
