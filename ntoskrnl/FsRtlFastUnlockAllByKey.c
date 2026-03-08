/*
 * XREFs of FsRtlFastUnlockAllByKey @ 0x14053AFC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAllByKey(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context)
{
  return FsRtlPrivateFastUnlockAll(
           (__int64)FileLock,
           (_RTL_SPLAY_LINKS *)FileObject,
           ProcessId,
           Key,
           1,
           (__int64)Context);
}
