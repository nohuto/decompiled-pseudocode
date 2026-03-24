/*
 * XREFs of IoGetRequestorProcess @ 0x1402D99A0
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1402D9910 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F7DB4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140315E90 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CF2D0 (IoGetRequestorProcessId.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0610 (IopDoesCompletionNeedsApc.c)
 *     FsRtlProcessFileLock @ 0x1404EFC10 (FsRtlProcessFileLock.c)
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
