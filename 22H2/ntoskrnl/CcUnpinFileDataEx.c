/*
 * XREFs of CcUnpinFileDataEx @ 0x140274CB0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14027476C (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140274880 (CcGetDirtyPagesHelper.c)
 *     CcAcquireByteRangeForWrite @ 0x1402905C0 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14029FCC0 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x140306B18 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x140359C58 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x140635390 (CcUnpinData.c)
 *     CcMapData @ 0x14063CF30 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x1408678D0 (CcUnpinDataForThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveBoostThread @ 0x14024A840 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140272EF8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     ExpFreeOwnerEntry @ 0x140275670 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x1402756E0 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x140275D34 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x14029346C (CcDeductDirtyPages.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     ExpFastResourceLegacyRelease @ 0x14038DDBC (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038F730 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AAE88 (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3, _DWORD *SchedulerAssist)
{
  ULONG_PTR v4; // rdi
  __int64 v7; // rdi
  struct _KEVENT *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR *v16; // r15
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // r12
  int SessionId; // eax
  __int64 v25; // rcx
  bool v26; // zf
  unsigned __int8 v27; // r15
  int v28; // eax
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // rdi
  __int16 v32; // cx
  char *v33; // rsi
  __int16 v34; // cx
  ULONG_PTR v35; // r14
  unsigned __int8 v36; // r10
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  struct _KTHREAD *v40; // r8
  __int16 v41; // cx
  bool v42; // r12
  unsigned int v43; // ecx
  __int64 v44; // rax
  char *v45; // rdx
  unsigned int v46; // edi
  __int64 v47; // r8
  __int64 v48; // r9
  bool v49; // cc
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rdi
  char v57; // r15
  int v58; // r14d
  unsigned int v59; // r14d
  unsigned int v60; // edi
  unsigned __int64 v61; // rdi
  signed __int32 v62; // eax
  struct _KEVENT *v63; // rcx
  __int64 v64; // r12
  unsigned int v65; // edi
  unsigned int v66; // eax
  unsigned __int64 OldIrql; // rdi
  char **v68; // rdx
  PVOID *v69; // rcx
  _DWORD *v70; // rcx
  unsigned __int8 v71; // al
  struct _KTHREAD *v72; // rdx
  __int64 v73; // rdi
  struct _KEVENT *v74; // rcx
  unsigned __int64 v75; // r8
  char *v76; // r10
  __int64 v77; // rax
  ULONG_PTR v78; // r9
  unsigned __int64 v79; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v81; // eax
  int v82; // eax
  unsigned __int32 v83; // eax
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  _DWORD *v93; // r9
  int v94; // eax
  unsigned __int64 v95; // r15
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  _DWORD *v98; // r9
  int v99; // eax
  __int64 v100; // rax
  int v101; // eax
  int v102; // eax
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  _DWORD *v105; // r9
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 **v109; // rcx
  __int64 *v110; // rax
  __int64 *v111; // rdx
  __int64 v112; // rax
  __int64 **v113; // rcx
  char v114; // al
  unsigned __int8 v115; // cl
  _DWORD *v116; // r9
  __int64 v117; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // r9
  volatile signed __int32 *v122; // r10
  volatile signed __int32 *v123; // rcx
  char v124; // al
  __int64 *v125; // rax
  char v126; // al
  int v127; // r9d
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r9
  int v130; // eax
  _DWORD *v131; // r8
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int32 *v133; // [rsp+48h] [rbp-71h]
  __int64 v134; // [rsp+50h] [rbp-69h] BYREF
  __int64 v135; // [rsp+58h] [rbp-61h]
  struct _KPRCB *v136; // [rsp+60h] [rbp-59h]
  int v137; // [rsp+68h] [rbp-51h]
  int v138; // [rsp+6Ch] [rbp-4Dh]
  int v139; // [rsp+70h] [rbp-49h]
  __int64 v140; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v141; // [rsp+80h] [rbp-39h]
  volatile signed __int32 *v142; // [rsp+88h] [rbp-31h]
  struct _KPRCB *v143; // [rsp+90h] [rbp-29h]
  __int64 v144; // [rsp+98h] [rbp-21h]
  __int64 *v145; // [rsp+A0h] [rbp-19h]
  __int64 *v146; // [rsp+A8h] [rbp-11h]
  volatile signed __int32 *v147; // [rsp+B0h] [rbp-9h]
  __int64 v148; // [rsp+B8h] [rbp-1h]
  __int64 v149; // [rsp+C0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v152; // [rsp+120h] [rbp+67h]
  unsigned int v153; // [rsp+120h] [rbp+67h]
  int v154; // [rsp+120h] [rbp+67h]
  int v155; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v7 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        KeSetEvent(v8, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 544));
    }
    return;
  }
  v9 = *((_QWORD *)P + 22);
  v10 = 0LL;
  v135 = *(_QWORD *)(v9 + 528);
  v152 = v9;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v10 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C980, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v155 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v81 = v14[6];
          v14[6] = v81 + 1;
          if ( v81 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C980, 0x1Fu) )
      {
        v70 = CurrentPrcb->SchedulerAssist;
        if ( v70 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v82 = v70[6] - 1;
            v70[6] = v82;
            if ( !v82 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v155 = ExpWaitForSpinLockExclusiveAndAcquire(
                 (unsigned __int64)&dword_140C4C980,
                 CurrentIrql,
                 v10,
                 SchedulerAssist);
        v10 = 0LL;
      }
      v15 = (unsigned int)dword_140C4C980;
      if ( (dword_140C4C980 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v83 = _InterlockedCompareExchange(&dword_140C4C980, v15 | 0x40000000, v15);
            v26 = (_DWORD)v15 == v83;
            v15 = v83;
            if ( !v26 )
              continue;
          }
          KeYieldProcessorEx(&v155, v15, v10, (__int64)SchedulerAssist);
          v15 = (unsigned int)dword_140C4C980;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C980, retaddr);
    else
      dword_140C4C980 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v84 = v18[6] - 1;
        v18[6] = v84;
        if ( !v84 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v85 = KeGetCurrentIrql();
        if ( v85 <= 0xFu && CurrentIrql <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v88 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v88 & v87[5]) == 0;
          v87[5] &= v88;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v86);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v135 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v152;
  }
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || (_DWORD)v4 == 1 )
    a2 = 1;
  v138 = 0;
  v19 = v9 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v21) = CurrentThread->AbEntrySummary;
  v137 = 0;
  if ( !(_BYTE)v21 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v23 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v19);
      goto LABEL_137;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v21) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v22 = v21;
  _BitScanForward((unsigned int *)&v21, (unsigned __int8)v21);
  v137 = v21;
  CurrentThread->AbEntrySummary = v22 & ~(1 << v21);
  v23 = (__int64)&CurrentThread->LockEntries[v21];
  if ( !v23 )
  {
LABEL_137:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( v19 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1537] + ((v19 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v23 + 40) = SessionId;
  *(_QWORD *)(v23 + 32) = v19 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v25);
  v27 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
    ExpAcquireFastMutexContended(v19, v23);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v19 + 48) = v27;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x2047BuLL, v4, 0LL, 0LL);
    if ( P[2] )
    {
      v64 = v135;
      v65 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v64 + 128), &LockHandle);
      v29 = v152;
      CcDeductDirtyPages(v152, v65);
      v66 = 0;
      if ( *(_DWORD *)(v64 + 496) > v65 )
        v66 = *(_DWORD *)(v64 + 496) - v65;
      *(_DWORD *)(v64 + 496) = v66;
      if ( !*(_DWORD *)(v152 + 112) && *(_DWORD *)(v152 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v152);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v89 = KeGetCurrentIrql();
          if ( v89 <= 0xFu && LockHandle.OldIrql <= 0xFu && v89 >= 2u )
          {
            v90 = KeGetCurrentPrcb();
            v91 = v90->SchedulerAssist;
            v92 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v92 & v91[5]) == 0;
            v91[5] &= v92;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v90);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v29 = v152;
    }
    v30 = *((_DWORD *)P + 16);
  }
  else
  {
    v28 = *((_DWORD *)P + 16);
    if ( !v28 )
      KeBugCheckEx(0x34u, 0x444uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v29 = v152;
    v30 = v28 - 1;
    *((_DWORD *)P + 16) = v30;
  }
  if ( v30 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
  }
  else
  {
    if ( P[2] )
    {
      if ( *((_QWORD *)P + 23) )
      {
        v31 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
        {
          v63 = *(struct _KEVENT **)(v31 + 184);
          if ( v63 )
            KeSetEvent(v63, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v31 + 544));
        }
        *((_QWORD *)P + 23) = 0LL;
        *((_QWORD *)P + 7) = 0LL;
      }
      if ( a2 )
        goto LABEL_82;
      v32 = *((_WORD *)P + 49);
      v33 = P + 72;
      if ( (v32 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v33, 0LL, 0LL);
      v34 = v32 & 1;
      if ( v34 )
      {
        v71 = KeGetCurrentIrql();
        v72 = KeGetCurrentThread();
        if ( v71 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v71, 2uLL, 0LL);
        if ( !v71 && (v72->MiscFlags & 0x400) == 0 && !v72->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v34 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v33);
      }
      else
      {
        v35 = (ULONG_PTR)KeGetCurrentThread();
        v132.LockQueue.Lock = (unsigned __int64 *volatile)(v33 + 96);
        v132.LockQueue.Next = 0LL;
        *(_QWORD *)&v132.OldIrql = 0LL;
        v36 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 <= 0xFu )
        {
          v93 = KeGetCurrentPrcb()->SchedulerAssist;
          v93[5] |= (-1 << (v36 + 1)) & 4;
        }
        v132.OldIrql = v36;
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        if ( v38 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v94 = v38[6];
            v38[6] = v94 + 1;
            if ( v94 == -1 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v132, v33 + 96);
        }
        else
        {
          v39 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v33 + 12, (__int64)&v132);
          if ( v39 )
            KxWaitForLockOwnerShip((__int64)&v132, v39);
        }
        v40 = KeGetCurrentThread();
        v41 = *((_WORD *)v33 + 13);
        if ( ((v41 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v35 & 3) != 3 && (struct _KTHREAD *)v35 != v40 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v33, (ULONG_PTR)v40, v35, 0LL);
        if ( (v41 & 0x80u) == 0 )
        {
          v134 = 0LL;
          v42 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v35 & 3) != 0 )
            v43 = 0;
          else
            v43 = *(unsigned __int8 *)(v35 + 1032);
          v44 = *((_QWORD *)v33 + 6);
          v45 = v33 + 48;
          if ( v44 != v35 )
          {
            v75 = 0LL;
            v76 = 0LL;
            if ( v44 )
              v75 = 1LL;
            else
              v76 = v33 + 48;
            if ( !v43
              || (v77 = *((_QWORD *)v33 + 2)) == 0
              || v43 >= *(_DWORD *)(v77 + 8)
              || (v45 = (char *)(v77 + 16LL * v43), *(_QWORD *)v45 != v35) )
            {
              v78 = *((_QWORD *)v33 + 2);
              v79 = *((unsigned int *)v33 + 16) + (unsigned __int64)*((unsigned int *)v33 + 18);
              if ( !v78 || (v45 = (char *)(v78 + 16), v75 >= v79) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v33, v35, v78, 2uLL);
              while ( *(_QWORD *)v45 != v35 )
              {
                if ( *(_QWORD *)v45 )
                {
                  if ( ++v75 == v79 )
                    goto LABEL_197;
                }
                else if ( !v76 )
                {
                  v76 = v45;
                }
                v45 += 16;
                if ( v45 == (char *)(v78 + 16LL * *(unsigned int *)(v78 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)&v45[-v78] >> 4;
            }
          }
          v46 = *((_DWORD *)v45 + 2) & 7 | (8 * (*((_DWORD *)v45 + 2) >> 3) - 8);
          *((_DWORD *)v45 + 2) = v46;
          if ( v46 >= 8 )
          {
            v154 = *((_DWORD *)v33 + 17);
            v59 = 65618;
            v60 = v46 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
            v95 = v132.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v96 = KeGetCurrentIrql();
                if ( v96 <= 0xFu && v132.OldIrql <= 0xFu && v96 >= 2u )
                {
                  v97 = KeGetCurrentPrcb();
                  v98 = v97->SchedulerAssist;
                  v99 = ~(unsigned __int16)(-1LL << (v132.OldIrql + 1));
                  v26 = (v99 & v98[5]) == 0;
                  v98[5] &= v99;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(v97);
                }
              }
            }
            __writecr8(v95);
            LODWORD(v47) = v154;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v45);
          v47 = *((unsigned int *)v33 + 17);
          v48 = 0LL;
          v49 = *((_DWORD *)v33 + 16) <= 1u;
          v50 = 0LL;
          v140 = 0LL;
          v153 = v47;
          if ( !v49 )
            goto LABEL_63;
          if ( *((_DWORD *)v33 + 19) )
          {
            KeCaptureWaitChainHeadEx(v33 + 40, &v134, &v140);
            --*((_DWORD *)v33 + 19);
            *((_WORD *)v33 + 13) |= 0x80u;
            v51 = 1;
            v50 = v140;
            v48 = 0LL;
            v47 = v153;
          }
          else
          {
            if ( !*((_DWORD *)v33 + 18) )
            {
LABEL_63:
              v51 = 0;
              goto LABEL_64;
            }
            v100 = *((_QWORD *)v33 + 4);
            *((_QWORD *)v33 + 4) = 0LL;
            v134 = v100;
            v51 = *((_DWORD *)v33 + 18);
            *((_DWORD *)v33 + 18) = 0;
          }
LABEL_64:
          v52 = v51 - 1;
          v26 = v52 + *((_DWORD *)v33 + 16) == 0;
          *((_DWORD *)v33 + 16) += v52;
          if ( v26 )
            *((_WORD *)v33 + 12) = 0;
          if ( !*((_DWORD *)v33 + 19) && !*((_DWORD *)v33 + 18) )
            *((_WORD *)v33 + 13) &= 0xF9u;
          v139 = (unsigned __int8)v33[27];
          if ( v50 )
          {
            v101 = *((_DWORD *)v33 + 14) & 7;
            *((_QWORD *)v33 + 6) = v50;
            *((_DWORD *)v33 + 14) = v101 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(&v132);
            Next = v132.LockQueue.Next;
            if ( !v132.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v132.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&v132) == &v132 )
              {
LABEL_74:
                v54 = KeGetCurrentPrcb();
                v55 = (__int64)v54->SchedulerAssist;
                if ( v55 )
                {
                  if ( v54->NestingLevel <= 1u )
                  {
                    v102 = *(_DWORD *)(v55 + 24) - 1;
                    *(_DWORD *)(v55 + 24) = v102;
                    if ( !v102 )
                    {
                      KiRemoveSystemWorkPriorityKick(v54);
                      v47 = v153;
                      v48 = 0LL;
                    }
                  }
                }
                v56 = v132.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v103 = KeGetCurrentIrql();
                    if ( v103 <= 0xFu && v132.OldIrql <= 0xFu && v103 >= 2u )
                    {
                      v104 = KeGetCurrentPrcb();
                      v105 = v104->SchedulerAssist;
                      v55 = -1LL << (v132.OldIrql + 1);
                      v106 = ~(unsigned __int16)v55;
                      v26 = (v106 & v105[5]) == 0;
                      v105[5] &= v106;
                      if ( v26 )
                        KiRemoveSystemWorkPriorityKick(v104);
                      v47 = v153;
                      v48 = 0LL;
                    }
                  }
                }
                __writecr8(v56);
                v57 = 1;
                if ( v140 )
                  v57 = 3;
                v58 = 1;
                if ( !v134 )
                  goto LABEL_79;
                v107 = KeGetCurrentIrql();
                v149 = v107;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v107 <= 0xFu )
                {
                  v48 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
                  v55 = (-1LL << ((unsigned __int8)v107 + 1)) & 4;
                  v47 = (unsigned int)v55 | *(_DWORD *)(v48 + 20);
                  *(_DWORD *)(v48 + 20) = v47;
                }
                v108 = v134;
                v136 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v135 = v108;
                  v148 = *(_QWORD *)v108;
                  v147 = (volatile signed __int32 *)(v108 + 24);
                  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v108 + 24), v55, v47, v48);
                  v47 = v135;
                  v109 = (__int64 **)(v135 + 32);
                  v146 = (__int64 *)(v135 + 32);
                  *(_DWORD *)(v135 + 28) = 1;
                  v110 = *v109;
                  if ( *v109 != (__int64 *)v109 )
                    break;
LABEL_254:
                  _InterlockedAnd(v147, 0xFFFFFF7F);
                  v108 = v148;
                  if ( v148 == v134 )
                  {
                    v126 = KiRemoveBoostThread((__int64)v136, (__int64)v136->CurrentThread);
                    v127 = v139;
                    if ( v139 )
                    {
                      v58 = 2;
                      if ( v126 > (char)v139 )
                        v127 = v126;
                    }
                    if ( (v57 & 2) != 0 && v58 == 1 )
                      v127 = 1;
                    KiExitDispatcher((_DWORD)v136, 0, v58, v127, v149);
                    LODWORD(v47) = v153;
                    v134 = 0LL;
LABEL_79:
                    v59 = 65602;
                    v60 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v42 )
                      PerfLogExecutiveResourceRelease(v59, v33, v60, (unsigned int)v47);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v111 = v110;
                  v141 = v110;
                  v112 = *v110;
                  v145 = (__int64 *)v112;
                  v113 = (__int64 **)v111[1];
                  if ( *(__int64 **)(v112 + 8) != v111 || *v113 != v111 )
                    goto LABEL_268;
                  *v113 = (__int64 *)v112;
                  *(_QWORD *)(v112 + 8) = v113;
                  v114 = *((_BYTE *)v111 + 16);
                  if ( v114 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread(v136, v111, *((unsigned __int16 *)v111 + 9), 0LL) )
                    {
                      v26 = (*(_DWORD *)(v135 + 28))-- == 1;
                      if ( v26 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v114 == 2 )
                    {
                      *((_BYTE *)v111 + 17) = 5;
                      v133 = (volatile signed __int32 *)v111[3];
                      v142 = v133 + 2;
                      *v111 = 0LL;
                      v115 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v115 <= 0xFu )
                      {
                        v116 = KeGetCurrentPrcb()->SchedulerAssist;
                        v47 = (unsigned int)(-1LL << (v115 + 1)) & 4 | v116[5];
                        v111 = v141;
                        v116[5] = v47;
                      }
                      v143 = KeGetCurrentPrcb();
                      v117 = (__int64)v143->CurrentThread;
                      v144 = v117;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v117);
                        EtwTraceEnqueueWork(v120, v119, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v133, (__int64)v111, v47, v117);
                      v122 = v142;
                      v123 = v133;
                      if ( *(volatile signed __int32 **)v122 == v122
                        || *((_DWORD *)v133 + 10) >= *((_DWORD *)v133 + 11)
                        || *(volatile signed __int32 **)(v144 + 232) == v133 && *(_BYTE *)(v144 + 643) == 15 )
                      {
LABEL_246:
                        v48 = *((unsigned int *)v123 + 1);
                        v55 = (__int64)(v123 + 6);
                        *((_DWORD *)v123 + 1) = v48 + 1;
                        v47 = *((_QWORD *)v123 + 4);
                        if ( *(volatile signed __int32 **)v47 != v123 + 6 )
                          goto LABEL_268;
                        v125 = v141;
                        *v141 = v55;
                        v125[1] = v47;
                        *(_QWORD *)v47 = v125;
                        *((_QWORD *)v123 + 4) = v125;
                        if ( !(_DWORD)v48 && *(volatile signed __int32 **)v122 != v122 )
                        {
                          KiWakeOtherQueueWaiters((__int64)v143, (__int64)v123);
                          v123 = v133;
                        }
                      }
                      else
                      {
                        v124 = KiWakeQueueWaiter((__int64)v143, (__int64)v133, (__int64)v141, v121);
                        v123 = v133;
                        if ( !v124 )
                        {
                          v122 = v142;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd(v123, 0xFFFFFF7F);
                      v26 = (*(_DWORD *)(v135 + 28))-- == 1;
                      if ( v26 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread(v136, v111, 256LL, 0LL);
                  }
LABEL_253:
                  v110 = v145;
                  if ( v145 == v146 )
                    goto LABEL_254;
                }
              }
              Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v132);
              v47 = v153;
              v48 = 0LL;
            }
            v132.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v132, retaddr);
          v47 = v153;
          v48 = 0LL;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v33, v35);
      }
LABEL_82:
      v61 = *(unsigned __int8 *)(v19 + 48);
      *(_QWORD *)(v19 + 8) = 0LL;
      v62 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
      if ( v62 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v62);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v128 = KeGetCurrentIrql();
          if ( v128 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v128 >= 2u )
          {
            v129 = KeGetCurrentPrcb();
            v130 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
            v131 = v129->SchedulerAssist;
            v26 = (v130 & v131[5]) == 0;
            v131[5] &= v130;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v129);
          }
        }
      }
      __writecr8(v61);
      KeAbPostRelease(v19);
      return;
    }
    ExAcquirePushLockExclusiveEx(v29 + 104, 0LL);
    v68 = (char **)*((_QWORD *)P + 2);
    v69 = (PVOID *)*((_QWORD *)P + 3);
    if ( v68[1] != P + 16 || *v69 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v69 = v68;
    v68[1] = (char *)v69;
    if ( *(__int64 *)(v29 + 32) > 0x2000000 && (*(_DWORD *)(v29 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v29, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v29 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v73 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v74 = *(struct _KEVENT **)(v73 + 184);
        if ( v74 )
          KeSetEvent(v74, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v73 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
    CcDeallocateBcb(P);
  }
}
