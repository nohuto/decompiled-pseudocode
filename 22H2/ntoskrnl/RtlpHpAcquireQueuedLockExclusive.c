/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14021CFC0
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x14021BB50 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextFreeList @ 0x1402BF0B0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x1402BF150 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x1402BF280 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402BF450 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
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
