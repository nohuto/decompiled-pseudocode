unsigned __int64 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        char *a5,
        unsigned int *a6,
        int *a7,
        unsigned __int64 *a8,
        bool *a9)
{
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  LARGE_INTEGER v14; // rsi
  __int64 v15; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v17; // r12
  LARGE_INTEGER v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rdx
  int v21; // ecx
  char v22; // al
  char v23; // bl
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rsi
  unsigned __int64 v27; // r12
  __int64 v28; // r10
  unsigned __int64 v29; // r15
  char v30; // al
  int v31; // r14d
  unsigned __int64 v32; // rbx
  __int16 v33; // r14
  unsigned __int64 v34; // rsi
  int v35; // ecx
  unsigned int v36; // eax
  bool v37; // zf
  char v38; // al
  __int64 v39; // rsi
  __int64 v40; // rdi
  int v41; // r14d
  __int64 (__fastcall *v42)(_QWORD, __int64); // rax
  __int64 v43; // r15
  unsigned int v44; // ebx
  int v45; // eax
  char v46; // r12
  char v47; // r14
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r11
  unsigned int v52; // r15d
  __int64 v53; // r9
  unsigned int v54; // r10d
  __int64 v55; // rax
  __int64 v56; // r13
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // r14
  char v59; // dl
  int v60; // eax
  int v61; // ecx
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rdi
  int v64; // ecx
  unsigned int v65; // eax
  __int64 v66; // r8
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // r10
  unsigned int v71; // r8d
  __int64 v72; // rax
  unsigned int *v73; // r14
  unsigned int v74; // ecx
  bool v75; // al
  int v76; // r15d
  unsigned __int64 *result; // rax
  unsigned int *v78; // rax
  int v79; // eax
  unsigned int v80; // eax
  unsigned int (__fastcall *v81)(_QWORD, _QWORD); // rax
  unsigned int (__fastcall *v82)(_QWORD, _QWORD, __int64); // rax
  char v83; // bl
  int v84; // r10d
  __int64 v85; // r11
  unsigned int v86; // edx
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // r9
  unsigned __int16 v89; // r10
  unsigned __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int16 *v99; // r10
  int *v100; // r14
  int v101; // r15d
  unsigned int v102; // r9d
  __int64 v103; // rcx
  _KSCHEDULER_SUBNODE *v104; // rcx
  unsigned __int64 DeepIdleSet; // rdx
  unsigned __int64 Mask; // r8
  char v107; // bl
  unsigned int v108; // edx
  __int64 v109; // r11
  unsigned int v110; // r8d
  unsigned __int64 v111; // r13
  unsigned __int64 v112; // rbx
  unsigned __int64 v113; // rdx
  unsigned __int16 v114; // r8
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // r9
  __int64 v121; // r10
  unsigned __int64 v122; // rdx
  int NextNode; // eax
  signed __int64 v124; // rax
  __int64 v125; // r12
  _DWORD *v126; // rcx
  int v127; // eax
  unsigned __int64 v128; // r10
  unsigned int v129; // r13d
  _DWORD *v130; // r9
  __int64 v131; // r8
  int v132; // r11d
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // r15
  char v136; // cl
  int v137; // r9d
  unsigned int v138; // r8d
  __int64 *v139; // rax
  __int64 v140; // rax
  __int64 v141; // r12
  __int64 v142; // r14
  unsigned int (__fastcall *v143)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v144; // rcx
  __int64 v145; // r12
  char updated; // al
  __int64 v147; // r8
  __int64 v148; // rcx
  _DWORD *v149; // rax
  __int64 *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // r11
  unsigned int v153; // eax
  unsigned int v154; // ecx
  _DWORD *v155; // rdx
  unsigned int v156; // eax
  __int64 v157; // [rsp+20h] [rbp-E0h]
  char v158; // [rsp+50h] [rbp-B0h]
  unsigned int v159; // [rsp+54h] [rbp-ACh] BYREF
  int v160; // [rsp+58h] [rbp-A8h] BYREF
  char v161; // [rsp+5Ch] [rbp-A4h]
  unsigned int v162; // [rsp+60h] [rbp-A0h]
  unsigned int v163; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v164; // [rsp+68h] [rbp-98h]
  unsigned int v165; // [rsp+70h] [rbp-90h]
  __int64 v166; // [rsp+78h] [rbp-88h]
  unsigned __int64 v167; // [rsp+80h] [rbp-80h]
  int v168; // [rsp+88h] [rbp-78h] BYREF
  int v169; // [rsp+8Ch] [rbp-74h] BYREF
  int v170; // [rsp+90h] [rbp-70h] BYREF
  __int64 v171; // [rsp+98h] [rbp-68h]
  ULONG v172; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v173; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v174; // [rsp+B8h] [rbp-48h]
  unsigned int *v175; // [rsp+C0h] [rbp-40h]
  unsigned int v176; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v177; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v178; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v179; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v180; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v181; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v182; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v183; // [rsp+100h] [rbp+0h]
  int v184; // [rsp+108h] [rbp+8h]
  __int64 v185; // [rsp+110h] [rbp+10h]
  bool *v186; // [rsp+118h] [rbp+18h]
  __int64 v187; // [rsp+120h] [rbp+20h]
  int v188; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v189; // [rsp+138h] [rbp+38h]
  int *v190; // [rsp+140h] [rbp+40h]
  char *v191; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v192; // [rsp+150h] [rbp+50h]
  _DWORD *v193; // [rsp+158h] [rbp+58h] BYREF
  int v194; // [rsp+160h] [rbp+60h]
  int v195; // [rsp+164h] [rbp+64h]
  unsigned int *v196; // [rsp+168h] [rbp+68h] BYREF
  int v197; // [rsp+170h] [rbp+70h]
  int v198; // [rsp+174h] [rbp+74h]
  int v199; // [rsp+180h] [rbp+80h]
  _DWORD v200[135]; // [rsp+184h] [rbp+84h] BYREF
  _DWORD v201[68]; // [rsp+3A0h] [rbp+2A0h] BYREF

  v191 = a5;
  v189 = a6;
  v190 = a7;
  v192 = a8;
  v180 = a3;
  v161 = a2;
  v166 = a1;
  v186 = a9;
  v177 = a4;
  memset(v201, 0, 0x108uLL);
  v10 = *(_QWORD *)(a1 + 33600);
  v187 = *(_QWORD *)(a1 + 33608);
  v11 = 0LL;
  v183 = PpmPlatformStates;
  v12 = *(_QWORD *)(a1 + 33600);
  v185 = v10;
  v158 = 0;
  LOBYTE(v162) = 1;
  v173 = 0LL;
  v159 = 0;
  v174 = 0LL;
  v165 = 0;
  v175 = 0LL;
  v163 = 0;
  v160 = 0;
  v179 = 0LL;
  v178 = 0LL;
  v170 = 0;
  v176 = PopFxSystemLatencyHint;
  while ( 1 )
  {
    v13 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v14.QuadPart = MEMORY[0xFFFFF78000000350];
      v15 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v13 )
        break;
    }
    _mm_pause();
  }
  v17 = v166;
  v18 = PerformanceCounter;
  v19 = v185;
  if ( PerformanceCounter.QuadPart > (unsigned __int64)v14.QuadPart )
  {
    v171 = 0LL;
    v20 = -1 - v14.QuadPart + PerformanceCounter.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v20 <<= MEMORY[0xFFFFF78000000369];
    v11 = ((unsigned __int64)v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v171 = v11;
  }
  *v177 = v11 + v15;
  *(LARGE_INTEGER *)(v12 + 696) = v18;
  *(_QWORD *)(v12 + 704) = *(_QWORD *)(v17 + 33624) + *(_QWORD *)(v17 + 33808);
  *(_BYTE *)(v12 + 738) = *(_BYTE *)(v17 + 34060);
  *(_BYTE *)(v12 + 736) = *(_BYTE *)(v17 + 33664);
  *(_BYTE *)(v12 + 737) = *(_BYTE *)(v17 + 33665);
  *(_BYTE *)(v12 + 739) = 1;
  if ( *(_BYTE *)(v17 + 33) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v172 = 0;
    v99 = (unsigned __int16 *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]];
    v100 = &KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
    v101 = *v99;
    while ( 1 )
    {
      v102 = *((_DWORD *)v99 + 4);
      while ( v102 )
      {
        _BitScanForward((unsigned int *)&v103, v102);
        v184 = v103;
        v102 &= ~(1 << v103);
        v104 = *(_KSCHEDULER_SUBNODE **)&v99[4 * v103 + 12];
        DeepIdleSet = v104->DeepIdleSet;
        Mask = v104->Affinity.Mask;
        if ( v104 == CurrentPrcb->SchedulerSubNode )
        {
          DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
          _bittestandreset64((__int64 *)&Mask, *v100 & 0x3F);
        }
        if ( DeepIdleSet != Mask )
          goto LABEL_9;
      }
      NextNode = MmGetNextNode(v101, (int *)&v172);
      v21 = -1;
      if ( NextNode == -1 )
        break;
      v99 = (unsigned __int16 *)KeNodeBlock[NextNode];
    }
    *(_BYTE *)(v12 + 740) = 1;
    *(_WORD *)(v12 + 56) |= 0x80u;
  }
  else
  {
LABEL_9:
    *(_BYTE *)(v12 + 740) = 0;
    v21 = -1;
  }
  if ( *(_BYTE *)(v12 + 1) )
  {
    *(_WORD *)(v12 + 56) |= 0x100u;
    v21 = *(_DWORD *)(v12 + 36);
  }
  *(_DWORD *)(v12 + 728) = v21;
  if ( PpmIdleRespectIdleStateMax )
  {
    v22 = BYTE6(PpmCurrentProfile[55 * dword_140C3D48C + 24]);
    *(_BYTE *)(v12 + 742) = v22;
    if ( v22 )
      *(_WORD *)(v12 + 56) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v12 + 742) = 0;
  }
  *v180 = v18.QuadPart;
  *(_QWORD *)(v19 + 344) = 2097153LL;
  memset((void *)(v19 + 352), 0, 0x100uLL);
  v23 = *(_BYTE *)(v17 + 33);
  v24 = *(_QWORD *)(v17 + 33600);
  v167 = v24;
  v25 = *v177;
  v164 = *v177;
  if ( !v23 && KiSerializeTimerExpiration )
  {
    v180 = 0LL;
    _m_prefetchw(&PpmPlatformIdleHint);
    v122 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v124 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v122 ^ (unsigned __int16)(v122 ^ (v122 - 1)), v122);
        if ( v122 == v124 )
          break;
        v122 = v124;
        _mm_pause();
        if ( !(_WORD)v124 )
          goto LABEL_182;
      }
      v180 = (_QWORD *)(v122 >> 16);
    }
