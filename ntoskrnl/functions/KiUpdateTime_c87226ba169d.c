__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v5; // rbp
  unsigned int v6; // r15d
  char v7; // r13
  __int64 v8; // rbx
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r11
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  ULONG_PTR v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  unsigned __int128 v24; // rax
  __int64 v25; // r10
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // r15
  struct _KPRCB *v35; // r14
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r8
  __int64 CurrentIrql; // r12
  __int64 v39; // r14
  __int64 v40; // rbx
  LARGE_INTEGER v41; // r15
  __int64 v42; // r13
  LARGE_INTEGER PerformanceCounter; // rdx
  unsigned __int8 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rbx
  int v47; // ebp
  unsigned __int64 v48; // rdi
  unsigned __int8 v49; // si
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r12
  signed __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r14
  signed __int64 v60; // rdx
  volatile CCHAR v61; // t1
  unsigned __int64 v62; // rdx
  __int64 InternalData; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  signed __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rax
  unsigned __int64 v69; // r10
  signed __int64 v70; // rax
  int v71; // r9d
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int64 v78; // r10
  signed __int64 v79; // rax
  int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  signed __int64 v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // rax
  unsigned __int64 v92; // r10
  signed __int64 v93; // rax
  int v94; // r9d
  __int64 v95; // r8
  __int64 v96; // rcx
  unsigned __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rax
  unsigned __int64 v101; // r10
  signed __int64 v102; // rax
  int v103; // r9d
  __int64 v104; // r8
  __int64 v105; // rcx
  unsigned __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // r8
  _DWORD *v109; // r9
  __int64 v110; // rdx
  unsigned __int8 v111; // cl
  struct _KPRCB *v112; // r9
  _DWORD *v113; // r8
  int v114; // eax
  bool v115; // zf
  signed __int32 v116[8]; // [rsp+0h] [rbp-298h] BYREF
  char v117; // [rsp+30h] [rbp-268h]
  char v118; // [rsp+31h] [rbp-267h] BYREF
  char v119; // [rsp+32h] [rbp-266h] BYREF
  unsigned __int8 v120; // [rsp+33h] [rbp-265h]
  unsigned __int8 v121; // [rsp+34h] [rbp-264h]
  int v122; // [rsp+38h] [rbp-260h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-258h]
  int v124; // [rsp+48h] [rbp-250h] BYREF
  int v125; // [rsp+4Ch] [rbp-24Ch] BYREF
  int v126; // [rsp+50h] [rbp-248h] BYREF
  unsigned int v127; // [rsp+54h] [rbp-244h]
  __int64 v128; // [rsp+58h] [rbp-240h]
  __int64 v129; // [rsp+60h] [rbp-238h]
  __int64 v130; // [rsp+68h] [rbp-230h]
  __int64 v131; // [rsp+70h] [rbp-228h]
  __int64 v132; // [rsp+78h] [rbp-220h]
  __int64 v133; // [rsp+80h] [rbp-218h]
  __int64 v134; // [rsp+88h] [rbp-210h] BYREF
  __int64 v135; // [rsp+90h] [rbp-208h] BYREF
  __int64 v136; // [rsp+98h] [rbp-200h] BYREF
  __int64 v137; // [rsp+A0h] [rbp-1F8h] BYREF
  __int64 v138; // [rsp+A8h] [rbp-1F0h]
  _DWORD v139[68]; // [rsp+B0h] [rbp-1E8h] BYREF
  char v140[32]; // [rsp+1C0h] [rbp-D8h] BYREF
  __int64 *v141; // [rsp+1E0h] [rbp-B8h]
  __int64 v142; // [rsp+1E8h] [rbp-B0h]
  __int64 *v143; // [rsp+1F0h] [rbp-A8h]
  __int64 v144; // [rsp+1F8h] [rbp-A0h]
  __int64 *v145; // [rsp+200h] [rbp-98h]
  __int64 v146; // [rsp+208h] [rbp-90h]
  __int64 *v147; // [rsp+210h] [rbp-88h]
  __int64 v148; // [rsp+218h] [rbp-80h]
  int *v149; // [rsp+220h] [rbp-78h]
  __int64 v150; // [rsp+228h] [rbp-70h]
  int *v151; // [rsp+230h] [rbp-68h]
  __int64 v152; // [rsp+238h] [rbp-60h]
  char *v153; // [rsp+240h] [rbp-58h]
  __int64 v154; // [rsp+248h] [rbp-50h]
  char *v155; // [rsp+250h] [rbp-48h]
  __int64 v156; // [rsp+258h] [rbp-40h]
  unsigned int v157; // [rsp+290h] [rbp-8h]

  v127 = a3;
  v120 = a2;
  v121 = a1;
  memset(v139, 0, 0x108uLL);
  v3 = v157;
  CurrentPrcb = KeGetCurrentPrcb();
  v117 = 0;
  v138 = MEMORY[0xFFFFF78000000320];
  _disable();
  SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v5 = MmWriteableSharedUserData;
  v6 = v3 >> 9;
  LOBYTE(v6) = v6 & 1;
  v157 = v6;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 832);
      if ( (v8 & 1) == 0 )
        break;
      _mm_pause();
    }
    v9 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v10 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
          v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
              + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
        else
          v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
        v12 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v11)
              * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
            + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v64 = (*(__int64 (__fastcall **)(__int64))(v9 + 112))(InternalData);
          v65 = *(_QWORD *)(v9 + 208);
          v66 = v64;
        }
        else
        {
          do
          {
            v65 = *(_QWORD *)(v9 + 208);
            do
            {
              v67 = *(_QWORD *)(v9 + 200);
              v68 = HalpTimerGetInternalData(v9);
              v69 = (*(__int64 (__fastcall **)(__int64))(v9 + 112))(v68);
              _InterlockedOr(v116, 0);
              v70 = *(_QWORD *)(v9 + 200);
            }
            while ( v67 != v70 );
          }
          while ( v65 != *(_QWORD *)(v9 + 208) );
          v71 = *(_DWORD *)(v9 + 220);
          if ( ((v67 ^ v69) & (1LL << ((unsigned __int8)v71 - 1))) != 0 )
          {
            if ( v71 == 64 )
              v72 = -1LL;
            else
              v72 = (1LL << v71) - 1;
            v73 = 0LL;
            if ( v71 != 64 )
              v73 = 1LL << v71;
            v74 = v67 & v72;
            v66 = v69 | v67 ^ v74;
            if ( v69 < v74 )
              v66 += v73;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v66, v70);
          }
          else
          {
            if ( v71 == 64 )
              v75 = -1LL;
            else
              v75 = (1LL << v71) - 1;
            v66 = v69 | v67 & ~v75;
          }
        }
        v12 = HalpTimerScaleCounter(v65 + v66, *(_QWORD *)(v9 + 192), 10000000LL);
      }
    }
    else
    {
      v10 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v53 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v54 = (*(__int64 (__fastcall **)(__int64))(v9 + 112))(v53);
        v55 = *(_QWORD *)(v9 + 208);
        v56 = v54;
      }
      else
      {
        do
        {
          v55 = *(_QWORD *)(v9 + 208);
          do
          {
            v76 = *(_QWORD *)(v9 + 200);
            v77 = HalpTimerGetInternalData(v9);
            v78 = (*(__int64 (__fastcall **)(__int64))(v9 + 112))(v77);
            _InterlockedOr(v116, 0);
            v79 = *(_QWORD *)(v9 + 200);
          }
          while ( v76 != v79 );
        }
        while ( v55 != *(_QWORD *)(v9 + 208) );
        v80 = *(_DWORD *)(v9 + 220);
        if ( ((v76 ^ v78) & (1LL << ((unsigned __int8)v80 - 1))) != 0 )
        {
          if ( v80 == 64 )
            v81 = -1LL;
          else
            v81 = (1LL << v80) - 1;
          v82 = 0LL;
          if ( v80 != 64 )
            v82 = 1LL << v80;
          v83 = v76 & v81;
          v56 = v78 | v76 ^ v83;
          if ( v78 < v83 )
            v56 += v82;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v56, v79);
        }
        else
        {
          if ( v80 == 64 )
            v84 = -1LL;
          else
            v84 = (1LL << v80) - 1;
          v56 = v78 | v76 & ~v84;
        }
      }
      v12 = v55 + v56;
    }
    if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v85 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v85 = 10000000LL;
      v12 = HalpTimerScaleCounter(v12, v10, v85);
    }
    *((_QWORD *)&v13 + 1) = 0LL;
    if ( v12 > MEMORY[0xFFFFF78000000350] )
    {
      v14 = v12 - MEMORY[0xFFFFF78000000350];
      v128 = 0LL;
      if ( MEMORY[0xFFFFF78000000369] )
        v14 <<= MEMORY[0xFFFFF78000000369];
      v13 = v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v128 = *((_QWORD *)&v13 + 1);
      KiInterruptTimeErrorAccumulator += v13;
      if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v13 )
        v128 = ++*((_QWORD *)&v13 + 1);
    }
  }
  while ( *(_QWORD *)(v5 + 832) != v8 );
  if ( *((_QWORD *)&v13 + 1) <= 0x1F4uLL )
  {
    v28 = MEMORY[0xFFFFF78000000008];
    v29 = MEMORY[0xFFFFF78000000320];
    goto LABEL_42;
  }
  _m_prefetchw((const void *)(v5 + 832));
  v15 = *(_QWORD *)(v5 + 832);
  while ( (v15 & 1) != 0 )
  {
    v15 = *(_QWORD *)(v5 + 832);
LABEL_138:
    _mm_pause();
  }
  v16 = v15;
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 832), v15 + 1, v15);
  if ( v16 != v15 )
    goto LABEL_138;
  v17 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v18 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v19 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v19 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v20 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v19)
            * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v86 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v87 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v86);
        v88 = *(_QWORD *)(v17 + 208);
        v89 = v87;
      }
      else
      {
        do
        {
          v88 = *(_QWORD *)(v17 + 208);
          do
          {
            v90 = *(_QWORD *)(v17 + 200);
            v91 = HalpTimerGetInternalData(v17);
            v92 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v91);
            _InterlockedOr(v116, 0);
            v93 = *(_QWORD *)(v17 + 200);
          }
          while ( v90 != v93 );
        }
        while ( v88 != *(_QWORD *)(v17 + 208) );
        v94 = *(_DWORD *)(v17 + 220);
        if ( ((v90 ^ v92) & (1LL << ((unsigned __int8)v94 - 1))) != 0 )
        {
          if ( v94 == 64 )
            v95 = -1LL;
          else
            v95 = (1LL << v94) - 1;
          v96 = 0LL;
          if ( v94 != 64 )
            v96 = 1LL << v94;
          v97 = v90 & v95;
          v89 = v92 | v90 ^ v97;
          if ( v92 < v97 )
            v89 += v96;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 200), v89, v93);
        }
        else
        {
          if ( v94 == 64 )
            v98 = -1LL;
          else
            v98 = (1LL << v94) - 1;
          v89 = v92 | v90 & ~v98;
        }
      }
      v20 = HalpTimerScaleCounter(v88 + v89, *(_QWORD *)(v17 + 192), 10000000LL);
    }
  }
  else
  {
    v18 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v57 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v58 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v57);
      v59 = *(_QWORD *)(v17 + 208);
      v60 = v58;
    }
    else
    {
      do
      {
        v59 = *(_QWORD *)(v17 + 208);
        do
        {
          v99 = *(_QWORD *)(v17 + 200);
          v100 = HalpTimerGetInternalData(v17);
          v101 = (*(__int64 (__fastcall **)(__int64))(v17 + 112))(v100);
          _InterlockedOr(v116, 0);
          v102 = *(_QWORD *)(v17 + 200);
        }
        while ( v99 != v102 );
      }
      while ( v59 != *(_QWORD *)(v17 + 208) );
      v103 = *(_DWORD *)(v17 + 220);
      if ( ((v99 ^ v101) & (1LL << ((unsigned __int8)v103 - 1))) != 0 )
      {
        if ( v103 == 64 )
          v104 = -1LL;
        else
          v104 = (1LL << v103) - 1;
        v105 = 0LL;
        if ( v103 != 64 )
          v105 = 1LL << v103;
        v106 = v99 & v104;
        v60 = v101 | v99 ^ v106;
        if ( v101 < v106 )
          v60 += v105;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 200), v60, v102);
      }
      else
      {
        if ( v103 == 64 )
          v107 = -1LL;
        else
          v107 = (1LL << v103) - 1;
        v60 = v101 | v99 & ~v107;
      }
    }
    v20 = v59 + v60;
  }
  if ( v17 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v108 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v108 = 10000000LL;
    v20 = HalpTimerScaleCounter(v20, v18, v108);
  }
  *((_QWORD *)&v21 + 1) = 0LL;
  if ( v20 > MEMORY[0xFFFFF78000000348] )
  {
    v129 = 0LL;
    v22 = v20 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v22 <<= MEMORY[0xFFFFF78000000368];
    v21 = v22 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v129 = *((_QWORD *)&v21 + 1);
    KiSystemTimeErrorAccumulator += v21;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v21 )
      v129 = ++*((_QWORD *)&v21 + 1);
  }
  v23 = *((_QWORD *)&v21 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v24 + 1) = 0LL;
  v25 = MEMORY[0xFFFFF78000000008];
  if ( v20 > MEMORY[0xFFFFF78000000350] )
  {
    v130 = 0LL;
    v26 = v20 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v26 <<= MEMORY[0xFFFFF78000000369];
    v24 = v26 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v130 = *((_QWORD *)&v24 + 1);
    KiInterruptTimeErrorAccumulator += v24;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v24 )
      v130 = ++*((_QWORD *)&v24 + 1);
  }
  v27 = MmWriteableSharedUserData;
  v28 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v24 + 1);
  *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v23);
  *(_QWORD *)(v27 + 20) = v23;
  *(_DWORD *)(v27 + 16) = (unsigned __int64)(v25 + *((_QWORD *)&v24 + 1)) >> 32;
  *(_QWORD *)(v27 + 8) = v25 + *((_QWORD *)&v24 + 1);
  *(_QWORD *)(v27 + 840) = v20;
  *(_QWORD *)(v27 + 848) = v20;
  v29 = MEMORY[0xFFFFF78000000320];
  v30 = (unsigned int)KiTickOffset - *((_QWORD *)&v24 + 1);
  if ( v30 <= 0 )
  {
    v31 = 1LL;
    v30 += (unsigned int)KeMaximumIncrement;
    if ( v30 <= 0 )
    {
      v61 = KeNumberProcessorsGroup0[1];
      v62 = ((unsigned __int64)(((unsigned __int64)-v30
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v61)
          + 1;
      LODWORD(v30) = v62 * KeMaximumIncrement + v30;
      v31 = v62 + 1;
    }
    v32 = MmWriteableSharedUserData;
    v29 = v31 + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(MmWriteableSharedUserData + 808) = (unsigned __int64)(v31 + MEMORY[0xFFFFF78000000320]) >> 32;
    *(_QWORD *)(v32 + 800) = v29;
  }
  v33 = *(_QWORD *)(v5 + 832) + 1LL;
  KiTickOffset = v30;
  *(_QWORD *)(v5 + 832) = v33;
LABEL_42:
  v34 = v157;
  v124 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v124);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleStartTime && v28 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    LODWORD(v35) = (_DWORD)CurrentPrcb;
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = CurrentPrcb->Number + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0);
  }
  else
  {
    LODWORD(v35) = (_DWORD)CurrentPrcb;
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = 1;
    v117 = 1;
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  if ( v34 )
  {
    v36 = KeGetCurrentPrcb();
    v37 = (signed __int32 *)v36->SchedulerAssist;
    if ( v37 )
    {
      _m_prefetchw(v37);
      v51 = *v37;
      do
      {
        v52 = v51;
        v51 = _InterlockedCompareExchange(v37, v51 & 0xFFDFFFFF, v51);
      }
      while ( v52 != v51 );
      if ( (v51 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
    _enable();
  }
  if ( KeMinimumIncrement - 1 + (int)v28 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v28;
  if ( KeMinimumIncrement - 1 + (int)v28 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v28;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    v132 = CurrentIrql;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v109 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql == 15 )
        LODWORD(v110) = 0x8000;
      else
        v110 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
      v109[5] |= v110;
    }
    v39 = 0LL;
    v131 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
    v122 = KeMinimumIncrement;
    while ( 1 )
    {
      v40 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v41.QuadPart = MEMORY[0xFFFFF78000000350];
        v42 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v40 )
          break;
      }
      _mm_pause();
    }
    v44 = v132;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v41.QuadPart )
    {
      v133 = 0LL;
      v45 = -1 - v41.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v45 <<= MEMORY[0xFFFFF78000000369];
      v39 = ((unsigned __int64)v45 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v133 = v39;
    }
    v46 = v131;
    if ( v131 <= 0 )
      v46 = v39 + v42 - v131;
    if ( (unsigned int)dword_140C02F28 > 5 )
    {
      v137 = v39 + v42;
      v141 = &v134;
      v134 = v131;
      v47 = v122;
      v135 = v46 - (v39 + v42);
      v126 = 1;
      v143 = &v135;
      v118 = 1;
      v145 = &v136;
      v154 = 1LL;
      v147 = &v137;
      v149 = &v125;
      v151 = &v126;
      v153 = &v118;
      v155 = &v119;
      v156 = 1LL;
      v142 = 8LL;
      v144 = 8LL;
      v136 = v46;
      v146 = 8LL;
      v148 = 8LL;
      v125 = v122;
      v150 = 4LL;
      v152 = 4LL;
      v119 = 0;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, &byte_14002D297, 0LL, 0LL, 10, v140);
    }
    else
    {
      v47 = v122;
    }
    v35 = CurrentPrcb;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags |= 3u;
    v35->ClockTimerState.ClockTimerEntries[1].DueTime = v46;
    v35->ClockTimerState.ClockTimerEntries[1].TolerableDelay = v47;
    if ( KiIrqlFlags )
    {
      v111 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v111 <= 0xFu && v44 <= 0xFu && v111 >= 2u )
      {
        v112 = KeGetCurrentPrcb();
        v113 = v112->SchedulerAssist;
        v114 = ~(unsigned __int16)(-1LL << (v44 + 1));
        v115 = (v114 & v113[5]) == 0;
        v113[5] &= v114;
        if ( v115 )
          KiRemoveSystemWorkPriorityKick(v112);
      }
    }
    __writecr8(v44);
    v7 = v117;
  }
  if ( v29 != v138 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    PoExecuteIdleCheck(v28);
  if ( !v7 )
    PoExecutePerfCheck();
  v48 = v28 >> 18;
  if ( KiGroupSchedulingEnabled && v29 > KiGenerationEndTick )
  {
    v49 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  else
  {
    v49 = 0;
  }
  if ( !KiClockTimerPerCpuTickScheduling && (unsigned int)KeNumberProcessors_0 > 1 )
  {
    v139[0] = 2097153;
    memset(&v139[1], 0, 0x104uLL);
    KiForwardTick((_DWORD)v35, KeNumberProcessors_0, v48, v49, (__int64)v139);
    KiOrAffinityEx(KiClockCheckPending, v139, KiClockCheckPending, word_140C0B772);
  }
  return KiUpdateRunTime(v121, v120, v127);
}
