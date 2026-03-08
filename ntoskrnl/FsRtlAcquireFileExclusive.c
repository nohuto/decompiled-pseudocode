/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1407D18B0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcZeroEndOfLastPage @ 0x140343FA8 (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0, 0LL);
}
