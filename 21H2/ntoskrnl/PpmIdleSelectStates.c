/*
 * XREFs of PpmIdleSelectStates @ 0x1403A1620
 * Callers:
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402D990C (PoCopyDeepIdleMask.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14030A3C0 (KiGetNextTimerExpirationDueTime.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PoAllProcessorsDeepIdle @ 0x1403545B0 (PoAllProcessorsDeepIdle.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PpmGetIdleConstrainedMask @ 0x14039D6B0 (PpmGetIdleConstrainedMask.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x14039E954 (PpmCheckPreConditionsForDeepSleep.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmEstimateIdleDuration @ 0x1405C7284 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405C7A38 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405C83DC (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1405C84DC (PpmIdleSetSynchronizationState.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1405C8640 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 */

unsigned __int64 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        char *a4,
        unsigned int *a5,
        int *a6,
        unsigned __int64 *a7,
        bool *a8)
{
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  LONGLONG v17; // rdx
  unsigned __int64 *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  int v21; // eax
  char v22; // al
  char v23; // bl
  unsigned __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // r10
  char v28; // al
  int v29; // r12d
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r8
  __int16 v32; // r12
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // eax
  char v39; // al
  int v40; // edi
  __int64 (__fastcall *v41)(_QWORD, __int64); // rax
  __int64 v42; // r13
  __int64 v43; // rsi
  unsigned int v44; // ebx
  int v45; // eax
  char v46; // r15
  char v47; // si
  __int64 v48; // rdx
  unsigned __int64 v49; // r12
  __int64 v50; // r10
  unsigned int v51; // edi
  __int64 v52; // r9
  unsigned int v53; // r11d
  __int64 v54; // r12
  unsigned __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  char v58; // dl
  int v59; // eax
  char v60; // r9
  int v61; // ecx
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rdi
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int i; // ecx
  unsigned int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r10
  unsigned int v72; // r9d
  unsigned int v73; // r8d
  __int64 v74; // rcx
  bool v75; // al
  int v76; // esi
  unsigned __int64 *result; // rax
  int v78; // eax
  unsigned int v79; // eax
  unsigned int (__fastcall *v80)(_QWORD, _QWORD); // rax
  unsigned int (__fastcall *v81)(_QWORD, _QWORD, __int64); // rax
  unsigned __int64 v82; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rdx
  signed __int64 v88; // rax
  int v89; // eax
  LARGE_INTEGER *v90; // r15
  _DWORD *v91; // rcx
  __int64 v92; // r8
  unsigned int v93; // r12d
  _DWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rsi
  int v98; // ebx
  unsigned __int8 v99; // cl
  int v100; // eax
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rdi
  unsigned int (__fastcall *v104)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v105; // rcx
  __int64 v106; // r15
  int v107; // eax
  unsigned int v108; // ecx
  _DWORD *v109; // rax
  bool v110; // zf
  _DWORD *v111; // rcx
  __int64 *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r8
  _DWORD *v115; // rax
  unsigned int v116; // ecx
  unsigned int *v117; // rax
  unsigned __int8 v118; // [rsp+50h] [rbp-B0h]
  char v119; // [rsp+50h] [rbp-B0h]
  char v120; // [rsp+51h] [rbp-AFh]
  unsigned int v121; // [rsp+54h] [rbp-ACh] BYREF
  int v122; // [rsp+58h] [rbp-A8h] BYREF
  int v123; // [rsp+5Ch] [rbp-A4h] BYREF
  int v124; // [rsp+60h] [rbp-A0h]
  unsigned int v125; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v126; // [rsp+68h] [rbp-98h]
  unsigned int v127; // [rsp+70h] [rbp-90h]
  unsigned int v128; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v129; // [rsp+78h] [rbp-88h]
  int v130; // [rsp+80h] [rbp-80h]
  int v131; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v132; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v133; // [rsp+90h] [rbp-70h]
  unsigned int v134; // [rsp+98h] [rbp-68h]
  __int64 v135; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v136; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER *v137; // [rsp+B0h] [rbp-50h]
  unsigned int *v138; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v139; // [rsp+C0h] [rbp-40h] BYREF
  bool *v140; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v141; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v142; // [rsp+D8h] [rbp-28h]
  __int64 v143; // [rsp+E0h] [rbp-20h]
  __int64 v144; // [rsp+E8h] [rbp-18h]
  __int64 v145; // [rsp+F0h] [rbp-10h]
  unsigned int *v146; // [rsp+F8h] [rbp-8h]
  int *v147; // [rsp+100h] [rbp+0h]
  char *v148; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v149; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v150[2]; // [rsp+118h] [rbp+18h] BYREF
  __int16 v151; // [rsp+128h] [rbp+28h]
  int v152; // [rsp+12Ah] [rbp+2Ah]
  __int16 v153; // [rsp+12Eh] [rbp+2Eh]
  __int128 v154; // [rsp+130h] [rbp+30h] BYREF
  __int64 v155; // [rsp+140h] [rbp+40h]
  _DWORD *v156; // [rsp+148h] [rbp+48h] BYREF
  int v157; // [rsp+150h] [rbp+50h]
  int v158; // [rsp+154h] [rbp+54h]
  unsigned int *v159; // [rsp+158h] [rbp+58h] BYREF
  int v160; // [rsp+160h] [rbp+60h]
  int v161; // [rsp+164h] [rbp+64h]
  _QWORD v162[34]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v163[68]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v164[34]; // [rsp+390h] [rbp+290h] BYREF

  v146 = a5;
  v147 = a6;
  v149 = a7;
  v142 = a3;
  v137 = a2;
  v126 = a1;
  v140 = a8;
  v148 = a4;
  memset(v163, 0, 0x108uLL);
  v9 = *(_QWORD *)(a1 + 33600);
  v10 = 0LL;
  v143 = *(_QWORD *)(a1 + 33608);
  v135 = PpmPlatformStates;
  v129 = *(_QWORD *)(a1 + 33600);
  v144 = v9;
  v134 = PopFxSystemLatencyHint;
  v118 = 0;
  LOBYTE(v124) = 1;
  LOBYTE(v130) = 0;
  v120 = 0;
  v121 = 0;
  v133 = 0LL;
  v127 = 0;
  v138 = 0LL;
  v128 = 0;
  v122 = 0;
  v136 = 0LL;
  v141 = 0LL;
  v131 = 0;
  while ( 1 )
  {
    v11 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v12 = MEMORY[0xFFFFF78000000350];
      v13 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v11 )
        break;
    }
    _mm_pause();
  }
  v15 = v129;
  v16 = v144;
  if ( PerformanceCounter.QuadPart > v12 )
  {
    v145 = 0LL;
    v17 = PerformanceCounter.QuadPart - v12 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v17 <<= MEMORY[0xFFFFF78000000369];
    v10 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v145 = v10;
  }
  v18 = v142;
  v19 = v10 + v13;
  v20 = v126;
  *v142 = v19;
  *(LARGE_INTEGER *)(v15 + 688) = PerformanceCounter;
  *(_QWORD *)(v15 + 696) = *(_QWORD *)(v20 + 33624) + *(_QWORD *)(v20 + 33808);
  *(_BYTE *)(v15 + 730) = *(_BYTE *)(v20 + 34060);
  *(_BYTE *)(v15 + 728) = *(_BYTE *)(v20 + 33664);
  *(_BYTE *)(v15 + 729) = *(_BYTE *)(v20 + 33665);
  *(_BYTE *)(v15 + 731) = 1;
  if ( *(_BYTE *)(v20 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v15 + 732) = 1;
    *(_WORD *)(v15 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v15 + 732) = 0;
  }
  if ( *(_BYTE *)(v15 + 1) )
  {
    *(_WORD *)(v15 + 48) |= 0x100u;
    v21 = *(_DWORD *)(v15 + 28);
  }
  else
  {
    v21 = -1;
  }
  *(_DWORD *)(v15 + 720) = v21;
  if ( PpmIdleRespectIdleStateMax )
  {
    v22 = BYTE6(PpmCurrentProfile[534 * dword_140C232CC + 24]);
    *(_BYTE *)(v15 + 734) = v22;
    if ( v22 )
      *(_WORD *)(v15 + 48) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v15 + 734) = 0;
  }
  *v137 = PerformanceCounter;
  *(_QWORD *)(v16 + 336) = 2097153LL;
  memset((void *)(v16 + 344), 0, 0x100uLL);
  v23 = *(_BYTE *)(v20 + 33);
  v24 = *v18;
  v25 = *(_QWORD *)(v20 + 33600);
  if ( !v23 && KiSerializeTimerExpiration )
  {
    v129 = 0LL;
    _m_prefetchw(&PpmPlatformIdleHint);
    v87 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v88 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v87 ^ (unsigned __int16)(v87 ^ (v87 - 1)), v87);
        if ( v87 == v88 )
          break;
        v87 = v88;
        _mm_pause();
        if ( !(_WORD)v88 )
          goto LABEL_149;
      }
      v129 = v87 >> 16;
    }