LABEL_182:
    v23 = *(_BYTE *)(v17 + 33);
    v26 = *(_QWORD *)(v17 + 33600);
  }
  else
  {
    v180 = 0LL;
    v26 = v24;
  }
  if ( !v161 || KiClockTimerPerCpuTickScheduling || (v27 = PpmPerfQosIdleExpirationTimeout, v23) )
    v27 = -1LL;
  memset(&v200[1], 0, 0x100uLL);
  v28 = v166;
  v29 = -1LL;
  v30 = *(_BYTE *)(v26 + 740);
  v31 = -(v23 != 0);
  v32 = KiClockTimerNextTickTime;
  v33 = v31 & 8;
  v181 = 0LL;
  v168 = 2;
  if ( *(_BYTE *)(v166 + 33) )
  {
    if ( v30 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      KiGetNextTimerExpirationDueTime(v166, 1u, v25, 0, 0, &v181, &v168, 0LL);
      v28 = v166;
      if ( v25 + (unsigned int)KiLastRequestedTimeIncrement < v181 )
        v32 = v181;
      else
        v168 = 2;
    }
  }
  else
  {
    KiGetNextTimerExpirationDueTime(v166, 0, v25, 0, 0, &v181, &v168, 0LL);
    v28 = v166;
    if ( v32 <= v181 )
      v32 = v181;
  }
  if ( v32 == -1LL )
  {
    v34 = -1LL;
  }
  else
  {
    v34 = 0LL;
    if ( v32 > v25 )
      v34 = v32 - v25;
  }
  if ( v34 >= v27 )
    v34 = v27;
  v35 = *(_DWORD *)(v28 + 11684);
  if ( v35 )
  {
    v36 = KeMaximumIncrement / (unsigned int)(v35 + 1);
    if ( !v36 )
      v36 = 1;
    v29 = v36;
  }
  if ( v34 <= v29 )
    v29 = v34;
  else
    v33 |= 1u;
  v199 = 2097153;
  memset(v200, 0, 0x104uLL);
  if ( !PpmIdleDurationExpirationTimeout )
    goto LABEL_36;
  if ( !*(_BYTE *)(v166 + 33) )
    goto LABEL_36;
  v107 = 0;
  memset(&v200[1], 0, 8LL * (unsigned __int16)v199);
  LOWORD(v199) = 1;
  v108 = 0;
  if ( !KeNumberNodes )
    goto LABEL_36;
  do
  {
    v109 = KeNodeBlock[v108];
    v110 = *(_DWORD *)(v109 + 16);
    while ( v110 )
    {
      _BitScanForward((unsigned int *)&v118, v110);
      v110 &= ~(1 << v118);
      v119 = *(_QWORD *)(v109 + 8 * v118 + 24);
      v120 = *(unsigned __int16 *)(v119 + 136);
      v121 = *(_QWORD *)(v119 + 72);
      if ( (unsigned __int16)v199 <= (unsigned __int16)v120 )
      {
        if ( HIWORD(v199) <= (unsigned __int16)v120 )
          goto LABEL_170;
        LOWORD(v199) = v120 + 1;
      }
      *(_QWORD *)&v200[2 * v120 + 1] |= v121;
LABEL_170:
      if ( *(_QWORD *)(v119 + 72) )
        v107 = 1;
    }
    ++v108;
  }
  while ( v108 < (unsigned __int16)KeNumberNodes );
  v24 = v167;
  v111 = v164;
  if ( v107 )
  {
    v112 = *(_QWORD *)&v200[1];
    v113 = 0LL;
    LOWORD(v164) = 0;
    v167 = 0LL;
    v114 = 0;
    while ( v112 )
    {
LABEL_163:
      _BitScanForward64(&v115, v112);
      v112 &= ~(1LL << v115);
      v172 = KiProcessorNumberToIndexMappingTable[64 * v114 + (unsigned __int8)v115];
      if ( v172 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
      {
        v116 = 0LL;
      }
      else
      {
        _mm_lfence();
        v116 = KiProcessorBlock[v172];
      }
      v117 = *(_QWORD *)(v116 + 33648);
      v113 = v167;
      v114 = v164;
      if ( v117 != -1LL && v117 > v167 )
      {
        v113 = v117;
        v167 = v117;
      }
    }
    while ( 1 )
    {
      LOWORD(v164) = ++v114;
      if ( v114 >= (unsigned int)(unsigned __int16)v199 )
        break;
      v112 = *(_QWORD *)&v200[2 * v114 + 1];
      if ( v112 )
        goto LABEL_163;
    }
    if ( v113 && v34 + v111 > v113 )
    {
      v33 |= 0x2000u;
      v34 = v113 > v111 ? (unsigned int)(v113 - v111) : 1LL;
      if ( v34 < v29 )
        v29 = v34;
    }
  }
LABEL_36:
  if ( v29 < (unsigned __int64)v180 )
  {
    v29 = (unsigned __int64)v180;
    v34 = (unsigned __int64)v180;
    v33 |= 0x1000u;
  }
  *(_WORD *)(v24 + 56) |= v33;
  v37 = v161 == 0;
  v38 = v168;
  *(_QWORD *)(v24 + 8) = v27;
  *(_QWORD *)(v24 + 720) = v34;
  v39 = v166;
  *(_BYTE *)(v24 + 741) = v38;
  *(_QWORD *)(v24 + 712) = v29;
  if ( v37 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(v39 + 33) )
    *(_QWORD *)&v173 = -1LL;
  else
    *(_QWORD *)&v173 = PpmPerfQosIdleExpirationTimeout;
  v40 = v185;
  v41 = -1;
  LODWORD(v164) = -1;
  v42 = *(__int64 (__fastcall **)(_QWORD, __int64))(v185 + 632);
  if ( v42 )
  {
    v41 = v42(*(_QWORD *)(v185 + 688), v185 + 696);
    LODWORD(v164) = v41;
  }
  if ( *(_BYTE *)(v39 + 33669) )
  {
    v41 = 0;
    LODWORD(v164) = 0;
  }
  v43 = v183;
  if ( !v183 )
  {
    v44 = v159;
    goto LABEL_46;
  }
  *(_QWORD *)(v40 + 776) = 2097153LL;
  memset((void *)(v40 + 784), 0, 0x100uLL);
  PoCopyDeepIdleMask((unsigned __int16 *)(v40 + 776));
  KeAddProcessorAffinityEx((unsigned __int16 *)(v40 + 776), *(_DWORD *)(v39 + 36));
  v125 = v40 + 1088;
  v126 = *(_DWORD **)(v40 + 1048);
  v171 = *(_QWORD *)(v43 + 48);
  v127 = *(_DWORD *)v43;
  v174 = v126;
  memset(v126, 0, 4 * v127 + 8);
  v44 = v159;
  v128 = 0LL;
  v129 = 0;
  v130 = v174;
  if ( !*(_DWORD *)(v40 + 1072) )
    goto LABEL_257;
  v131 = v162;
  v132 = 1;
  v133 = 0LL;
  while ( 2 )
  {
    v134 = *(_QWORD *)(v40 + 1080);
    if ( PpmIdleVetoBias || !*(_BYTE *)(v134 + 24LL * v129 + 1) )
    {
      LODWORD(v142) = -2;
      v148 = (unsigned int)v133 + 2LL;
      goto LABEL_249;
    }
    v135 = *(unsigned int *)(v134 + 24LL * v129 + 4);
    if ( PpmDripsStateIndex == -1
      || (unsigned int)v135 < PpmDripsStateIndex
      || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v39, v133, v131, v130) )
    {
      LODWORD(v131) = (unsigned __int8)v131;
      if ( v158 == 1 )
        LODWORD(v131) = v132;
      v136 = 0;
    }
    else
    {
      v136 = 1;
      LODWORD(v131) = (unsigned __int8)v131;
      if ( !v158 )
        LODWORD(v131) = v132;
    }
    v158 = v136;
    v162 = v131;
    if ( (_BYTE)v131 )
    {
      LOBYTE(v162) = 0;
      PpmEstimateIdleDuration(v39, v136, v136, *v177, v128, v173, &v179, &v178, (__int64)&v170, &v160);
      v128 = 0LL;
    }
    v137 = v179;
    v138 = v176;
    v139 = (__int64 *)v177;
    *(_DWORD *)(v125 + 4) = v128;
    v157 = *v139;
    v159 = -1;
    v140 = PpmIdleCheckCoordinatedStateEligibility(v39, v41, v138, v137, v157, v135, v135, (__int64)&v159, v125, v128);
    v141 = v183;
    v142 = v140;
    v44 = v159;
    if ( !*(_BYTE *)(v183 + 12) && !v140 )
    {
      v143 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v183 + 16);
      if ( v143 )
        v142 = v143(*(_QWORD *)(v40 + 688), v159, (unsigned int)v135);
    }
    PpmIdleUpdateSelectionStatistics(v142, 1016 * v135 + v171 + 72);
    v144 = 0xFFFFFFFFLL;
    v145 = 448 * v135 + v141;
    if ( v142 == 0xFFFFFFFFLL )
      goto LABEL_246;
    v167 = *(_QWORD *)(v145 + 64);
    if ( !v142 )
    {
      v149 = v174;
      *v186 = 1;
      *v149 = v135;
      v37 = *(_BYTE *)(v145 + 121) == 0;
      v201[0] = 2097153;
      if ( !v37 )
        v144 = (unsigned int)v135;
      v171 = v144;
      v76 = v144;
      memset(&v201[1], 0, 0x104uLL);
      if ( (unsigned int)KiSubtractAffinityEx(
                           (unsigned __int16 *)(v40 + 344),
                           (char *)(v145 + 128),
                           v201,
                           HIWORD(v201[0])) )
        PpmUnlockProcessors(v40 + 344, v201);
      v73 = v175;
      LODWORD(v51) = 0;
      v46 = v158;
      v74 = (unsigned int)v175;
      v50 = v167;
      goto LABEL_95;
    }
    if ( v142 != 2147483651LL && v142 != 2147483656LL )
    {
LABEL_246:
      v147 = v162;
      goto LABEL_247;
    }
    updated = PpmIdleUpdateIdleReevaluationDuration(v39, v142, v160, v178, (__int64)&v173);
    v147 = (unsigned __int8)v162;
    if ( updated )
      v147 = 1LL;
