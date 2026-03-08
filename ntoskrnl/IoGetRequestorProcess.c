/*
 * XREFs of IoGetRequestorProcess @ 0x1402C80C0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402C19B4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForReadAccess @ 0x1402C7F90 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1402C8020 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlProcessFileLock @ 0x14053B5C0 (FsRtlProcessFileLock.c)
 *     IopDoesCompletionNeedsApc @ 0x140552F8C (IopDoesCompletionNeedsApc.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
