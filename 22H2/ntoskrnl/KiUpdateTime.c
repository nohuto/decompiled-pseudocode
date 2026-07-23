/*
 * XREFs of KiUpdateTime @ 0x1402276F0
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     KiUpdateRunTime @ 0x140227590 (KiUpdateRunTime.c)
 *     PoExecutePerfCheck @ 0x140227D60 (PoExecutePerfCheck.c)
 *     PoExecuteIdleCheck @ 0x140227E10 (PoExecuteIdleCheck.c)
 *     KiForwardTick @ 0x140227F90 (KiForwardTick.c)
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     HalpTimerScaleCounter @ 0x140395BF0 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiSetForceIdleState @ 0x1405236E0 (KiSetForceIdleState.c)
 */

unsigned __int64 __fastcall KiUpdateTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int16 v3; // bp
  char v4; // r15
  unsigned __int8 v5; // r12
  __int64 v6; // r14
  bool v7; // bp
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  ULONG_PTR v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _KPRCB *v22; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int16 v27; // cx
  __int16 *v28; // r8
  __int64 v29; // r9
  unsigned __int16 v30; // ax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  bool v34; // zf
  __int64 InternalData; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  signed __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r9
  signed __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // rdx
  volatile CCHAR v46; // t1
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  signed __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // r10
  signed __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  _DWORD *v67; // rcx
  int v68; // eax
  int v69; // eax
  __int64 v70; // rcx
  signed __int32 v71[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int8 v72; // [rsp+30h] [rbp-108h]
  char v73; // [rsp+31h] [rbp-107h]
  int v74; // [rsp+34h] [rbp-104h] BYREF
  __int64 v75; // [rsp+38h] [rbp-100h]
  __int64 v76; // [rsp+40h] [rbp-F8h]
  __int64 v77; // [rsp+48h] [rbp-F0h]
  _QWORD v78[22]; // [rsp+50h] [rbp-E8h] BYREF
  int v79; // [rsp+130h] [rbp-8h]

  v72 = a2;
  v73 = a1;
  memset(v78, 0, 0xA8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v79;
  v4 = 0;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  _disable();
  v7 = (v3 & 0x200) != 0;
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v8 = MEMORY[0xFFFFF78000000340];
  while ( (v8 & 1) != 0 )
  {
    v8 = MEMORY[0xFFFFF78000000340];
LABEL_69:
    _mm_pause();
  }
  v9 = v8;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v8 + 1, v8);
  if ( v9 != v8 )
    goto LABEL_69;
  v10 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v34 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
    v75 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( v34 )
    {
      InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
      v36 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(InternalData);
      v37 = *(_QWORD *)(v10 + 208);
      v38 = v36;
    }
    else
    {
      do
      {
        v37 = *(_QWORD *)(v10 + 208);
        do
        {
          v40 = *(_QWORD *)(v10 + 200);
          v41 = HalpTimerGetInternalData(v10);
          v42 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v41);
          _InterlockedOr(v71, 0);
          v43 = *(_QWORD *)(v10 + 200);
        }
        while ( v40 != v43 );
      }
      while ( v37 != *(_QWORD *)(v10 + 208) );
      v44 = *(_DWORD *)(v10 + 220);
      if ( ((v40 ^ v42) & (1LL << ((unsigned __int8)v44 - 1))) == 0 )
      {
        if ( v44 == 64 )
          v45 = -1LL;
        else
          v45 = (1LL << v44) - 1;
        v12 = v37 + (v42 | v40 & ~v45);
        goto LABEL_9;
      }
      v61 = 1LL << v44;
      v62 = -1LL;
      if ( v44 != 64 )
        v62 = v61 - 1;
      v63 = v40 & v62;
      v38 = v42 | v40 ^ v63;
      if ( v42 < v63 )
        v38 += v61;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v38, v43);
    }
    v12 = v37 + v38;
    goto LABEL_9;
  }
  v75 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + KeGetPcr()->Prcb.Number * *(_DWORD *)(HalpPerformanceCounter + 80);
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
      v48 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v49 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v48);
      v50 = *(_QWORD *)(v10 + 208);
      v51 = v49;
    }
    else
    {
      do
      {
        v50 = *(_QWORD *)(v10 + 208);
        do
        {
          v52 = *(_QWORD *)(v10 + 200);
          v53 = HalpTimerGetInternalData(v10);
          v54 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v53);
          _InterlockedOr(v71, 0);
          v55 = *(_QWORD *)(v10 + 200);
        }
        while ( v52 != v55 );
      }
      while ( v50 != *(_QWORD *)(v10 + 208) );
      v56 = *(_DWORD *)(v10 + 220);
      if ( ((v52 ^ v54) & (1LL << ((unsigned __int8)v56 - 1))) != 0 )
      {
        v57 = 1LL << v56;
        v58 = -1LL;
        if ( v56 != 64 )
          v58 = v57 - 1;
        v59 = v52 & v58;
        v51 = v54 | v52 ^ v59;
        if ( v54 < v59 )
          v51 += v57;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v51, v55);
      }
      else
      {
        if ( v56 == 64 )
          v60 = -1LL;
        else
          v60 = (1LL << v56) - 1;
        v51 = v54 | v52 & ~v60;
      }
    }
    v12 = HalpTimerScaleCounter(v50 + v51, *(_QWORD *)(v10 + 192), 10000000LL);
  }
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v39 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v39 = 10000000LL;
    v12 = HalpTimerScaleCounter(v12, v75, v39);
  }
  *((_QWORD *)&v13 + 1) = 0LL;
  if ( v12 > MEMORY[0xFFFFF78000000348] )
  {
    v76 = 0LL;
    v14 = v12 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v14 <<= MEMORY[0xFFFFF78000000368];
    v13 = v14 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v76 = *((_QWORD *)&v13 + 1);
    KiSystemTimeErrorAccumulator += v13;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v13 )
      v76 = ++*((_QWORD *)&v13 + 1);
  }
  v15 = *((_QWORD *)&v13 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v16 + 1) = 0LL;
  if ( v12 > MEMORY[0xFFFFF78000000350] )
  {
    v77 = 0LL;
    v17 = v12 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v17 <<= MEMORY[0xFFFFF78000000369];
    v16 = v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v77 = *((_QWORD *)&v16 + 1);
    KiInterruptTimeErrorAccumulator += v16;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v16 )
      v77 = ++*((_QWORD *)&v16 + 1);
  }
  v18 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v16 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v15);
  MEMORY[0xFFFFF78000000014] = v15;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v16 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v16 + 1);
  MEMORY[0xFFFFF78000000348] = v12;
  MEMORY[0xFFFFF78000000350] = v12;
  v19 = MEMORY[0xFFFFF78000000320];
  v20 = (unsigned int)KiTickOffset - *((_QWORD *)&v16 + 1);
  if ( v20 <= 0 )
  {
    v21 = 1LL;
    v20 += KeMaximumIncrement;
    if ( v20 <= 0 )
    {
      v46 = KeNumberProcessorsGroup0[2];
      v47 = (unsigned __int64)(((unsigned __int64)-v20
                              * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v46;
      LODWORD(v20) = (v47 + 1) * KeMaximumIncrement + v20;
      v21 = v47 + 2;
    }
    v19 = v21 + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (unsigned __int64)(v21 + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += v21;
  }
  KiTickOffset = v20;
  ++MEMORY[0xFFFFF78000000340];
  v22 = KeGetCurrentPrcb();
  v74 = 0;
  SchedulerAssist = v22->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v64 = SchedulerAssist[6];
      SchedulerAssist[6] = v64 + 1;
      if ( v64 == -1 )
LABEL_95:
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    v65 = v22->SchedulerAssist;
    if ( v65 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v66 = v65[6] - 1;
        v65[6] = v66;
        if ( !v66 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    do
      KeYieldProcessorEx(&v74);
    while ( KiForceIdleLock );
    v67 = v22->SchedulerAssist;
    if ( v67 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v68 = v67[6];
        v67[6] = v68 + 1;
        if ( v68 == -1 )
          goto LABEL_95;
      }
    }
  }
  if ( KiForceIdleStartTime && v18 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = CurrentPrcb->Number + 1280;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0LL, 0LL, 0LL, 0);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v4 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v69 = v25[6] - 1;
      v25[6] = v69;
      if ( !v69 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  if ( v7 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v18 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v18;
  if ( KeMinimumIncrement - 1 + (int)v18 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v18;
  if ( v19 != v6 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
  }
  PoExecuteIdleCheck(v18);
  if ( !v4 )
    PoExecutePerfCheck();
  v26 = v18 >> 18;
  if ( KiGroupSchedulingEnabled && v19 > KiGenerationEndTick )
  {
    v5 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((_DWORD)CurrentPrcb, KeNumberProcessors_0, v26, v5, (__int64)v78);
    v27 = KiClockCheckPending[0];
    if ( (unsigned int)KiClockCheckPending[0] < LOWORD(v78[0]) )
    {
      v28 = (__int16 *)v78;
    }
    else
    {
      v28 = KiClockCheckPending;
      v27 = v78[0];
    }
    v29 = 0LL;
    word_140C110A2 = 20;
    KiClockCheckPending[0] = *v28;
    v30 = 0;
    if ( v27 )
    {
      v31 = 0LL;
      v30 = v27;
      v29 = v27;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v31 / 2 + 4] |= v78[v31 / 8 + 1];
        v31 += 8LL;
        --v29;
      }
      while ( v29 );
    }
    for ( ; v30 < (unsigned __int16)*v28; *(_QWORD *)&KiClockCheckPending[4 * v32 + 4] = *(_QWORD *)&v28[4 * v32 + 4] )
      v32 = v30++;
    for ( dword_140C110A4 = v29; v30 < (unsigned __int16)word_140C110A2; *(_QWORD *)&KiClockCheckPending[4 * v70 + 4] = v29 )
      v70 = v30++;
  }
  return KiUpdateRunTime(v73, v72);
}
