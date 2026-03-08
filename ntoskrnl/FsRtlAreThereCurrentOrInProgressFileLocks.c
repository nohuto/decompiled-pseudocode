/*
 * XREFs of FsRtlAreThereCurrentOrInProgressFileLocks @ 0x14053AE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlAreThereCurrentOrInProgressFileLocks(PFILE_LOCK FileLock)
{
  _QWORD *LockInformation; // rax
  BOOLEAN v2; // dl

  LockInformation = FileLock->LockInformation;
  v2 = 0;
  if ( LockInformation && (LockInformation[4] || LockInformation[5]) || FileLock->LockRequestsInProgress )
    return 1;
  return v2;
}
