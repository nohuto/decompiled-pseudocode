/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14036E550
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14034BBF0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14036E0E4 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14036E174 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14036E388 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(int *a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rax

  v4 = a3;
  if ( a2 )
  {
    *(_QWORD *)(a3 + 8) = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(a1, CurrentIrql, a3, (__int64)SchedulerAssist);
    *(_QWORD *)(v4 + 16) = CurrentIrql;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a3 + 8) = a1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
}
