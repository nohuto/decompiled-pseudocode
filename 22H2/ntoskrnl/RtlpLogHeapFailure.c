/*
 * XREFs of RtlpLogHeapFailure @ 0x1405934AC
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x140289ACC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14028B1C0 (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeInternal @ 0x1402BF150 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402BF450 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x1402C1E90 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x1402C2790 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x1402C2890 (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x1402FDE04 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1402FE964 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1402FEB60 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1402FEBC4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x1402FEC50 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x1403800B0 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140586540 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405893D0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405897C0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140589EE4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A024 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A878 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14058AAD4 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14058B040 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058B2EC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14058B630 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x14058B6F8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x14058B788 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14058B998 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x140593500 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x140593F4C (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140915980 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140915E54 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14059386C (RtlpHpHeapHandleError.c)
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
