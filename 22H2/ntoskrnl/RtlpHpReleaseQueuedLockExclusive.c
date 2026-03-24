/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1402BC110
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x14021BB50 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeList @ 0x1402BF0B0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x1402BF150 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x1402BF280 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402BF450 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAllocate @ 0x1402FED24 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x140303964 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 )
  {
    v15 = *(unsigned __int8 *)(a2 + 16);
    ExReleaseSpinLockExclusiveFromDpcLevel(*(PEX_SPIN_LOCK *)(a2 + 8));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v15 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)result;
          v9 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    LODWORD(v7) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v8 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    v9 = !_BitScanReverse((unsigned int *)&v10, v7);
    if ( v9 )
      goto LABEL_25;
    while ( 1 )
    {
      v11 = (__int64)&CurrentThread->LockEntries[v10];
      v7 = ~(1 << v10) & (unsigned int)v7;
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v8
        && *(_DWORD *)(v11 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v7);
      if ( v9 )
        goto LABEL_25;
    }
    if ( !v11 )
    {
LABEL_25:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v11 + 32) |= 2u;
      if ( *(__int64 *)(v11 + 32) < 0 )
        KiAbEntryRemoveFromTree(v11, v7, v8);
      *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v11 + 25) &= ~1u;
      *(_QWORD *)(v11 + 32) = 0LL;
      v12 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v6 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v12;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
