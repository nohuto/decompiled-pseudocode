/*
 * XREFs of RtlpLogHeapFailure @ 0x14059356C
 * Callers:
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1402A6048 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1402A6240 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1402A62A4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x1402A6330 (RtlAllocateHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140306DB0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14030944C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14030AB40 (RtlpHpHeapCheckCommitLimit.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeInternal @ 0x14033EAC0 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14033EDC0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x140341800 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140342200 (RtlpHpSegFree.c)
 *     RtlpHpFixedVsFree @ 0x140380900 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140586600 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140589490 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589880 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140589FA4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A0E4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A938 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14058AB94 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14058B100 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058B3AC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14058B6F0 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x14058B7B8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x14058B848 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14058BA58 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405935C0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14059400C (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140915930 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140915E04 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14059392C (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C11940 != a2 )
  {
    qword_140C11958 = a5;
    qword_140C11960 = a6;
    dword_140C11938 = a1;
    qword_140C11940 = a2;
    qword_140C11948 = a3;
    qword_140C11950 = a4;
    RtlpHpHeapHandleError();
  }
}
