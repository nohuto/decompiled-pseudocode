/*
 * XREFs of RtlpLogHeapFailure @ 0x1405B4B5C
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A090 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpAllocateHeap @ 0x14024D400 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsContextFreeList @ 0x14024EDD0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpSegMgrCommit @ 0x14024F060 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14024FA60 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD2B0 (ExAllocateHeapPool.c)
 *     RtlpHpSegFree @ 0x140314F7C (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315AE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x140323450 (RtlpHpVsContextFree.c)
 *     RtlpHpLargeFree @ 0x140323C8C (RtlpHpLargeFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1403244D8 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlFreeHeap @ 0x14034C400 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14034C464 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14034C4E0 (RtlAllocateHeap.c)
 *     RtlSizeHeap @ 0x1405A9DD0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405AB2D8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405ABC68 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405AC058 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AC78C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AC8CC (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AD0DC (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405AD338 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405AD98C (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405ADC3C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405ADF84 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1405AE04C (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405AE0DC (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405AE2FC (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B4D88 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405B57D4 (RtlpHeapListCompare.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1405B5ED4 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlZeroHeap @ 0x1409BDF10 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1409BE410 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405B5104 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0C280 != a2 )
  {
    qword_140C0C298 = a5;
    qword_140C0C2A0 = a6;
    dword_140C0C278 = a1;
    qword_140C0C280 = a2;
    qword_140C0C288 = a3;
    qword_140C0C290 = a4;
    RtlpHpHeapHandleError();
  }
}
