/*
 * XREFs of IoGetRequestorProcess @ 0x140332030
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140326854 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140326B54 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForReadAccess @ 0x140331F00 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140331F90 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlProcessFileLock @ 0x14053DA60 (FsRtlProcessFileLock.c)
 *     IopDoesCompletionNeedsApc @ 0x14055542C (IopDoesCompletionNeedsApc.c)
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
