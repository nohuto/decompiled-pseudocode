/*
 * XREFs of RtlpLogHeapFailure @ 0x14059379C
 * Callers:
 *     RtlpHpLargeFree @ 0x140222928 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140223488 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x140223680 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1402236E4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x140223770 (RtlAllocateHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140311B00 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14031419C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140315890 (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeInternal @ 0x140349810 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x14034CF50 (RtlpHpSegFree.c)
 *     RtlpHpFixedVsFree @ 0x140380450 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140586830 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14058A1D4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14058B330 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14058B920 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x14058B9E8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x14058BA78 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14058BC88 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14059423C (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140915A90 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140915F64 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x140593B5C (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C11920 != a2 )
  {
    qword_140C11938 = a5;
    qword_140C11940 = a6;
    dword_140C11918 = a1;
    qword_140C11920 = a2;
    qword_140C11928 = a3;
    qword_140C11930 = a4;
    RtlpHpHeapHandleError();
  }
}