LABEL_247:
    v125 = v40 + 1088;
    PpmIdleRollbackCoordinatedSelection(v40 + 1088, 0LL, v147);
    LODWORD(v133) = v165;
    v132 = 1;
    v130 = v174;
    v128 = 0LL;
    v148 = v165 + 2LL;
LABEL_249:
    v130[v148] = v142;
    v133 = (unsigned int)(v133 + 1);
    ++v129;
    v165 = v133;
    if ( v129 < *(_DWORD *)(v40 + 1072) )
    {
      v41 = v164;
      continue;
    }
    break;
  }
  v165 = v133;
LABEL_257:
  *(_DWORD *)(v125 + 4) = 0;
  *v130 = -1;
  PpmUnlockProcessors(v40 + 344, v40 + 344);
LABEL_46:
  v45 = *(_DWORD *)(v40 + 40);
  v46 = 0;
  v47 = 1;
  v175 = *(unsigned int **)(v40 + 1040);
  memset(v175, 0, 4 * v45 + 8);
  v50 = *(_QWORD *)(v40 + 48);
  v51 = 0LL;
  v52 = 0;
  v167 = v50;
  v162 = 0;
  if ( !*(_DWORD *)(v40 + 1056) )
  {
    v73 = v175;
    v74 = 0;
    goto LABEL_94;
  }
  v53 = 2147483658LL;
  v54 = 0x80000000;
  while ( 2 )
  {
    v55 = *(_QWORD *)(v40 + 1064);
    v56 = v52;
    v171 = v52;
    v44 = *(_DWORD *)(v55 + 24LL * v52 + 4);
    v159 = v44;
    if ( !v183
      && v44 == *(_DWORD *)(v40 + 40) - 1
      && *(_BYTE *)(v40 + 740)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v39, v48, v49, 2147483658LL) )
    {
      if ( !v46 )
        v47 = 1;
      v46 = 1;
    }
    else
    {
      if ( v46 == 1 )
        v47 = 1;
      v46 = 0;
    }
    if ( v47 )
    {
      LOBYTE(v166) = 0;
      v57 = *v177;
      memset(&v200[67], 0, 0x108uLL);
      v58 = -1LL;
      v59 = *(_BYTE *)(*(_QWORD *)(v39 + 33600) + 740LL);
      v60 = 0;
      v160 = 0;
      if ( *(_BYTE *)(v39 + 33) )
      {
        v60 = 8;
        v160 = 8;
      }
      if ( v46 )
        v160 = v60 | 4;
      v61 = 2;
      v62 = KiClockTimerNextTickTime;
      v169 = 2;
      v182 = 0LL;
      if ( *(_BYTE *)(v39 + 33) )
      {
        if ( v59 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
        {
          KiGetNextTimerExpirationDueTime(v39, 1u, v57, v46, 0, &v182, &v169, 0LL);
          if ( v57 + (unsigned int)KiLastRequestedTimeIncrement < v182 )
          {
            v62 = v182;
            goto LABEL_62;
          }
          v61 = 2;
        }
      }
      else
      {
        KiGetNextTimerExpirationDueTime(v39, 0, v57, v46, 0, &v182, &v169, 0LL);
        if ( v62 <= v182 )
          v62 = v182;
LABEL_62:
        v61 = v169;
      }
      if ( v62 == -1LL )
      {
        v63 = -1LL;
      }
      else
      {
        v63 = 0LL;
        if ( v62 > v57 )
          v63 = v62 - v57;
      }
      v170 = v61;
      if ( v63 >= (unsigned __int64)v173 )
        v63 = v173;
      if ( !v46 )
      {
        v64 = *(_DWORD *)(v39 + 11684);
        if ( v64 )
        {
          v65 = KeMaximumIncrement / (unsigned int)(v64 + 1);
          if ( !v65 )
            v65 = 1;
          v58 = v65;
        }
      }
      if ( v63 <= v58 )
        v58 = v63;
      else
        v160 |= 1u;
      v200[67] = 2097153;
      memset(&v200[68], 0, 0x104uLL);
      if ( !PpmIdleDurationExpirationTimeout || !*(_BYTE *)(v39 + 33) )
        goto LABEL_77;
      v83 = 0;
      memset(&v200[69], 0, 8LL * LOWORD(v200[67]));
      v51 = 0LL;
      v84 = 0;
      LOWORD(v200[67]) = 1;
      if ( KeNumberNodes )
      {
LABEL_129:
        v85 = KeNodeBlock[v84];
        v86 = *(_DWORD *)(v85 + 16);
        while ( 1 )
        {
          if ( !v86 )
          {
            if ( ++v84 >= (unsigned int)(unsigned __int16)KeNumberNodes )
            {
              v56 = v171;
              if ( v83 )
              {
                v87 = *(_QWORD *)&v200[69];
                v88 = 0LL;
                v89 = 0;
                while ( v87 )
                {
LABEL_135:
                  _BitScanForward64(&v90, v87);
                  v87 &= ~(1LL << v90);
                  v91 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v89 + (unsigned __int8)v90];
                  if ( (unsigned int)v91 >= (unsigned int)KeNumberProcessors_0 )
                  {
                    v92 = 0LL;
                  }
                  else
                  {
                    _mm_lfence();
                    v92 = KiProcessorBlock[v91];
                  }
                  v93 = *(_QWORD *)(v92 + 33648);
                  if ( v93 > v88 && v93 != -1LL )
                    v88 = v93;
                }
                while ( ++v89 < (unsigned int)LOWORD(v200[67]) )
                {
                  v87 = *(_QWORD *)&v200[2 * v89 + 69];
                  if ( v87 )
                    goto LABEL_135;
                }
                if ( v88 && v63 + v57 > v88 )
                {
                  v160 |= 0x2000u;
                  v63 = v88 > v57 ? (unsigned int)(v88 - v57) : 1LL;
                  if ( v63 < v58 )
                    v58 = v63;
                }
              }
LABEL_77:
              v51 = 0LL;
              break;
            }
            goto LABEL_129;
          }
          _BitScanForward((unsigned int *)&v94, v86);
          v188 = 0;
          v86 &= ~(1 << v94);
          v95 = *(_QWORD *)(v85 + 8 * v94 + 24);
          v96 = *(unsigned __int16 *)(v95 + 136);
          v97 = *(_QWORD *)(v95 + 72);
          if ( LOWORD(v200[67]) <= (unsigned __int16)v96 )
          {
            if ( HIWORD(v200[67]) <= (unsigned __int16)v96 )
              goto LABEL_142;
            LOWORD(v200[67]) = v96 + 1;
          }
          *(_QWORD *)&v200[2 * v96 + 69] |= v97;
LABEL_142:
          if ( *(_QWORD *)(v95 + 72) )
            v83 = 1;
        }
      }
      v44 = v159;
      v54 = 0x80000000;
      v52 = v162;
      v53 = 2147483658LL;
      v178 = v63;
      v40 = v185;
      v179 = v58;
      v47 = v166;
    }
    if ( !v44 )
    {
      v68 = v51;
      v69 = 0LL;
      v48 = v51;
      v70 = v187 + 80;
LABEL_87:
      v71 = v51;
      goto LABEL_88;
    }
    v66 = *(_QWORD *)(v39 + 33600);
    if ( *(_DWORD *)(v66 + 44) == 3 && PpmIdleVetoBias )
    {
      v48 = 4294967294LL;
      goto LABEL_85;
    }
    v67 = 344LL * v44;
    if ( *(_BYTE *)(v67 + v66 + 1455) )
    {
      v48 = v53;
      goto LABEL_85;
    }
    if ( v44 > (unsigned int)v164 && (_DWORD)v164 != -1 )
    {
      v48 = 2147483656LL;
      goto LABEL_85;
    }
    if ( !*(_BYTE *)(v67 + v66 + 1450) && *(_BYTE *)(v66 + 739) )
    {
      v48 = 2147483655LL;
      goto LABEL_85;
    }
    v79 = *(_DWORD *)(v67 + v66 + 1408);
    if ( v79 )
    {
      if ( v79 >= 0 )
      {
        if ( *(_QWORD *)(v67 + v66 + 1440) )
        {
          v150 = (__int64 *)(v67 + v66 + 1416);
          v151 = *v150;
          v37 = *v150 == (_QWORD)v150;
          v80 = v54;
          if ( !v37 )
            v80 = *(_DWORD *)(v151 + 16);
        }
        else
        {
          v80 = v54;
        }
      }
      else
      {
        v80 = -2147483635;
      }
    }
    else
    {
      v80 = v51;
    }
    v44 = v159;
    if ( v80 )
    {
      v48 = v80 | 0x100000000LL;
      goto LABEL_196;
    }
    if ( *(_DWORD *)(v67 + v66 + 1392) > v176 )
    {
      v44 = v159;
      v48 = 2147483650LL;
    }
    else if ( *(unsigned int *)(v67 + v66 + 1396) > v179 )
    {
      v44 = v159;
      v48 = 2147483651LL;
    }
    else
    {
      v81 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v66 + 648);
      if ( !v81 )
      {
        v48 = v51;
        goto LABEL_119;
      }
      v48 = v81(*(_QWORD *)(v66 + 688), v159);
