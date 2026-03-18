/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140365AF4
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14020DB50 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402314B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140236A00 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14023D6AC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402491D0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpFixedVsFree @ 0x14025BC50 (RtlpHpFixedVsFree.c)
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140362714 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14036424C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403650F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140365834 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x140365AC8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140367E68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpHeapExtendContext @ 0x14036F04C (RtlpHpHeapExtendContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLargeLockAcquire @ 0x140371248 (RtlpHpLargeLockAcquire.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
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
