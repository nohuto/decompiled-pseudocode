/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x14053ABA0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x14063990C (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(__int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