LABEL_196:
      if ( v48 )
        goto LABEL_85;
LABEL_119:
      v82 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v40 + 640);
      if ( v82 )
        v48 = v82(*(_QWORD *)(v40 + 688), v44, 0xFFFFFFFFLL);
    }
LABEL_85:
    v68 = v48;
    v69 = v44;
    v70 = 1008LL * v44 + v187 + 80;
    if ( !v48 )
    {
      v51 = 0LL;
      goto LABEL_87;
    }
    if ( (v48 & 0x80000000) == 0 )
    {
      if ( (v48 & 0x100000000LL) != 0 )
      {
        v152 = *(_QWORD *)(v70 + 128);
        v71 = 2;
        if ( v152 )
          ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v48 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v152 + 32) + 24);
      }
      else
      {
        v71 = 1;
      }
      v68 = v48;
      v51 = 0LL;
LABEL_88:
      v72 = v71;
      v49 = (unsigned int)v48;
      ++*(_QWORD *)(v70 + 8 * v72);
      goto LABEL_89;
    }
    if ( (unsigned int)v48 <= 0x8000000C )
    {
      v71 = v48 - 2147483646;
      v51 = 0LL;
      goto LABEL_88;
    }
    v49 = (unsigned int)v48;
    if ( (_DWORD)v48 == -2147483634 )
    {
      v71 = 15;
      v51 = 0LL;
      goto LABEL_88;
    }
    v51 = 0LL;
