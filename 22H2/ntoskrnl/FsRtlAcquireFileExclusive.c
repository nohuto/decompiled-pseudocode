/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x140723950
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcZeroEndOfLastPage @ 0x1402A21C8 (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0, 0LL);
}
