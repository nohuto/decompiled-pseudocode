/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140288A30
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockAcquire @ 0x140288A04 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402898E8 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402FBDA0 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402FC8A0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402FD80C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FDBE0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeLockAcquire @ 0x1402FE594 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140303A38 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403085A0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140308854 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x140326BBC (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x14032B0B0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1403800B0 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594B70 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockExclusive(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  return -1;
}