LABEL_89:
    if ( !v68 )
    {
      v73 = v175;
      v74 = v52;
      *v175 = v44;
      v163 = v52;
      v75 = !*(_BYTE *)(344 * v69 + v40 + 1450) || v183 && (!*(_BYTE *)(344 * v69 + v40 + 1453) || v44);
      v48 = (unsigned __int64)v186;
      v50 = v167;
      *v186 = v75;
      goto LABEL_94;
    }
    if ( v68 == 2147483651 )
    {
      if ( (v160 & 0x2000) != 0 )
      {
        v48 = v178;
      }
      else
      {
        if ( (v160 & 1) == 0 || BYTE10(v173) )
          goto LABEL_109;
        v153 = *(_DWORD *)(v39 + 11684);
        v154 = v51;
        for ( BYTE10(v173) = 1; v153; v153 >>= 4 )
          v154 += KeMaximumIncrement;
        v48 = v154;
      }
LABEL_107:
      if ( (_QWORD)v173 == -1LL || v48 < (unsigned __int64)v173 )
      {
        *(_QWORD *)&v173 = v48;
        v47 = 1;
      }
      goto LABEL_109;
    }
    if ( v68 == 2147483656 && !BYTE8(v173) )
    {
      v44 = v159;
      BYTE8(v173) = 1;
      v48 = (unsigned int)(10 * LODWORD(PpmCurrentProfile[55 * dword_140C3D48C + 24]));
      goto LABEL_107;
    }
