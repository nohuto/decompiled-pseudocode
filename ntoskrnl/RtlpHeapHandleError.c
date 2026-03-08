/*
 * XREFs of RtlpHeapHandleError @ 0x1405B2C0C
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405AA2DC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AAC2C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1405B2C54 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405B302C (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14079A780 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0C178 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0C180, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0C178, qword_140C0C180, qword_140C0C188, 0LL);
}
