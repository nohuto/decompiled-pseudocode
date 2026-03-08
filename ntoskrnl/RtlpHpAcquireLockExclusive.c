/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14030ABA4
 * Callers:
 *     RtlpHpFixedVsFree @ 0x140201840 (RtlpHpFixedVsFree.c)
 *     RtlpHpFixedVsAllocate @ 0x14029A450 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x1402B73D4 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402D2C60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402DF844 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x1402F8FAC (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140308718 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140309340 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140309A44 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140309BA0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14030A210 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14030A880 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x14030AB78 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14030ABDC (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14030C1E4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140375AC8 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B3B00 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B3EC0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B4520 (RtlpHpVaMgrCtxAllocatorDereference.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
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