LABEL_149:
    v26 = *(_QWORD *)(v20 + 33600);
    v23 = *(_BYTE *)(v20 + 33);
  }
  else
  {
    v129 = 0LL;
    v26 = v25;
  }
  v152 = 0;
  v153 = 0;
  memset(&v162[1], 0, 0x100uLL);
  v27 = v126;
  v28 = *(_BYTE *)(v26 + 732);
  v29 = -(v23 != 0);
  v30 = KiClockTimerNextTickTime;
  v31 = 0LL;
  v32 = v29 & 8;
  v125 = 0;
  v33 = -1LL;
  v132 = 0LL;
  v123 = 2;
  if ( *(_BYTE *)(v126 + 33) )
  {
    if ( v28 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      KiGetNextTimerExpirationDueTime(v126, 1u, v24, 0, 0, &v132, &v123);
      v31 = 0LL;
      v27 = v126;
      if ( v24 + (unsigned int)KiLastRequestedTimeIncrement < v132 )
        v30 = v132;
      else
        v123 = 2;
    }
  }
  else
  {
    KiGetNextTimerExpirationDueTime(v126, 0, v24, 0, 0, &v132, &v123);
    v27 = v126;
    if ( v30 <= v132 )
      v30 = v132;
    v31 = 0LL;
  }
  if ( v30 == -1LL )
  {
    v34 = -1LL;
  }
  else
  {
    v34 = 0LL;
    if ( v30 > v24 )
      v34 = v30 - v24;
  }
  v35 = *(_DWORD *)(v27 + 11684);
  v36 = 0;
  v37 = v35;
  if ( v35 )
  {
    do
    {
      v36 += KeMaximumIncrement;
      v37 >>= 4;
    }
    while ( v37 );
    v31 = v36;
    v38 = KeMaximumIncrement / (v35 + 1);
    if ( !v38 )
      v38 = 1;
    v33 = v38;
  }
  if ( v34 <= v33 )
  {
    v33 = v34;
  }
  else
  {
    v32 |= 1u;
    if ( v34 >= v31 )
      v34 = v31;
  }
  LODWORD(v162[0]) = 2097153;
  memset((char *)v162 + 4, 0, 0x104uLL);
  if ( PpmIdleDurationExpirationTimeout
    && *(_BYTE *)(v126 + 33)
    && (unsigned __int8)PpmGetIdleConstrainedMask((unsigned __int16 *)v162) )
  {
    v82 = 0LL;
    v151 = 0;
    v150[1] = (unsigned __int16 *)v162[1];
    v150[0] = (unsigned __int16 *)v162;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v125, v150) )
    {
      Prcb = KeGetPrcb(v125);
      v84 = *(_QWORD *)(Prcb + 33648);
      if ( v84 > v82 && v84 != -1LL )
        v82 = *(_QWORD *)(Prcb + 33648);
    }
    if ( v82 && v34 + v24 > v82 )
    {
      v32 |= 0x2000u;
      v34 = v82 > v24 ? (unsigned int)(v82 - v24) : 1LL;
      if ( v34 < v33 )
        v33 = v34;
    }
  }
  if ( v33 < v129 )
  {
    v33 = v129;
    v34 = v129;
    v32 |= 0x1000u;
  }
  *(_WORD *)(v25 + 48) |= v32;
  v39 = v123;
  *(_QWORD *)(v25 + 712) = v34;
  v40 = -1;
  *(_BYTE *)(v25 + 733) = v39;
  *(_QWORD *)(v25 + 704) = v33;
  v41 = *(__int64 (__fastcall **)(_QWORD, __int64))(v16 + 624);
  v125 = -1;
  if ( v41 )
  {
    v40 = v41(*(_QWORD *)(v16 + 680), v16 + 688);
    v125 = v40;
  }
  v42 = v126;
  if ( *(_BYTE *)(v126 + 33669) )
  {
    v40 = 0;
    v125 = 0;
  }
  v43 = v135;
  if ( !v135 )
  {
    v44 = v121;
    goto LABEL_43;
  }
  *(_QWORD *)(v16 + 768) = 2097153LL;
  memset((void *)(v16 + 776), 0, 0x100uLL);
  PoCopyDeepIdleMask((unsigned __int16 *)(v16 + 768));
  KeAddProcessorAffinityEx((unsigned __int16 *)(v16 + 768), *(_DWORD *)(v42 + 36));
  v89 = *(_DWORD *)v43;
  v90 = *(LARGE_INTEGER **)(v43 + 48);
  v91 = *(_DWORD **)(v16 + 1040);
  v137 = v90;
  v133 = v91;
  memset(v91, 0, 4 * v89 + 8);
  v44 = v121;
  v92 = 0LL;
  v93 = 0;
  if ( !*(_DWORD *)(v16 + 1064) )
    goto LABEL_208;
  v94 = v133;
  v95 = 0LL;
  while ( 1 )
  {
    if ( PpmIdleVetoBias )
      goto LABEL_199;
    v96 = *(_QWORD *)(v16 + 1072);
    if ( !*(_BYTE *)(v96 + 24LL * v93 + 1) )
    {
      v95 = v127;
LABEL_199:
      LODWORD(v103) = -2;
      goto LABEL_200;
    }
    v97 = *(unsigned int *)(v96 + 24LL * v93 + 4);
    v98 = v126;
    if ( PpmDripsStateIndex == -1 || (unsigned int)v97 < PpmDripsStateIndex || !PpmCheckPreConditionsForDeepSleep(v126) )
    {
      v100 = (unsigned __int8)v124;
      if ( v118 == 1 )
        v100 = 1;
      v99 = 0;
    }
    else
    {
      v99 = 1;
      v100 = (unsigned __int8)v124;
      if ( !v118 )
        v100 = 1;
    }
    v118 = v99;
    v124 = v100;
    if ( (_BYTE)v100 )
    {
      LOBYTE(v124) = 0;
      PpmEstimateIdleDuration(v98, v99, v99, *v142, v92, (__int64)&v136, (__int64)&v141, (__int64)&v131, (__int64)&v122);
      LODWORD(v92) = 0;
    }
    v101 = v136;
    v121 = -1;
    *(_DWORD *)(v16 + 1084) = v92;
    v102 = PpmIdleCheckCoordinatedStateEligibility(v98, v40, v134, v101, v97, v97, (__int64)&v121, v16 + 1080);
    v44 = v121;
    v103 = v102;
    if ( !*(_BYTE *)(v135 + 12) && !v102 )
    {
      v104 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v135 + 16);
      if ( v104 )
        v103 = v104(*(_QWORD *)(v16 + 680), v121, (unsigned int)v97);
    }
    PpmIdleUpdateSelectionStatistics(v103, &v90[126 * v97 + 9]);
    v105 = 0xFFFFFFFFLL;
    v106 = v135 + 448 * v97;
    if ( v103 == 0xFFFFFFFFLL )
      goto LABEL_194;
    v129 = *(_QWORD *)(v106 + 64);
    if ( !v103 )
    {
      v109 = v133;
      *v140 = 1;
      *v109 = v97;
      v110 = *(_BYTE *)(v106 + 121) == 0;
      v163[0] = 2097153;
      if ( !v110 )
        v105 = (unsigned int)v97;
      v137 = (LARGE_INTEGER *)v105;
      v76 = v105;
      memset(&v163[1], 0, 0x104uLL);
      if ( (unsigned int)KiSubtractAffinityEx((_WORD *)(v16 + 336), (char *)(v106 + 128), v163, HIWORD(v163[0])) )
        PpmUnlockProcessors(v16 + 336, v163);
      v42 = v126;
      LODWORD(v50) = 0;
      v46 = v118;
      v49 = v129;
      v73 = v128;
      goto LABEL_90;
    }
    if ( v103 != 2147483651LL )
    {
LABEL_194:
      v107 = (unsigned __int8)v130;
      if ( v103 == 2147483656LL )
        v107 = 1;
      v130 = v107;
    }
    else
    {
      v120 = 1;
    }
    PpmIdleRollbackCoordinatedSelection(v16 + 1080, 0LL);
    v94 = v133;
    v92 = 0LL;
    v95 = v127;
    v90 = v137;
