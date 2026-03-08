/*
 * XREFs of KeYieldExecution @ 0x140256BE0
 * Callers:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1403C8D90 (NtYieldExecution.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiComputePriorityFloor @ 0x140229E28 (KiComputePriorityFloor.c)
 *     HalRequestSoftwareInterrupt @ 0x140230830 (HalRequestSoftwareInterrupt.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140258C90 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140260ED0 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140261010 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartScbQueuesPhase @ 0x140261910 (KiReadyQueueEnumeratorStartScbQueuesPhase.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402ADF34 (KiShouldPreemptionBeDeferred.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAddThreadToScbQueue @ 0x1402AE688 (KiAddThreadToScbQueue.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402C3F04 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x1402EE9E4 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1403428F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     KiGetProcessorEfficiencyClass @ 0x14036A2D4 (KiGetProcessorEfficiencyClass.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14040A618 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14040A730 (KiSetSchedulerAssistPriority.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140459048 (KiConvertDynamicHeteroPolicy.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056AD34 (KzReleaseAdditionalPrcbLocks.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056B928 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FB458 (EtwTraceXSchedulerPriorityUpdate.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 CurrentIrql; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // ecx
  struct _KPRCB *v11; // rdi
  char v12; // bl
  __int64 RescheduleContextEntryForPrcb; // r11
  unsigned int v14; // eax
  int v15; // ecx
  char v16; // al
  unsigned int v17; // eax
  unsigned int i; // r8d
  _QWORD *v19; // rdx
  char v20; // al
  char v21; // al
  volatile signed __int32 *j; // r8
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 **v24; // rcx
  __int64 v25; // rdx
  char m; // di
  __int64 v27; // rdx
  int ready; // eax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rdi
  int v37; // ecx
  __int64 v38; // rdi
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // r15
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rdx
  char v51; // cl
  __int64 v52; // rdi
  unsigned int v53; // edi
  unsigned int v54; // edi
  volatile signed __int64 *k; // r9
  volatile signed __int64 *v56; // rax
  volatile signed __int64 **v57; // rdx
  __int64 v58; // r8
  char v59; // di
  unsigned int v60; // esi
  unsigned int v61; // ebx
  unsigned __int8 *v62; // rdx
  unsigned __int8 v63; // al
  __int64 v64; // r10
  __int64 v65; // rdx
  unsigned __int64 v66; // rbx
  __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 CycleTime; // rbx
  __int64 CurrentRunTime; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r11
  unsigned int FrequencyBucket; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v79; // r9
  _QWORD *v80; // rdx
  __int64 v81; // r10
  _BYTE *v82; // rax
  struct _KPRCB *v83; // rcx
  signed __int32 *v84; // r8
  signed __int32 v85; // eax
  signed __int32 v86; // ett
  int v87; // r8d
  unsigned __int64 v88; // rcx
  char Priority; // bl
  int v90; // eax
  unsigned __int8 PriorityDecrement; // cl
  char v92; // r9
  char v93; // bl
  char v94; // cl
  unsigned __int8 v95; // dl
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  int v98; // eax
  int SchedulerAssistPriorityFloor; // r9d
  int v100; // ebx
  char *v101; // rcx
  char v102; // al
  char *v103; // rcx
  char v104; // al
  char v105; // al
  int v106; // r14d
  int v107; // edi
  int v108; // edx
  __int64 v109; // r9
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // r8
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx
  struct _KPRCB *v115; // rcx
  signed __int32 *v116; // r8
  signed __int32 v117; // eax
  signed __int32 v118; // ett
  __int64 v119; // r8
  unsigned __int8 v120; // cl
  struct _KPRCB *v121; // r10
  _DWORD *v122; // r9
  int v123; // edx
  struct _KPRCB *v125; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned int v128; // eax
  __int64 v129; // r8
  unsigned __int8 v130; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v131; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v132; // [rsp+50h] [rbp-B0h] BYREF
  int v133; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int BamQosLevelFromAssistPage; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v135; // [rsp+60h] [rbp-A0h]
  __int64 v136; // [rsp+68h] [rbp-98h]
  int v137; // [rsp+70h] [rbp-90h] BYREF
  int v138; // [rsp+74h] [rbp-8Ch] BYREF
  int v139; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v140[3]; // [rsp+7Ch] [rbp-84h] BYREF
  _QWORD *v141; // [rsp+88h] [rbp-78h] BYREF
  __int64 v142; // [rsp+90h] [rbp-70h]
  __int64 *v143; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *v144; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v145; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v146; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v147; // [rsp+B8h] [rbp-48h]
  __int64 v148; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v149[42]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v150[27]; // [rsp+220h] [rbp+120h] BYREF

  v2 = 0;
  v132 = 0LL;
  memset(v149, 0, sizeof(v149));
  v131 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860;
  CurrentThread = KeGetCurrentThread();
  v144 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v147 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v9 = (__int64)KeGetCurrentPrcb();
  v135 = v9;
  if ( !*(_DWORD *)(v9 + 32472) && !*(_DWORD *)(*(_QWORD *)(v9 + 34888) + 8LL) )
  {
    v3 = 1073741860;
    goto LABEL_239;
  }
  v10 = CurrentThread->AbEntrySummary | CurrentThread->AbOrphanedEntrySummary;
  v141 = 0LL;
  if ( v10 != 63 )
  {
    v11 = KeGetCurrentPrcb();
    v143 = 0LL;
    KiAbProcessThreadLocks(
      (__int64)CurrentThread,
      1u,
      1,
      1,
      (__int64)&v141,
      (__int64)&v143,
      (__int64)&v11->AbSelfIoBoostsList);
    KiAbPropagateBoosts(&v143, (__int64)&v11->AbSelfIoBoostsList, (__int64)&v141);
    KiReadyDeferredReadyList((__int64)v11, &v141);
  }
  v137 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v137);
    while ( CurrentThread->ThreadLock );
  }
  v138 = 0;
  v131 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v138);
    while ( *(_QWORD *)(v9 + 48) );
  }
  if ( !*(_QWORD *)(v9 + 16) )
  {
    KiStartRescheduleContext(v149, &v131, CurrentThread);
    if ( (a1 & 1) != 0 && CurrentThread->Priority < 16 )
    {
      v12 = 0;
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v149, v9);
      v14 = *(unsigned __int8 *)(RescheduleContextEntryForPrcb + 32);
      v15 = (v14 >> 1) & 1;
      v16 = v14 | 8;
    }
    else
    {
      v12 = 1;
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v149, v9);
      v17 = *(unsigned __int8 *)(RescheduleContextEntryForPrcb + 32);
      v15 = (v17 >> 1) & 1;
      v16 = v17 | 0x10;
    }
    *(_BYTE *)(RescheduleContextEntryForPrcb + 34) |= 2u;
    *(_BYTE *)(RescheduleContextEntryForPrcb + 32) = v16;
    if ( v15 )
    {
      for ( i = 0; i < LOBYTE(v149[0]); ++i )
      {
        v19 = &v149[5 * i + 2];
        if ( v19 != (_QWORD *)RescheduleContextEntryForPrcb )
        {
          v20 = *((_BYTE *)v19 + 32);
          if ( v12 )
            v21 = v20 | 0x10;
          else
            v21 = v20 | 8;
          *((_BYTE *)v19 + 32) = v21;
          *((_BYTE *)v19 + 34) |= 2u;
        }
      }
    }
    for ( j = 0LL; ; j = v23 )
    {
      v23 = 0LL;
      if ( !LOBYTE(v149[0]) )
        break;
      v24 = (volatile signed __int32 **)&v149[3];
      v25 = LOBYTE(v149[0]);
      do
      {
        if ( *v24 > j && (!v23 || *v24 < v23) )
          v23 = *v24;
        v24 += 5;
        --v25;
      }
      while ( v25 );
      if ( !v23 )
        break;
      v139 = 0;
      while ( _interlockedbittestandset64(v23, 0LL) )
      {
        do
          KeYieldProcessorEx(&v139);
        while ( *(_QWORD *)v23 );
      }
    }
LABEL_123:
    memset(v150, 0, sizeof(v150));
    KiStartReadyQueueEnumeratorForRescheduleContext(v150, v149);
    while ( 1 )
    {
LABEL_54:
      m = BYTE13(v150[0]);
      if ( BYTE13(v150[0]) == 4 )
      {
LABEL_131:
        for ( k = 0LL; ; k = v56 )
        {
          v56 = 0LL;
          if ( !LOBYTE(v149[0]) )
            break;
          v57 = (volatile signed __int64 **)&v149[3];
          v58 = LOBYTE(v149[0]);
          do
          {
            if ( *v57 > k && (!v56 || *v57 < v56) )
              v56 = *v57;
            v57 += 5;
            --v58;
          }
          while ( v58 );
          if ( !v56 )
            break;
          _InterlockedAnd64(v56, 0LL);
        }
        v9 = v135;
        v59 = 0;
        v60 = 0;
        v61 = 0;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          v60 = 2;
        if ( LOBYTE(v149[0]) )
        {
          do
            v59 |= KiCommitRescheduleContextEntry(&v149[5 * v61++ + 2], v9, v60, &v132);
          while ( v61 < LOBYTE(v149[0]) );
        }
        if ( LODWORD(v149[1]) == 1 )
        {
          v62 = *(unsigned __int8 **)(v149[2] + 34904LL);
          v63 = v62[1] + 1;
          if ( v63 >= *v62 )
            v63 = 0;
          v62[1] = v63;
        }
        if ( v59 || v132 )
        {
          KiReleasePrcbLocksForIsolationUnit(&v131);
          CurrentThread = v144;
          v144->ThreadLock = 0LL;
          if ( v59 )
          {
            KiCompleteRescheduleContext(v149, v9);
            KiFlushSoftwareInterruptBatch(v9 + 12760);
          }
          if ( v132 )
            KiReadyDeferredReadyList(v9, &v132);
          v140[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(v140);
            while ( CurrentThread->ThreadLock );
          }
          KiAcquirePrcbLocksForIsolationUnit(v9, 0, (__int64 *)&v131);
        }
        else
        {
          CurrentThread = v144;
        }
        break;
      }
      if ( BYTE13(v150[0]) )
        goto LABEL_67;
      for ( m = 1; (unsigned __int8)m < 4u; ++m )
      {
        switch ( m )
        {
          case 1:
            v27 = 0LL;
            break;
          case 2:
            ready = KiReadyQueueEnumeratorStartScbQueuesPhase(v150);
            goto LABEL_64;
          case 3:
            v27 = 1LL;
            break;
          default:
            continue;
        }
        ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(v150, v27);
LABEL_64:
        if ( ready >= 0 )
          break;
      }
      BYTE13(v150[0]) = m;
      if ( m == 4 )
        goto LABEL_131;
LABEL_67:
      v30 = **((_QWORD **)&v150[2] + 1);
      *((_QWORD *)&v150[2] + 1) = v30;
      if ( v30 == *(_QWORD *)&v150[2] )
      {
        do
        {
          if ( (int)KiAdvanceReadyQueueEnumeratorToNextList(v150) < 0 )
            goto LABEL_131;
          v30 = **((_QWORD **)&v150[2] + 1);
          *((_QWORD *)&v150[2] + 1) = v30;
        }
        while ( v30 == *(_QWORD *)&v150[2] );
        m = BYTE13(v150[0]);
      }
      v31 = v30 - 216;
      v32 = *(_QWORD *)&v150[3 * BYTE10(v150[0]) + 3];
      v142 = v32;
      if ( m == 2 )
      {
        v33 = *(_QWORD *)&v150[1];
        v34 = 0LL;
        v136 = 0LL;
      }
      else
      {
        if ( BYTE12(v150[0]) == 1 )
          v34 = *((_QWORD *)&v150[3 * BYTE10(v150[0]) + 3] + 1);
        else
          v34 = 0LL;
        v136 = v34;
        v33 = 0LL;
      }
      if ( *(_QWORD *)(v31 + 568) != KiCpuSetSequence && (*(_DWORD *)(v31 + 116) & 8) == 0 )
      {
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v150, v31);
        KiInsertDeferredReadyList(&v132, v31);
        continue;
      }
      if ( !v33 )
      {
        v35 = *(_QWORD *)(v31 + 104);
        if ( v35 )
        {
          v36 = *(unsigned int *)(v32 + 216) + v35;
          if ( v36 )
          {
            LOBYTE(v29) = 1;
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v31, v36, v29, 0LL) )
            {
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v150, v31);
              *(_DWORD *)(v31 + 536) = *(_DWORD *)(v32 + 36);
              KiAddThreadToScbQueue(v32, v36, v31, 0LL);
              continue;
            }
          }
        }
      }
      v37 = (*(_DWORD *)(v31 + 120) >> 1) & 1;
      if ( v37 <= SLODWORD(v149[1]) )
      {
        if ( v37 < SHIDWORD(v149[0]) )
          v37 = HIDWORD(v149[0]);
        if ( !v37 )
        {
          if ( !LOBYTE(v149[0]) )
          {
LABEL_53:
            v2 = 0;
            continue;
          }
          while ( 2 )
          {
            v38 = v149[5 * v2 + 2];
            v39 = &v149[5 * v2 + 2];
            if ( !v34 && v38 == v32 )
              goto LABEL_105;
            v40 = v39[1];
            if ( v40 && v40 == v34 )
            {
              v41 = *(_QWORD *)(v38 + 192);
              v42 = -1LL;
              v43 = -1LL;
              v130 = *(_BYTE *)(v31 + 516);
              if ( (unsigned int)KeIsMultiCoreClassesEnabled() )
              {
                v133 = 0;
                v44 = KiComputeHeteroThreadQos(v31, &v133);
                v43 = *(_QWORD *)(v41 + 80);
                v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192)
                                + 24LL * (v130 + (unsigned int)*(unsigned __int8 *)(v41 + 185) * (v133 + 2 * v44))
                                + 16);
                goto LABEL_96;
              }
              v29 = *(unsigned __int8 *)(v31 + 125);
              if ( (unsigned int)v29 >= 5 )
                v29 = (unsigned int)KiConvertDynamicHeteroPolicy(v31);
              if ( (_DWORD)v29 )
              {
                v32 = v142;
                v48 = *(_QWORD *)(v142 + 192);
                v43 = *(_QWORD *)(v48 + 80);
                v42 = *(_QWORD *)(*(_QWORD *)(v48 + 192)
                                + 24LL
                                * (*(unsigned __int8 *)(v31 + 516) + (unsigned int)v29 * *(unsigned __int8 *)(v48 + 185))
                                + 16);
              }
              else
              {
LABEL_96:
                v32 = v142;
              }
              if ( ((v42 & *(_QWORD *)(v38 + 200)) != 0 || (v43 & *(_QWORD *)(v136 + 664) & v42) == 0)
                && (v38 == v32
                 || (v45 = *(_QWORD *)(v31 + 104)) == 0
                 || !(*(unsigned int *)(v38 + 216) + v45)
                 || !KiIsThreadConstrainedBySchedulingGroup(v31)
                 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v46)
                 || (unsigned __int8)KiShouldPreemptionBeDeferred(v31)) )
              {
LABEL_105:
                v148 = 0LL;
                if ( KiGroupSchedulingEnabled )
                {
                  v47 = (unsigned __int8)KiEvaluateGroupSchedulingPreemption(&v149[5 * v2 + 2], v31, 0LL, &v148) == 0;
LABEL_117:
                  if ( !v47 )
                    goto LABEL_120;
                }
                else
                {
                  v49 = *((_BYTE *)v39 + 32);
                  v50 = v39[2];
                  if ( (v49 & 1) != 0
                    || (v51 = *(_BYTE *)(v31 + 195), v51 > *(char *)(v50 + 195))
                    || v51 == *(_BYTE *)(v50 + 195) && (v49 & 0x18) != 0 )
                  {
LABEL_120:
                    v2 = 0;
                    goto LABEL_121;
                  }
                  if ( (v49 & 0x10) != 0 )
                  {
                    v47 = v51 == 0;
                    goto LABEL_117;
                  }
                }
              }
            }
            if ( ++v2 >= LOBYTE(v149[0]) )
              goto LABEL_53;
            v34 = v136;
            continue;
          }
        }
        v53 = 0;
        if ( LOBYTE(v149[0]) )
        {
          while ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(&v149[5 * v53 + 2], v31, 0LL) )
          {
            if ( ++v53 >= LOBYTE(v149[0]) )
              goto LABEL_127;
          }
        }
        else
        {
LABEL_127:
          v54 = 0;
          if ( LOBYTE(v149[0]) )
          {
            while ( 1 )
            {
              v39 = &v149[5 * v54 + 2];
              if ( (unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v39, v31, v32, v34) )
                break;
              if ( ++v54 >= LOBYTE(v149[0]) )
                goto LABEL_54;
            }
LABEL_121:
            v52 = *v39;
            if ( *v39 )
            {
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v150, v31);
              KiScheduleThreadToRescheduleContext((unsigned int)v149, v31, v52, 0, (__int64)&v132);
              goto LABEL_123;
            }
          }
        }
      }
    }
  }
  v64 = 0LL;
  v65 = 0LL;
  v66 = v131 & 0xFFFFFFFFFFFFFFFEuLL;
  v145 = v131 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v131 & 1) != 0 )
  {
    if ( (v131 & 1) == 1 )
    {
      v64 = *(_QWORD *)(v66 + 34904) + 8LL;
      v65 = **(unsigned __int8 **)(v66 + 34904);
    }
    KzReleaseAdditionalPrcbLocks(v64, v65, &v145, 1LL);
    v131 = v66;
  }
  v67 = *(_QWORD *)(v9 + 16);
  if ( v67 )
  {
    if ( *(_BYTE *)(v9 + 32) )
    {
      CycleTime = CurrentThread->CycleTime;
    }
    else
    {
      _disable();
      *(_BYTE *)(v9 + 32) = 1;
      v68 = __rdtsc();
      v69 = v68 - *(_QWORD *)(v9 + 33152);
      CycleTime = v69 + CurrentThread->CycleTime;
      CurrentThread->CycleTime = CycleTime;
      CurrentRunTime = CurrentThread->CurrentRunTime;
      v72 = v69 * *(unsigned int *)(v9 + 33208);
      *(_QWORD *)(v9 + 33152) = v68;
      v73 = (v72 >> 16) + CurrentRunTime;
      if ( v73 > 0xFFFFFFFF )
        LODWORD(v73) = -1;
      v47 = (CurrentThread->Header.Size & 0xBE) == 0;
      CurrentThread->CurrentRunTime = v73;
      if ( !v47 )
        KiEndThreadAccountingPeriodEx(v9, (__int64)CurrentThread, v69, 0LL);
      v74 = __rdtsc();
      *(_QWORD *)(v9 + 33400) += v74 - *(_QWORD *)(v9 + 33152);
      if ( (CurrentThread->Header.Size & 0x20) != 0 )
      {
        FrequencyBucket = PoGetFrequencyBucket(v9);
        ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(v9, v76, v77, FrequencyBucket);
        v80 = (_QWORD *)(v9 + 8 * (ProcessorEfficiencyClass + 2 * v79 + 4176));
        *v80 += v81;
      }
      if ( (CurrentThread->Header.Size & 0x40) != 0 )
      {
        v82 = CurrentThread->SchedulerAssist;
        if ( v82 )
          v82[64] = 1;
      }
      *(_QWORD *)(v9 + 33152) = v74;
      if ( (CurrentThread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(CurrentThread, 0LL);
      v47 = *(_BYTE *)(v9 + 6) == 0;
      *(_BYTE *)(v9 + 32) = 0;
      if ( !v47 )
      {
        *(_BYTE *)(v9 + 6) = 0;
        HalRequestSoftwareInterrupt(2);
      }
      v83 = KeGetCurrentPrcb();
      v84 = (signed __int32 *)v83->SchedulerAssist;
      if ( v84 )
      {
        _m_prefetchw(v84);
        v85 = *v84;
        do
        {
          v86 = v85;
          v85 = _InterlockedCompareExchange(v84, v85 & 0xFFDFFFFF, v85);
        }
        while ( v86 != v85 );
        if ( (v85 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v83);
      }
      _enable();
    }
    v87 = *(&CurrentThread->MiscFlags + 1);
    v88 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
    if ( (v87 & 0x20) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      v87 = *(&CurrentThread->MiscFlags + 1);
    }
    Priority = CurrentThread->Priority;
    CurrentThread->QuantumTarget = v88;
    if ( Priority >= 16 )
      goto LABEL_206;
    if ( (KiVelocityFlags & 0x8000) != 0 )
    {
      if ( LOBYTE(CurrentThread->Process[1].IdealProcessor[31]) == 2 )
      {
        v87 = *(&CurrentThread->MiscFlags + 1);
        v90 = v87;
        if ( (v87 & 8) == 0 )
        {
          PriorityDecrement = CurrentThread->PriorityDecrement;
          v92 = PriorityDecrement & 0xF;
          if ( (PriorityDecrement & 0xF) != 0 )
          {
            CurrentThread->PriorityDecrement = v92;
            v93 = -1 - (PriorityDecrement >> 4) + Priority;
            v94 = CurrentThread->BasePriority + v92;
            if ( v93 >= v94 )
              v94 = v93;
            Priority = v94;
LABEL_206:
            PriorityFloorSummary = CurrentThread->PriorityFloorSummary;
            if ( PriorityFloorSummary )
            {
              _BitScanReverse(&PriorityFloorSummary, PriorityFloorSummary);
              v140[1] = PriorityFloorSummary;
              if ( Priority < (char)PriorityFloorSummary )
                Priority = PriorityFloorSummary;
            }
            v146 = 0LL;
            if ( (v87 & 0x400000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)CurrentThread->SchedulerAssist, 0x100000u);
              v98 = KiReadGuestSchedulerAssistPriority(CurrentThread, &v146);
              SchedulerAssistPriorityFloor = CurrentThread->SchedulerAssistPriorityFloor;
              v100 = v98;
              if ( v98 != SchedulerAssistPriorityFloor )
              {
                v101 = (char *)CurrentThread + (char)v98;
                v102 = v101[824];
                if ( v102 == -1 )
                  KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v100, 1uLL, 0LL);
                v101[824] = v102 + 1;
                CurrentThread->PriorityFloorSummary |= 1 << v100;
                if ( SchedulerAssistPriorityFloor != 32 )
                {
                  v103 = (char *)CurrentThread + (char)SchedulerAssistPriorityFloor;
                  v104 = v103[824];
                  if ( !v104 )
                    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)SchedulerAssistPriorityFloor, 2uLL, 0LL);
                  v105 = v104 - 1;
                  v103[824] = v105;
                  if ( !v105 )
                    CurrentThread->PriorityFloorSummary ^= 1 << SchedulerAssistPriorityFloor;
                }
                CurrentThread->SchedulerAssistPriorityFloor = v100;
              }
              v106 = CurrentThread->Priority;
              v107 = KiComputePriorityFloor((__int64)CurrentThread, v100);
              if ( v107 != v106 )
              {
                KiSetBasePriorityAndClearDecrement(CurrentThread, 0LL, 0LL);
                KiUpdateThreadPriority(0, v108, (_DWORD)CurrentThread, v107, 0);
              }
              BamQosLevelFromAssistPage = CurrentThread->BamQosLevelFromAssistPage;
              KiCheckAssistDataForBamQosLevelOverride(CurrentThread, &BamQosLevelFromAssistPage);
              if ( BamQosLevelFromAssistPage != (unsigned __int8)CurrentThread->ThreadFlags2 )
                KiSetThreadQosLevelUnsafe(CurrentThread, BamQosLevelFromAssistPage);
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
                _InterlockedAnd((volatile signed __int32 *)CurrentThread->SchedulerAssist, 0xFFEFFFFF);
              if ( v106 != v107 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityUpdate((_DWORD)CurrentThread, v106, v100, v107, (__int64)&v146);
              v9 = v135;
            }
            else
            {
              v125 = KeGetCurrentPrcb();
              if ( Priority > CurrentThread->Priority )
              {
                if ( CurrentThread->AbWaitEntryCount )
                {
                  p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
                  if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                  {
                    p_AbPropagateBoostsList = &v125->AbPropagateBoostsList;
                    if ( v125 != (struct _KPRCB *)-35704LL )
                    {
                      p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                      p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                      _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
                      KiAbQueueAutoBoostDpc(v125);
                    }
                  }
                }
              }
              CurrentThread->Priority = Priority;
              v128 = KiComputeHeteroThreadQos((__int64)CurrentThread, 0LL);
              if ( v128 != (unsigned __int8)CurrentThread->ThreadFlags2 )
                KiSetThreadQosLevelUnsafe(CurrentThread, v128);
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
              {
                LOBYTE(v129) = 1;
                KiSetSchedulerAssistPriority(
                  CurrentThread->SchedulerAssist,
                  (unsigned int)CurrentThread->Priority,
                  v129);
              }
            }
            CurrentThread->ThreadLock = 0LL;
            *(_QWORD *)(v9 + 16) = 0LL;
            _disable();
            *(_BYTE *)(v9 + 32) = 1;
            v110 = __rdtsc();
            v111 = v110 - *(_QWORD *)(v9 + 33152);
            CurrentThread->CycleTime += v111;
            v112 = CurrentThread->CurrentRunTime;
            v113 = v111 * *(unsigned int *)(v9 + 33208);
            *(_QWORD *)(v9 + 33152) = v110;
            v114 = (v113 >> 16) + v112;
            if ( v114 > 0xFFFFFFFF )
              LODWORD(v114) = -1;
            v47 = (CurrentThread->Header.Size & 0xBE) == 0;
            CurrentThread->CurrentRunTime = v114;
            if ( !v47 )
            {
              LOBYTE(v109) = 1;
              KiEndThreadAccountingPeriodEx(v9, (__int64)CurrentThread, v111, v109);
            }
            v115 = KeGetCurrentPrcb();
            v116 = (signed __int32 *)v115->SchedulerAssist;
            if ( v116 )
            {
              _m_prefetchw(v116);
              v117 = *v116;
              do
              {
                v118 = v117;
                v117 = _InterlockedCompareExchange(v116, v117 & 0xFFDFFFFF, v117);
              }
              while ( v118 != v117 );
              if ( (v117 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v115);
            }
            _enable();
            *(_QWORD *)(v9 + 8) = v67;
            if ( *(_BYTE *)(v67 + 388) == 1 )
              *(_DWORD *)(v67 + 132) = *(_DWORD *)(v67 + 132) - *(_DWORD *)(v67 + 436) + MEMORY[0xFFFFF78000000320];
            LOBYTE(CurrentIrql) = v147;
            *(_BYTE *)(v67 + 388) = 2;
            CurrentThread->WaitIrql = CurrentIrql;
            CurrentThread->WaitReason = 33;
            KiQueueReadyThread(v9, &v131, CurrentThread);
            LOBYTE(v119) = 1;
            KiSwapContext(CurrentThread, v67, v119);
            v3 = 0;
            goto LABEL_239;
          }
        }
      }
      else
      {
        v90 = *(&CurrentThread->MiscFlags + 1);
      }
      v87 = v90;
    }
    v95 = CurrentThread->PriorityDecrement;
    BasePriority = CurrentThread->BasePriority;
    if ( (char)(-1 - (v95 >> 4) - (v95 & 0xF) + Priority) >= BasePriority )
      BasePriority = -1 - (v95 >> 4) - (v95 & 0xF) + Priority;
    Priority = BasePriority;
    if ( v95 )
    {
      if ( (v95 & 0xF) != 0 )
      {
        v87 = *(&CurrentThread->MiscFlags + 1);
        CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      }
      CurrentThread->PriorityDecrement = 0;
    }
    goto LABEL_206;
  }
  KiReleasePrcbLocksForIsolationUnit(&v131);
  LOBYTE(CurrentIrql) = v147;
  v3 = 1073741860;
  CurrentThread->ThreadLock = 0LL;
LABEL_239:
  if ( KiIrqlFlags )
  {
    v120 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v120 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v120 >= 2u )
    {
      v121 = KeGetCurrentPrcb();
      v122 = v121->SchedulerAssist;
      v123 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v47 = (v123 & v122[5]) == 0;
      v122[5] &= v123;
      if ( v47 )
        KiRemoveSystemWorkPriorityKick(v121);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v3;
}
