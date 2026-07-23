/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140313100
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402213C4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140222330 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140222704 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeLockAcquire @ 0x1402230B8 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140229C08 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14022F1B0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14022F464 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14023E408 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x14024BCBC (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x140250200 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140311B00 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140312480 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockAcquire @ 0x1403130D4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140313FB8 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpFixedVsFree @ 0x140380450 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594E60 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
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
