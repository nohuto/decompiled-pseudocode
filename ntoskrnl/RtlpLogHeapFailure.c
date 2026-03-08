/*
 * XREFs of RtlpLogHeapFailure @ 0x1405B2884
 * Callers:
 *     RtlpHpFixedVsFree @ 0x140201840 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrCommit @ 0x140248BE0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A790 (RtlpHpVsContextAllocateInternal.c)
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1402B6740 (RtlpHpVsContextFree.c)
 *     RtlpHpLargeFree @ 0x1402B6B40 (RtlpHpLargeFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B738C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlFreeHeap @ 0x1402E0A90 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1402E0AF4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x1402E0B70 (RtlAllocateHeap.c)
 *     RtlpHpSegFree @ 0x140308DBC (RtlpHpSegFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403095E0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140309BA0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     RtlSizeHeap @ 0x1405A7940 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AA2DC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AAC2C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405AB4DC (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405ABAD4 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x1405ABB9C (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405ABC2C (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405ABE4C (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405B3324 (RtlpHeapListCompare.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1405B3A24 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlZeroHeap @ 0x1409BAEE0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1409BB3E0 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1405B2C54 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0C180 != a2 )
  {
    qword_140C0C198 = a5;
    qword_140C0C1A0 = a6;
    dword_140C0C178 = a1;
    qword_140C0C180 = a2;
    qword_140C0C188 = a3;
    qword_140C0C190 = a4;
    RtlpHpHeapHandleError();
  }
}