LABEL_200:
    v108 = v95 + 1;
    v94[v95 + 2] = v103;
    ++v93;
    v95 = (unsigned int)(v95 + 1);
    v127 = v108;
    if ( v93 >= *(_DWORD *)(v16 + 1064) )
      break;
    v40 = v125;
  }
  v127 = v108;
LABEL_208:
  v111 = v133;
  *(_DWORD *)(v16 + 1084) = 0;
  *v111 = -1;
  PpmUnlockProcessors(v16 + 336, v16 + 336);
  v42 = v126;
LABEL_43:
  v45 = *(_DWORD *)(v16 + 32);
  v46 = 0;
  v47 = 1;
  v138 = *(unsigned int **)(v16 + 1032);
  memset(v138, 0, 4 * v45 + 8);
  v49 = *(_QWORD *)(v16 + 40);
  v50 = 0LL;
  v51 = 0;
  v129 = v49;
  v124 = 0;
  if ( !*(_DWORD *)(v16 + 1048) )
  {
    v73 = 0;
    goto LABEL_89;
  }
  v52 = 2147483658LL;
  v53 = 0x80000000;
  while ( 2 )
  {
    v54 = v51;
    v44 = *(_DWORD *)(*(_QWORD *)(v16 + 1056) + 24LL * v51 + 4);
    v121 = v44;
    if ( !v135 && v44 == *(_DWORD *)(v16 + 32) - 1 && *(_BYTE *)(v16 + 732) && PpmCheckPreConditionsForDeepSleep(v42) )
    {
      v119 = 1;
      if ( !v46 )
        v47 = 1;
    }
    else
    {
      if ( v46 == 1 )
        v47 = 1;
      v119 = 0;
    }
    if ( v47 )
    {
      LOBYTE(v126) = 0;
      v154 = 0LL;
      v55 = *v142;
      v155 = 0LL;
      memset(v164, 0, 0x108uLL);
      v56 = *(_QWORD *)(v42 + 33600);
      LODWORD(v132) = 0;
      v57 = -1LL;
      v58 = *(_BYTE *)(v56 + 732);
      v59 = 0;
      v122 = 0;
      if ( *(_BYTE *)(v42 + 33) )
      {
        v59 = 8;
        v122 = 8;
      }
      v60 = v119;
      if ( v119 )
        v122 = v59 | 4;
      v61 = 2;
      v62 = KiClockTimerNextTickTime;
      v123 = 2;
      v139 = 0LL;
      if ( *(_BYTE *)(v42 + 33) )
      {
        if ( v58 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
        {
          KiGetNextTimerExpirationDueTime(v42, 1u, v55, v119, 0, &v139, &v123);
          v60 = v119;
          if ( v55 + (unsigned int)KiLastRequestedTimeIncrement < v139 )
          {
            v62 = v139;
            goto LABEL_59;
          }
          v61 = 2;
        }
      }
      else
      {
        KiGetNextTimerExpirationDueTime(v42, 0, v55, v119, 0, &v139, &v123);
        v60 = v119;
        if ( v62 <= v139 )
          v62 = v139;
LABEL_59:
        v61 = v123;
      }
      if ( v62 == -1LL )
      {
        v63 = -1LL;
      }
      else
      {
        v63 = 0LL;
        if ( v62 > v55 )
          v63 = v62 - v55;
      }
      v64 = *(_DWORD *)(v42 + 11684);
      v65 = v64;
      v131 = v61;
      for ( i = 0; v65; v65 >>= 4 )
        i += KeMaximumIncrement;
      if ( !v60 && v64 )
      {
        v67 = KeMaximumIncrement / (v64 + 1);
        if ( !v67 )
          v67 = 1;
        v57 = v67;
      }
      if ( v63 <= v57 )
      {
        v57 = v63;
      }
      else
      {
        v122 |= 1u;
        if ( v63 >= i )
          v63 = i;
      }
      LODWORD(v164[0]) = 2097153;
      memset((char *)v164 + 4, 0, 0x104uLL);
      if ( PpmIdleDurationExpirationTimeout
        && *(_BYTE *)(v42 + 33)
        && (unsigned __int8)PpmGetIdleConstrainedMask((unsigned __int16 *)v164) )
      {
        v85 = 0LL;
        *((_QWORD *)&v154 + 1) = v164[1];
        *(_QWORD *)&v154 = v164;
LABEL_136:
        v86 = v85;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v132, (unsigned __int16 **)&v154) )
        {
          v85 = *(_QWORD *)(KeGetPrcb(v132) + 33648);
          if ( v85 > v86 && v85 != -1LL )
            goto LABEL_136;
        }
        if ( v86 && v63 + v55 > v86 )
        {
          v122 |= 0x2000u;
          v63 = v86 > v55 ? (unsigned int)(v86 - v55) : 1LL;
          if ( v63 < v57 )
            v57 = v63;
        }
      }
      v44 = v121;
      v50 = 0LL;
      v141 = v63;
      v53 = 0x80000000;
      v51 = v124;
      v52 = 2147483658LL;
      v136 = v57;
      v47 = v126;
    }
    if ( !v44 )
    {
      v70 = v50;
      v71 = v143 + 80;
      goto LABEL_83;
    }
    v68 = *(_QWORD *)(v42 + 33600);
    if ( *(_DWORD *)(v68 + 36) == 3 && PpmIdleVetoBias )
    {
      v48 = 4294967294LL;
      goto LABEL_82;
    }
    v69 = 344LL * v44;
    if ( *(_BYTE *)(v69 + v68 + 1447) )
    {
      v48 = v52;
      goto LABEL_82;
    }
    if ( v44 > v125 && v125 != -1 )
    {
      v48 = 2147483656LL;
      goto LABEL_82;
    }
    if ( !*(_BYTE *)(v69 + v68 + 1442) && *(_BYTE *)(v68 + 731) )
    {
      v48 = 2147483655LL;
      goto LABEL_82;
    }
    v78 = *(_DWORD *)(v69 + v68 + 1400);
    if ( v78 )
    {
      if ( v78 >= 0 )
      {
        if ( *(_QWORD *)(v69 + v68 + 1432) )
        {
          v112 = (__int64 *)(v69 + v68 + 1408);
          v113 = *v112;
          v110 = *v112 == (_QWORD)v112;
          v79 = v53;
          if ( !v110 )
            v79 = *(_DWORD *)(v113 + 16);
        }
        else
        {
          v79 = v53;
        }
      }
      else
      {
        v79 = -2147483635;
      }
    }
    else
    {
      v79 = v50;
    }
    v44 = v121;
    if ( v79 )
    {
      v48 = v79 | 0x100000000LL;
      goto LABEL_158;
    }
    if ( *(_DWORD *)(v69 + v68 + 1384) > v134 )
    {
      v44 = v121;
      v48 = 2147483650LL;
      goto LABEL_82;
    }
    if ( *(unsigned int *)(v69 + v68 + 1388) > v136 )
    {
      v44 = v121;
      v48 = 2147483651LL;
      goto LABEL_82;
    }
    v80 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v68 + 640);
    if ( v80 )
    {
      v48 = v80(*(_QWORD *)(v68 + 680), v121);
LABEL_158:
      if ( !v48 )
        goto LABEL_112;
      goto LABEL_82;
    }
    v48 = v50;
