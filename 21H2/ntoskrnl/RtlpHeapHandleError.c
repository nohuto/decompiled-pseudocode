/*
 * XREFs of RtlpHeapHandleError @ 0x1405938E4
 * Callers:
 *     RtlpCreateUCREntry @ 0x140589FA4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A0E4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A938 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B3AC (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14059392C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x140593D10 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14059417C (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140772B30 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C11938 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C11940, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C11938, qword_140C11940, qword_140C11948, 0LL);
}
