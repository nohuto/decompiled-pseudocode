/*
 * XREFs of CcCopyWrite @ 0x1403A3B60
 * Callers:
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14021C0A0 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64 *)FileOffset, Length, Wait, (__int64)Buffer, 0LL);
}