LABEL_109:
    v78 = v175;
    v162 = ++v52;
    v54 = 0x80000000;
    v53 = 2147483658LL;
    v175[v56 + 2] = v49;
    if ( v52 < *(_DWORD *)(v40 + 1056) )
      continue;
    break;
  }
  v50 = v167;
  v73 = v78;
  v74 = v163;
LABEL_94:
  v76 = -1;
LABEL_95:
  if ( *v186 )
  {
    LOBYTE(v48) = 1;
    PpmIdleSetSynchronizationState(v39 + 33672, v48);
    v74 = v163;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v155 = v174;
    if ( v174 )
    {
      v156 = v165;
      v174[1] = v165;
      v193 = v155;
      v195 = v51;
      v194 = 4 * v156 + 8;
      EtwTraceKernelEvent((__int64)&v193, 1u, 0x40200000u, 0x123Eu, 0x602u);
      v74 = v163;
      LODWORD(v51) = 0;
    }
    if ( v73 )
    {
      v73[1] = v74;
      v197 = 4 * v74 + 8;
      v196 = v73;
      v198 = v51;
      EtwTraceKernelEvent((__int64)&v196, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v40 + 56) |= v160;
  *(_BYTE *)(v40 + 7) = BYTE8(v173);
  *(_BYTE *)(v40 + 6) = BYTE9(v173);
  *(_QWORD *)(v40 + 8) = v173;
  *(_QWORD *)(v40 + 720) = v178;
  *(_QWORD *)(v40 + 712) = v179;
  *(_BYTE *)(v40 + 741) = v170;
  *v189 = v44;
  *v190 = v76;
  *v191 = v46;
  result = v192;
  *v192 = v50;
  return result;
}
