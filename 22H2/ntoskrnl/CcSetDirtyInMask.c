/*
 * XREFs of CcSetDirtyInMask @ 0x1402B6B00
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14026F814 (CcPurgeAndClearCacheSection.c)
 *     CcReleaseByteRangeFromWrite @ 0x14027476C (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x140279990 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     CcPrepareMdlWrite @ 0x1403259D0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140329A88 (CcMdlWriteComplete2.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140277468 (CcInsertIntoDirtySharedCacheMapList.c)
 *     MmGetControlAreaPartition @ 0x1402B31A0 (MmGetControlAreaPartition.c)
 *     CcChargeDirtyPages @ 0x1402B68A0 (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x1402B7278 (CcFindBitmapRangeToDirty.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     CcAllocateInitializeMbcb @ 0x140317B34 (CcAllocateInitializeMbcb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, __int64 a3, struct _KTHREAD *a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r14
  signed __int64 v9; // r15
  __int64 v10; // rbx
  int i; // esi
  volatile signed __int32 *v12; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rcx
  char v15; // dl
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int8 v20; // bl
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r9
  volatile __int64 *v25; // rbx
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _QWORD *v29; // rdx
  _DWORD *v30; // rdx
  int v31; // ebx
  unsigned int v32; // edi
  __int64 v33; // rcx
  _DWORD *v34; // r8
  int v35; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  ULONG_PTR v41; // rdi
  unsigned __int64 v42; // rbx
  signed __int32 v43; // eax
  struct _KTHREAD *v44; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  PSLIST_ENTRY v46; // rbx
  _SLIST_ENTRY *v47; // rax
  __int64 **v48; // rdx
  __int64 *v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rcx
  __int64 **v52; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *v54; // r9
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  int v61; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v66; // eax
  unsigned __int64 v67; // rbx
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  int v72; // eax
  _DWORD *v73; // r8
  unsigned int v74; // [rsp+30h] [rbp-29h]
  __int64 v75; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v77; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v82; // [rsp+D0h] [rbp+77h]
  struct _KTHREAD *v83; // [rsp+D8h] [rbp+7Fh]

  v83 = a4;
  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v82 = 0;
  v77 = (unsigned int)a3;
  v6 = v4 + (unsigned int)a3;
  v74 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = v4 ^ (v6 - 1);
  if ( (result & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC53uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 && v6 <= *(_QWORD *)(v5 + 48) )
    return result;
  v8 = v4 >> 12;
  v9 = (v6 - 1) >> 12;
  if ( *(_QWORD *)(v5 + 32) / 4096LL <= v9 )
    KeBugCheckEx(0x34u, 0xC73uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD *)(v5 + 528);
  v75 = v10;
  if ( *(_QWORD *)(v5 + 168)
    && v10 != *(_QWORD *)(MmGetControlAreaPartition(
                            *(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28),
                            (*(__int64 *)(v5 + 32) >> 63) & 0xFFF,
                            a3,
                            a4)
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
LABEL_58:
    v40 = *a2 + v77;
    if ( v40 > *(_QWORD *)(v5 + 48) )
    {
      v19 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v40;
      if ( !v19 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v61 = *(_DWORD *)(v5 + 152);
        if ( (v61 & 0x400) == 0 )
          *(_DWORD *)(v5 + 152) = v61 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(v5);
        CcScheduleLazyWriteScan(v10, 0, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v19 = (v66 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v66;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
    }
    goto LABEL_60;
  }
  while ( 2 )
  {
    for ( i = v82; ; i = 0 )
    {
      if ( *(_QWORD *)(v5 + 32) > 0x300000uLL )
      {
        ++unk_140CDB7D4;
        result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !result )
        {
          ++unk_140CDB7D8;
          result = unk_140CDB7F0(unk_140CDB7E4, unk_140CDB7EC, unk_140CDB7E8);
          if ( !result )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_133;
          }
        }
        ListEntry = (PSLIST_ENTRY)result;
      }
      v12 = (volatile signed __int32 *)(v5 + 280);
      CurrentThread = KeGetCurrentThread();
      v82 = 1;
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5 + 280, KeGetCurrentIrql(), 0LL);
      LOBYTE(v14) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v14 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v16 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 280);
LABEL_102:
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_17;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v14) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v15 = v14;
      _BitScanForward((unsigned int *)&v14, (unsigned __int8)v14);
      CurrentThread->AbEntrySummary = v15 & ~(1 << v14);
      v16 = (__int64)&CurrentThread->LockEntries[v14];
      if ( !v16 )
        goto LABEL_102;
      v17 = (unsigned int)MiGetSystemRegionType(v5 + 280) == 1 ? MmGetSessionIdEx(CurrentThread->ApcState.Process) : -1;
      *(_DWORD *)(v16 + 40) = v17;
      *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v18);
      }
      v20 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280, v16);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v20;
      v21 = *(_QWORD *)(v5 + 160);
      if ( !v21 )
      {
        result = CcAllocateInitializeMbcb();
        v21 = result;
        if ( !result )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = result;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v21 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v21 == 761 )
        break;
      v46 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v21 + 80) )
      {
        v47 = *(_SLIST_ENTRY **)(v21 + 88);
        *v46 = *v47;
        v46[1] = v47[1];
        v46[2] = v47[2];
        v46[3] = v47[3];
        v46[4] = v47[4];
        v46[5] = v47[5];
        memset(*(void **)(v21 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v21 + 88) = v46;
      v48 = *(__int64 ***)(v21 + 24);
      v49 = (__int64 *)(v21 + 96);
      ListEntry = 0LL;
      v50 = v21 + 16;
      if ( *v48 != (__int64 *)(v21 + 16) )
        goto LABEL_93;
      *v49 = v50;
      *(_QWORD *)(v21 + 104) = v48;
      *v48 = v49;
      *(_QWORD *)(v21 + 24) = v49;
      v51 = (__int64 *)(v21 + 144);
      *(_QWORD *)(v21 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 120) = -1;
      v52 = *(__int64 ***)(v21 + 24);
      if ( *v52 != (__int64 *)v50 )
LABEL_93:
        __fastfail(3u);
      *v51 = v50;
      *(_QWORD *)(v21 + 152) = v52;
      *v52 = v51;
      *(_QWORD *)(v21 + 24) = v51;
      *(_QWORD *)(v21 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 168) = -1;
      *(_WORD *)v21 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    result = CcFindBitmapRangeToDirty(v21, v8, &ListEntry);
    v22 = result;
    if ( result )
    {
      v23 = *(_QWORD *)(result + 16);
      if ( v8 < v23 + *(unsigned int *)(result + 24) )
        *(_DWORD *)(result + 24) = v8 - v23;
      if ( v9 > v23 + *(unsigned int *)(result + 28) )
        *(_DWORD *)(result + 28) = v9 - v23;
      v24 = v75;
      LockHandle.LockQueue.Next = 0LL;
      v25 = (volatile __int64 *)(v75 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v75 + 128);
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
      {
        v54 = KeGetCurrentPrcb()->SchedulerAssist;
        v54[5] |= (-1 << (v26 + 1)) & 4;
        v24 = v75;
      }
      LockHandle.OldIrql = v26;
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v55 = v28[6];
          v28[6] = v55 + 1;
          if ( v55 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v27);
            v24 = v75;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v25);
      }
      else
      {
        v29 = (_QWORD *)_InterlockedExchange64(v25, (__int64)&LockHandle);
        if ( !v29 )
        {
LABEL_38:
          if ( !*(_DWORD *)(v5 + 112) && (*(_DWORD *)(v5 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v24, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v5);
            *(_QWORD *)(v21 + 32) = v8;
          }
          v30 = (_DWORD *)(*(_QWORD *)(v22 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v22 + 16)) >> 5));
          v31 = 1 << (v8 & 0x1F);
          if ( v8 <= v9 )
          {
            v32 = v74;
            v33 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              v34 = v30;
              if ( (*v30 & v31) == 0 )
              {
                *v30 |= v31;
                ++v32;
              }
              v35 = 2 * v31;
              v31 = 1;
              if ( v35 )
                v31 = v35;
              ++v30;
              if ( v35 )
                v30 = v34;
              --v33;
            }
            while ( v33 );
            v74 = v32;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v21, v22, (_DWORD *)v74);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_52;
          }
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
            {
LABEL_52:
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              if ( v38 )
              {
                if ( v37->NestingLevel <= 1u )
                {
                  v56 = v38[6] - 1;
                  v38[6] = v56;
                  if ( !v56 )
                    KiRemoveSystemWorkPriorityKick(v37);
                }
              }
              v39 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v57 = KeGetCurrentIrql();
                  if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
                  {
                    v58 = KeGetCurrentPrcb();
                    v59 = v58->SchedulerAssist;
                    v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v19 = (v60 & v59[5]) == 0;
                    v59[5] &= v60;
                    if ( v19 )
                      KiRemoveSystemWorkPriorityKick(v58);
                  }
                }
              }
              __writecr8(v39);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v74 )
              {
                v44 = v83;
                if ( !v83 )
                {
                  v44 = KeGetCurrentThread();
                  v83 = v44;
                }
                DeepFreezeStartTime = v44->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v74 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v74 << 12);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
                }
              }
              if ( v31 )
              {
                *(_QWORD *)(v21 + 40) = v9;
LABEL_57:
                v10 = v75;
                goto LABEL_58;
              }
              continue;
            }
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
          goto LABEL_52;
        }
        KxWaitForLockOwnerShip((__int64)&LockHandle, v29);
      }
      v24 = v75;
      goto LABEL_38;
    }
    break;
  }
LABEL_132:
  i = 1;
LABEL_133:
  if ( (*(_DWORD *)(v5 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v75 + 128), &LockHandle);
    *(_DWORD *)(v5 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    v67 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = ((unsigned int)result & v69[5]) == 0;
          v69[5] &= result;
          if ( v19 )
            result = KiRemoveSystemWorkPriorityKick(v68);
        }
      }
    }
    __writecr8(v67);
  }
  if ( i )
  {
LABEL_60:
    v41 = v5 + 280;
    v42 = *(unsigned __int8 *)(v41 + 48);
    *(_QWORD *)(v41 + 8) = 0LL;
    v43 = _InterlockedCompareExchange((volatile signed __int32 *)v41, 1, 0);
    if ( v43 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v41, v43);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v70 = KeGetCurrentIrql();
        if ( v70 <= 0xFu && (unsigned __int8)v42 <= 0xFu && v70 >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
          v73 = v71->SchedulerAssist;
          v19 = (v72 & v73[5]) == 0;
          v73[5] &= v72;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
    }
    __writecr8(v42);
    result = KeAbPostRelease(v41);
  }
  if ( ListEntry )
  {
    ++unk_140CDB7DC;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= unk_140CDB7D0 )
    {
      ++unk_140CDB7E0;
      return unk_140CDB7F8();
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return result;
}
