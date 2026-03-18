/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140316AE4
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140210A8C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14024FCE4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402ADC90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14030FCEC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140314AF8 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140315500 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14031597C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315AE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140316150 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403167C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x140316AB8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpFixedVsAllocate @ 0x1403175B0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x140324520 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033BA60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140349CE8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140355BA8 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpHeapExtendContext @ 0x14036404C (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140397ED4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B5FB0 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B6370 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B69D0 (RtlpHpVaMgrCtxAllocatorDereference.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
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