LABEL_112:
    v81 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v16 + 632);
    if ( v81 )
      v48 = v81(*(_QWORD *)(v16 + 680), v44, 0xFFFFFFFFLL);
LABEL_82:
    v70 = v48;
    v71 = 1000LL * v44 + v143 + 80;
    if ( !v48 )
    {
LABEL_83:
      v72 = 0;
      goto LABEL_84;
    }
    v53 = 0x80000000;
    if ( (v48 & 0x80000000) != 0 )
    {
      if ( (unsigned int)v48 <= 0x8000000C )
      {
        v72 = v48 - 2147483646;
        goto LABEL_84;
      }
LABEL_99:
      if ( v70 == 2147483651LL )
      {
        v120 = 1;
      }
      else if ( v70 == 2147483656LL )
      {
        LOBYTE(v130) = 1;
      }
      ++v51;
      v46 = v119;
      v50 = 0LL;
      v124 = v51;
      v52 = 2147483658LL;
      v138[v54 + 2] = v70;
      if ( v51 >= *(_DWORD *)(v16 + 1048) )
      {
        v49 = v129;
        v73 = 0;
        goto LABEL_89;
      }
      continue;
    }
    break;
  }
  if ( (v48 & 0x100000000LL) != 0 )
  {
    v114 = *(_QWORD *)(v71 + 120);
    v72 = 2;
    if ( v114 )
      ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v48 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v114 + 32) + 24);
  }
  else
  {
    v72 = 1;
  }
  v70 = v48;
