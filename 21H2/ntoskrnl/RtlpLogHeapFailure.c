/*
 * XREFs of RtlpLogHeapFailure @ 0x1405F1BBC
 * Callers:
 *     RtlpHpFixedVsFree @ 0x14025BC50 (RtlpHpFixedVsFree.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14034BBF0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140351BF4 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403628D8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140364794 (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVsContextFreeInternal @ 0x14036E174 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140371588 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x140371770 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1403717D4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x140371850 (RtlAllocateHeap.c)
 *     RtlSizeHeap @ 0x1405E50D0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E8A08 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8DF8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405E952C (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E966C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405EA0E4 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA72C (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405EA9DC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405EAD20 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1405EADE8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405EAE78 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405EB088 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F1C10 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405F2650 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x1409BAF80 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1409BB454 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405F1F7C (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0BEB0 != a2 )
  {
    qword_140C0BEC8 = a5;
    qword_140C0BED0 = a6;
    dword_140C0BEA8 = a1;
    qword_140C0BEB0 = a2;
    qword_140C0BEB8 = a3;
    qword_140C0BEC0 = a4;
    RtlpHpHeapHandleError();
  }
}
