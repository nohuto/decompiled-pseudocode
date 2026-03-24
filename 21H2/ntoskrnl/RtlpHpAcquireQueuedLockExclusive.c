/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14021D000
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x14021BB90 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextFreeList @ 0x14033EA20 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14033EAC0 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14033EBF0 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14033EDC0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14033F190 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall RtlpHpAcquireQueuedLockExclusive(volatile LONG *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
  {
    a3[1] = a1;
    result = ExAcquireSpinLockExclusive(a1);
    a3[2] = (unsigned __int8)result;
  }
  else
  {
    *a3 = 0LL;
    a3[2] = 0LL;
    CurrentThread = KeGetCurrentThread();
    a3[1] = a1;
    --CurrentThread->SpecialApcDisable;
    return ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
  return result;
}
