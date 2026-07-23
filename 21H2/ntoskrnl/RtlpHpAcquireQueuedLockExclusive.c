/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C0490 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsContextFreeList @ 0x140349770 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x140349810 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x140349940 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
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
