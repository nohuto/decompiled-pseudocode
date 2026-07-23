/*
 * XREFs of RtlpHeapHandleError @ 0x140593B14
 * Callers:
 *     RtlpCreateUCREntry @ 0x14058A1D4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x140593B5C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x140593F40 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405943AC (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140772CF0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C11918 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C11920, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C11918, qword_140C11920, qword_140C11928, 0LL);
}
