/*
 * XREFs of KeSetPriorityThread @ 0x1402261B0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140219DB8 (CcApplyLowIoPriorityToThread.c)
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     PfTSetTraceWorkerPriority @ 0x1402B896C (PfTSetTraceWorkerPriority.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x140391CB0 (KeSwapProcessOrStack.c)
 *     MiRebuildLargePagesThread @ 0x140392FA0 (MiRebuildLargePagesThread.c)
 *     KiExecuteDpc @ 0x140396B20 (KiExecuteDpc.c)
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x1403AEA70 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     ExRegisterBootDevice @ 0x1406070D0 (ExRegisterBootDevice.c)
 *     MiPartitionWorkingSetManager @ 0x140627130 (MiPartitionWorkingSetManager.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140ACEEB0 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140227EF4 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402AE590 (KiPrepareReadyThreadForRescheduling.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x14040A730 (KiSetSchedulerAssistPriority.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     EtwTracePriority @ 0x14045EE2A (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  char v5; // r12
  int v6; // r14d
  __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  bool v10; // si
  char v11; // al
  char PriorityDecrement; // cl
  KPRIORITY v13; // r15d
  char BasePriority; // al
  int RealtimePriorityFloor; // esi
  KPRIORITY v16; // eax
  char v17; // r15
  char *v18; // rcx
  char v19; // al
  char *v20; // rcx
  char v21; // al
  char v22; // al
  unsigned int PriorityFloorSummary; // eax
  int v24; // eax
  int v25; // r13d
  __int64 v26; // rsi
  volatile signed __int32 *v27; // rdi
  char v28; // al
  __int64 NextProcessor; // rax
  bool v30; // zf
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned int v34; // r14d
  int v35; // r15d
  int v36; // edx
  struct _KPRCB *v37; // r8
  _SINGLE_LIST_ENTRY *v38; // rdx
  _SINGLE_LIST_ENTRY *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r8
  int v42; // r14d
  int v43; // r9d
  bool v44; // r9
  struct _KPRCB *v45; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rcx
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r10
  int v51; // ecx
  _BYTE *v52; // rax
  unsigned int v53; // ecx
  __int64 *v54; // r15
  __int64 v55; // r13
  __int64 v56; // r14
  _BYTE *v57; // r12
  char IsThreadRankNonZero; // al
  char v59; // cl
  char v60; // al
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int CurrentRunTime; // edx
  char v64; // al
  char v65; // al
  char v66; // cl
  int v67; // edx
  int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  _KAFFINITY_EX *Affinity; // rcx
  unsigned __int64 v73; // rcx
  _QWORD *v74; // r8
  unsigned int v75; // ecx
  _QWORD *v76; // rax
  unsigned int v77; // r15d
  unsigned int v78; // r14d
  struct _KPRCB *v79; // r13
  unsigned __int8 *v80; // rdx
  unsigned __int8 v81; // al
  unsigned __int64 *v82; // r8
  int v83; // edx
  unsigned __int64 v84; // r9
  struct _KPRCB *v85; // rdi
  __int64 v86; // r8
  struct _KPRCB *v87; // rcx
  char v88; // [rsp+30h] [rbp-D0h]
  int v89; // [rsp+34h] [rbp-CCh]
  __int64 v90; // [rsp+38h] [rbp-C8h] BYREF
  int v91; // [rsp+40h] [rbp-C0h]
  unsigned int v92; // [rsp+44h] [rbp-BCh]
  KPRIORITY v93; // [rsp+48h] [rbp-B8h]
  __int64 v94; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v95[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v96; // [rsp+60h] [rbp-A0h] BYREF
  struct _KPRCB *v97; // [rsp+68h] [rbp-98h]
  volatile signed __int32 *v98; // [rsp+70h] [rbp-90h]
  __int64 v99; // [rsp+78h] [rbp-88h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp-80h]
  __int64 v101; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v102; // [rsp+90h] [rbp-70h] BYREF
  __int64 v103; // [rsp+98h] [rbp-68h]
  _QWORD v104[42]; // [rsp+A0h] [rbp-60h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v5 = 0;
  v6 = 0;
  v94 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v103 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v95[0] = 0;
  v10 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v95);
    while ( Thread->ThreadLock );
  }
  v11 = Thread->Priority;
  PriorityDecrement = Thread->PriorityDecrement;
  v13 = v11;
  v93 = v11;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v11 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != v11 )
    KiSetQuantumTargetThread(Thread, CurrentPrcb, v10);
  BasePriority = Thread->BasePriority;
  if ( BasePriority < 16 )
  {
    if ( !BasePriority )
      goto LABEL_31;
  }
  else if ( Priority < 16 )
  {
    goto LABEL_165;
  }
  if ( Thread->Priority && !Priority )
  {
    RealtimePriorityFloor = Thread->RealtimePriorityFloor;
    LOBYTE(Priority) = 1;
LABEL_27:
    v16 = 32;
    goto LABEL_28;
  }
LABEL_31:
  if ( Priority == 63 )
    goto LABEL_165;
  RealtimePriorityFloor = Thread->RealtimePriorityFloor;
  if ( Priority < 16 )
    goto LABEL_27;
  v20 = (char *)Thread + (char)Priority;
  v21 = v20[824];
  if ( v21 == -1 )
    KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)Priority, 1uLL, 0LL);
  v20[824] = v21 + 1;
  v16 = Priority;
  Thread->PriorityFloorSummary |= 1 << Priority;
LABEL_28:
  Thread->RealtimePriorityFloor = v16;
  v17 = Priority;
  v88 = Priority;
  if ( RealtimePriorityFloor != 32 )
  {
    v18 = (char *)Thread + (char)RealtimePriorityFloor;
    v19 = v18[824];
    if ( !v19 )
      KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)RealtimePriorityFloor, 2uLL, 0LL);
    v22 = v19 - 1;
    v88 = Priority;
    v18[824] = v22;
    if ( !v22 )
    {
      v17 = Priority;
      v88 = Priority;
      Thread->PriorityFloorSummary ^= 1 << RealtimePriorityFloor;
    }
  }
  PriorityFloorSummary = Thread->PriorityFloorSummary;
  v90 = 0LL;
  if ( PriorityFloorSummary )
  {
    _BitScanReverse(&PriorityFloorSummary, PriorityFloorSummary);
    v95[1] = PriorityFloorSummary;
    if ( v17 < (char)PriorityFloorSummary )
      v17 = PriorityFloorSummary;
    v88 = v17;
  }
  v24 = Thread->Priority;
  v91 = v17;
  if ( v24 == v17 )
    goto LABEL_164;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = Thread->WaitBlockFill6[68];
        v26 = 0LL;
        v98 = 0LL;
        v27 = 0LL;
        if ( v25 != 2 )
          break;
LABEL_49:
        NextProcessor = Thread->NextProcessor;
        if ( (int)NextProcessor >= 0 )
        {
          v26 = KiProcessorBlock[NextProcessor];
          KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, &v90);
          v30 = Thread == *(PKTHREAD *)(v26 + 8);
LABEL_66:
          if ( v30 )
            goto LABEL_68;
LABEL_67:
          KiReleasePrcbLocksForIsolationUnit(&v90);
        }
      }
      if ( v25 == 1 )
        break;
      if ( v25 != 3 )
      {
        if ( v25 != 5 )
          goto LABEL_68;
        v28 = Thread->WaitRegister.Flags & 7;
        if ( v28 == 1 || (unsigned __int8)(v28 - 3) <= 3u )
          goto LABEL_68;
        LOBYTE(v25) = 2;
        goto LABEL_49;
      }
      v31 = Thread->NextProcessor;
      if ( (int)v31 >= 0 )
      {
        v26 = KiProcessorBlock[v31];
        KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, &v90);
        if ( Thread == *(PKTHREAD *)(v26 + 16) )
          goto LABEL_68;
        if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)v31 )
          __fastfail(0x1Eu);
        goto LABEL_67;
      }
    }
    v32 = Thread->NextProcessor;
    if ( (int)v32 >= 0 )
    {
      v26 = KiProcessorBlock[v32];
      KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, &v90);
      if ( Thread->WaitBlockFill6[68] != 1 )
        goto LABEL_67;
      v30 = Thread->NextProcessor == (_DWORD)v32;
      goto LABEL_66;
    }
    v33 = (unsigned int)v32;
    v96 = 0;
    LODWORD(v33) = v32 & 0x7FFFFFFF;
    v27 = *(volatile signed __int32 **)(KiProcessorBlock[v33] + 34888);
    v98 = v27;
    while ( _interlockedbittestandset64(v27, 0LL) )
    {
      do
        KeYieldProcessorEx(&v96);
      while ( *(_QWORD *)v27 );
    }
    if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)v32 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  }
LABEL_68:
  v34 = Thread->Priority;
  v97 = KeGetCurrentPrcb();
  v92 = v34;
  v89 = 0;
  v35 = v34;
  memset(v104, 0, sizeof(v104));
  if ( (unsigned __int8)v25 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v26, v27, Thread, v34);
    KiUpdateThreadPriority(0, v67, (_DWORD)Thread, v91, 0);
    KiPrepareReadyThreadForRescheduling(Thread, (unsigned int)v91, &v94);
    goto LABEL_124;
  }
  if ( (unsigned __int8)v25 == 2 )
  {
    v45 = KeGetCurrentPrcb();
    v99 = *(_QWORD *)(v26 + 16);
    if ( v88 > (char)v34 )
    {
      if ( Thread->AbWaitEntryCount )
      {
        p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
        if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
        {
          p_AbPropagateBoostsList = &v45->AbPropagateBoostsList;
          if ( v45 != (struct _KPRCB *)-35704LL )
          {
            p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
            _InterlockedIncrement16(&Thread->KeReferenceCount);
            KiAbQueueAutoBoostDpc(v45);
          }
        }
      }
    }
    Thread->Priority = v88;
    v48 = KiComputeHeteroThreadQos(Thread, 0LL, v45);
    if ( v48 != (unsigned __int8)Thread->ThreadFlags2 )
      KiSetThreadQosLevelUnsafe(Thread, v48);
    v50 = v99;
    if ( !v99 )
    {
      v51 = *((_DWORD *)&Thread->0 + 1) >> 1;
      v101 = v26;
      if ( (v51 & 1) != 0 )
      {
        v52 = *(_BYTE **)(v26 + 34904);
        v53 = (unsigned __int8)*v52;
        v54 = (__int64 *)(v52 + 8);
        if ( !*v52 )
        {
          v35 = v34;
          goto LABEL_94;
        }
      }
      else
      {
        v54 = &v101;
        v53 = 1;
      }
      v55 = v53;
      do
      {
        v56 = *v54;
        v57 = *(_BYTE **)(*v54 + 56);
        if ( (Thread->Header.Size & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(Thread, *v54), v59 = 1, !IsThreadRankNonZero) )
        {
          v59 = Thread->Priority;
        }
        v60 = v59 & 0x7F | ((unsigned __int8)(*((_DWORD *)&Thread->0 + 1) >> 1) << 7);
        *v57 = v60;
        v61 = *(_QWORD *)(v56 + 35000);
        if ( v61 )
        {
          if ( Thread == *(PKTHREAD *)(v56 + 24) )
            v62 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v62 = v60 & 0x7F;
          KiSetSchedulerAssistPriority(v61, v62, 0LL);
        }
        v49 = *(_QWORD *)(v56 + 56);
        if ( KeHeteroSystem )
        {
          CurrentRunTime = Thread->CurrentRunTime;
          v64 = (LOBYTE(Thread->ThreadFlags2) ^ *(_BYTE *)(v49 + 64)) & 7 ^ *(_BYTE *)(v49 + 64);
          v65 = (v64 ^ (8 * Thread->HgsFeedbackClass)) & 0x38 ^ v64;
          if ( CurrentRunTime <= Thread->ExpectedRunTime )
            CurrentRunTime = Thread->ExpectedRunTime;
          v66 = 64;
          if ( CurrentRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
            v66 = 0;
          *(_BYTE *)(v49 + 64) = v66 | v65 & 0xBF;
        }
        ++v54;
        --v55;
      }
      while ( v55 );
      v27 = v98;
      v5 = 0;
      v35 = v92;
      v50 = v99;
    }
LABEL_94:
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    {
      LOBYTE(v49) = 1;
      KiSetSchedulerAssistPriority(Thread->SchedulerAssist, (unsigned int)Thread->Priority, v49);
    }
    if ( !v50 )
    {
      if ( v91 >= v35 )
      {
        if ( v91 <= v35 )
          goto LABEL_124;
        v44 = 0;
        if ( Thread->WaitBlockFill6[68] == 2 )
          v89 = v91;
        goto LABEL_125;
      }
      if ( Thread->WaitBlockFill6[68] == 2 )
      {
        v44 = 1;
        goto LABEL_125;
      }
      if ( (unsigned int)(*(_DWORD *)(v26 + 32472) | *(_DWORD *)(*(_QWORD *)(v26 + 34888) + 8LL)) >> (v91 + 1) )
        Thread->WaitRegister.Flags |= 0x10u;
    }
LABEL_124:
    v44 = 0;
    goto LABEL_125;
  }
  if ( (unsigned __int8)v25 != 3 )
  {
    v37 = KeGetCurrentPrcb();
    if ( v88 > (char)v34 )
    {
      if ( Thread->AbWaitEntryCount )
      {
        v38 = &Thread->PropagateBoostsEntry;
        if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
        {
          v39 = &v37->AbPropagateBoostsList;
          if ( v37 != (struct _KPRCB *)-35704LL )
          {
            v38->Next = v39->Next;
            v39->Next = v38;
            _InterlockedIncrement16(&Thread->KeReferenceCount);
            KiAbQueueAutoBoostDpc(v37);
          }
        }
      }
    }
    Thread->Priority = v88;
    v40 = KiComputeHeteroThreadQos(Thread, 0LL, v37);
    if ( v40 != (unsigned __int8)Thread->ThreadFlags2 )
      KiSetThreadQosLevelUnsafe(Thread, v40);
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    {
      LOBYTE(v41) = 1;
      KiSetSchedulerAssistPriority(Thread->SchedulerAssist, (unsigned int)Thread->Priority, v41);
    }
    goto LABEL_124;
  }
  v42 = v91;
  KiUpdateThreadPriority(v26, v36, (_DWORD)Thread, v91, 1);
  v43 = 0;
  if ( v42 >= v35 )
    v43 = v42;
  v89 = v43;
  v44 = v42 < v35;
LABEL_125:
  v68 = 0;
  v69 = KiProcessorBlock[Thread->IdealProcessor];
  v70 = *(_QWORD *)(v69 + 34880);
  if ( v70 )
  {
    v71 = *(unsigned __int8 *)(v69 + 208);
    Affinity = Thread->Affinity;
    if ( (unsigned __int16)v71 >= Affinity->Count )
      v73 = 0LL;
    else
      v73 = Affinity->Bitmap[v71];
    LOBYTE(v68) = (v70 & v73) == v70;
  }
  if ( v68 != ((*((_DWORD *)&Thread->0 + 1) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)&Thread->116 + 1, 0x2000u);
  if ( v44 )
  {
    KiStartRescheduleContext(v104, &v90, 0LL);
    v74 = 0LL;
    v75 = 0;
    if ( LOBYTE(v104[0]) )
    {
      v76 = &v104[2];
      while ( *v76 != v26 )
      {
        ++v75;
        v76 += 5;
        if ( v75 >= LOBYTE(v104[0]) )
          goto LABEL_139;
      }
      v74 = v76;
    }
LABEL_139:
    *((_BYTE *)v74 + 34) |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v104, &v94);
    v5 = 0;
    v77 = 0;
    v78 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v77 = 2;
    if ( LOBYTE(v104[0]) )
    {
      v79 = v97;
      do
        v5 |= KiCommitRescheduleContextEntry(&v104[5 * v78++ + 2], v79, v77, &v94);
      while ( v78 < LOBYTE(v104[0]) );
    }
    if ( LODWORD(v104[1]) == 1 )
    {
      v80 = *(unsigned __int8 **)(v104[2] + 34904LL);
      v81 = v80[1] + 1;
      if ( v81 >= *v80 )
        v81 = 0;
      v80[1] = v81;
    }
  }
  if ( v26 )
  {
    v82 = 0LL;
    v83 = 0;
    v84 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
    v102 = v90 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v90 & 1) == 0 )
    {
      v82 = &v102;
      v83 = 1;
      goto LABEL_155;
    }
    if ( (v90 & 1) == 1 )
    {
      v82 = (unsigned __int64 *)(*(_QWORD *)(v84 + 34904) + 8LL);
      v83 = **(unsigned __int8 **)(v84 + 34904);
    }
    while ( v83 )
LABEL_155:
      _InterlockedAnd64((volatile signed __int64 *)(v82[--v83] + 48), 0LL);
    v90 = 0LL;
  }
  if ( v27 )
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  v85 = v97;
  if ( v5 )
  {
    KiCompleteRescheduleContext(v104, v97);
    KiFlushSoftwareInterruptBatch(&v85->DeferredDispatchInterrupts);
  }
  if ( v89 > 0 )
    KiHvEnlightenedGuestPriorityKick(v85, v26, (unsigned int)v89);
  v6 = Thread->Priority;
LABEL_164:
  v13 = v93;
LABEL_165:
  v86 = (unsigned __int8)v103;
  v87 = CurrentPrcb;
  Thread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(v87, &v94, v86);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v6 )
    EtwTracePriority((_DWORD)Thread, 1328, v13, v6, 0LL);
  return v13;
}