LABEL_84:
  ++*(_QWORD *)(v71 + 8LL * v72);
  if ( v70 )
  {
    v53 = 0x80000000;
    goto LABEL_99;
  }
  v73 = v51;
  v74 = 344LL * v44;
  v128 = v51;
  *v138 = v44;
  v75 = !*(_BYTE *)(v74 + v16 + 1442) || v135 && (!*(_BYTE *)(v74 + v16 + 1445) || v44);
  v48 = (__int64)v140;
  LODWORD(v50) = 0;
  v46 = v119;
  v49 = v129;
  *v140 = v75;
LABEL_89:
  v76 = -1;
LABEL_90:
  if ( *v140 )
  {
    LOBYTE(v48) = 1;
    PpmIdleSetSynchronizationState(v42 + 33672, v48);
    v73 = v128;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v115 = v133;
    if ( v133 )
    {
      v116 = v127;
      v133[1] = v127;
      v156 = v115;
      v158 = v50;
      v157 = 4 * v116 + 8;
      EtwTraceKernelEvent((__int64)&v156, 1u, 0x40200000u, 0x123Eu, 0x602u);
      v73 = v128;
      LODWORD(v50) = 0;
    }
    v117 = v138;
    if ( v138 )
    {
      v138[1] = v73;
      v159 = v117;
      v161 = v50;
      v160 = 4 * v73 + 8;
      EtwTraceKernelEvent((__int64)&v159, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v16 + 48) |= v122;
  *(_BYTE *)(v16 + 7) = v130;
  *(_BYTE *)(v16 + 6) = v120;
  *(_QWORD *)(v16 + 712) = v141;
  *(_QWORD *)(v16 + 704) = v136;
  *(_BYTE *)(v16 + 733) = v131;
  *v146 = v44;
  *v147 = v76;
  *v148 = v46;
  result = v149;
  *v149 = v49;
  return result;
}
