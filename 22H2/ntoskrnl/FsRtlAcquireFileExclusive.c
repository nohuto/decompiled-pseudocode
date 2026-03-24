/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1406550D0
 * Callers:
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x1402D78AC (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406552D0 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0LL);
}
