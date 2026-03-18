/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x14053D040
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x14063BD88 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(__int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
