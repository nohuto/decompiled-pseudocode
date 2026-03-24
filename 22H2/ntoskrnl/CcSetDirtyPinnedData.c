/*
 * XREFs of CcSetDirtyPinnedData @ 0x140279990
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14027476C (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x140359C58 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140678510 (CcPreparePinWrite.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140277468 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPages @ 0x1402B68A0 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  __int16 v5; // ax
  __int64 *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR *v16; // rsi
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r14
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v23; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v25; // rcx
  __int64 v26; // rsi
  int SessionId; // eax
  __int64 v28; // rcx
  bool v29; // zf
  unsigned __int8 v30; // bl
  int v31; // eax
  __int64 v32; // rbx
  LONGLONG v33; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  signed __int32 v38; // eax
  unsigned int v39; // esi
  unsigned __int64 OldIrql; // r15
  unsigned int v41; // esi
  unsigned __int64 DeepFreezeStartTime; // rdx
  _DWORD *v43; // rcx
  __int64 AbOrphanedEntrySummary; // rax
  int v45; // eax
  int v46; // eax
  unsigned __int32 v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  __int64 v61; // [rsp+30h] [rbp-68h]
  _QWORD v62[2]; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v65; // [rsp+A0h] [rbp+8h] BYREF
  int v66; // [rsp+B0h] [rbp+18h]
  int v67; // [rsp+B8h] [rbp+20h]

  v5 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 != 765 && v5 != 762 )
    KeBugCheckEx(0x34u, 0xE7AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = v62;
  v8 = BcbVoid;
  v62[0] = BcbVoid;
  v62[1] = 0LL;
  if ( v5 == 762 )
  {
    v8 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v7 = (__int64 *)((char *)BcbVoid + 16);
  }
  v9 = v8[22];
  v10 = *(_QWORD *)(v9 + 528);
  v61 = v10;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v2;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C980, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v65 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v45 = v14[6];
          v14[6] = v45 + 1;
          if ( v45 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C980, 0x1Fu) )
      {
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v46 = v43[6] - 1;
            v43[6] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v65 = ExpWaitForSpinLockExclusiveAndAcquire(
                (unsigned __int64)&dword_140C4C980,
                CurrentIrql,
                v2,
                SchedulerAssist);
      }
      v15 = (unsigned int)dword_140C4C980;
      if ( (dword_140C4C980 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v47 = _InterlockedCompareExchange(&dword_140C4C980, v15 | 0x40000000, v15);
            v29 = (_DWORD)v15 == v47;
            v15 = v47;
            if ( !v29 )
              continue;
          }
          KeYieldProcessorEx(&v65, v15, v2, (__int64)SchedulerAssist);
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
        v48 = v18[6] - 1;
        v18[6] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
    __writecr8(CurrentIrql);
    v10 = v61;
    if ( v61 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v19 = *(_DWORD *)(v9 + 152);
  if ( (v19 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v9 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v19 = *(_DWORD *)(v9 + 152);
  }
  if ( (v19 & 0x200) != 0 )
  {
    v20 = *v7;
    if ( *v7 )
    {
      while ( 1 )
      {
        v62[0] = v20;
        ++v7;
        if ( (v20 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xEDAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v21 = *(_QWORD *)(v20 + 176);
        v67 = 0;
        CurrentThread = KeGetCurrentThread();
        v23 = (volatile signed __int32 *)(v21 + 280);
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v21 + 280, KeGetCurrentIrql(), 0LL);
        AbEntrySummary = CurrentThread->AbEntrySummary;
        v66 = 0;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v26 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v21 + 280);
LABEL_72:
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_30;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
        }
        _BitScanForward((unsigned int *)&v25, AbEntrySummary);
        v66 = v25;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v25);
        v26 = (__int64)&CurrentThread->LockEntries[v25];
        if ( !v26 )
          goto LABEL_72;
        if ( (unsigned __int64)v23 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v23 >> 39) & 0x1FF)) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v26 + 40) = SessionId;
        *(_QWORD *)(v26 + 32) = (unsigned __int64)v23 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_30:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v29 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v29
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v28);
        }
        v30 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v23, 0) )
          ExpAcquireFastMutexContended(v21 + 280, v26);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        *(_QWORD *)(v21 + 288) = KeGetCurrentThread();
        v31 = v30;
        v32 = v62[0];
        *(_DWORD *)(v21 + 328) = v31;
        if ( !*(_BYTE *)(v32 + 2) )
        {
          v39 = *(_DWORD *)(v32 + 4) >> 12;
          *(_BYTE *)(v32 + 2) = 1;
          if ( Lsn )
          {
            *(LARGE_INTEGER *)(v32 + 40) = *Lsn;
            *(LARGE_INTEGER *)(v32 + 48) = *Lsn;
          }
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
          if ( !*(_DWORD *)(v21 + 112) && (*(_DWORD *)(v21 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v10, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v21);
          }
          CcChargeDirtyPages(v21, 0LL, 0LL, v39);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v53 = KeGetCurrentIrql();
              if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
              {
                v54 = KeGetCurrentPrcb();
                v55 = v54->SchedulerAssist;
                v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v29 = (v56 & v55[5]) == 0;
                v55[5] &= v56;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(v54);
                v32 = v62[0];
              }
            }
          }
          __writecr8(OldIrql);
          if ( (*(_DWORD *)(v21 + 152) & 0x10000000) != 0 )
          {
            v41 = v39 << 12;
            DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              if ( v41 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v41);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
              v32 = v62[0];
            }
            else
            {
              v32 = v62[0];
            }
          }
        }
        if ( Lsn )
        {
          v33 = *(_QWORD *)(v32 + 40);
          QuadPart = Lsn->QuadPart;
          if ( !v33 || QuadPart < v33 )
          {
            *(_QWORD *)(v32 + 40) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          v35 = *(_QWORD *)(v32 + 48);
          if ( !v35 || QuadPart > v35 )
          {
            *(_QWORD *)(v32 + 48) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          if ( QuadPart > *(_QWORD *)(v21 + 256) )
            *(_QWORD *)(v21 + 256) = QuadPart;
        }
        v36 = *(_QWORD *)(v32 + 32);
        if ( v36 > *(_QWORD *)(v21 + 48) )
          *(_QWORD *)(v21 + 48) = v36;
        v37 = *(unsigned __int8 *)(v21 + 328);
        *(_QWORD *)(v21 + 288) = 0LL;
        v38 = _InterlockedCompareExchange(v23, 1, 0);
        if ( v38 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)(v21 + 280), v38);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v57 = KeGetCurrentIrql();
            if ( v57 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v57 >= 2u )
            {
              v58 = KeGetCurrentPrcb();
              v59 = v58->SchedulerAssist;
              v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
              v29 = (v60 & v59[5]) == 0;
              v59[5] &= v60;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(v58);
            }
          }
        }
        __writecr8(v37);
        KeAbPostRelease(v21 + 280);
        v20 = *v7;
        if ( !*v7 )
          return;
        v10 = v61;
      }
    }
  }
  else
  {
    CcSetDirtyInMask(v9, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
