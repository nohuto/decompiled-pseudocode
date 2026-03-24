/*
 * XREFs of RtlpHeapHandleError @ 0x140593824
 * Callers:
 *     RtlpCreateUCREntry @ 0x140589EE4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A024 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A878 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B2EC (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14059386C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x140593C50 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405940BC (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1407727F0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C11918 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C11920, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C11918, qword_140C11920, qword_140C11928, 0LL);
}
