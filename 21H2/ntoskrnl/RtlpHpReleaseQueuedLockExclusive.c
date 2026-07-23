/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140223844 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x140229B34 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C0490 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeList @ 0x140349770 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x140349810 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x140349940 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v6; // r12
  unsigned int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 )
  {
    v13 = *(unsigned __int8 *)(a2 + 16);
    ExReleaseSpinLockExclusiveFromDpcLevel(*(PEX_SPIN_LOCK *)(a2 + 8));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v13 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)result;
          v8 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v8 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_25;
    while ( 1 )
    {
      v10 = (__int64)&CurrentThread->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        goto LABEL_25;
    }
    if ( !v10 )
    {
LABEL_25:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v10 + 32) |= 2u;
      if ( *(__int64 *)(v10 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
      *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v10 + 25) &= ~1u;
      *(_QWORD *)(v10 + 32) = 0LL;
      v11 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v6 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v11;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
