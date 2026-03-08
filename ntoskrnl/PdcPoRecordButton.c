/*
 * XREFs of PdcPoRecordButton @ 0x140994A20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void PdcPoRecordButton()
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000014];
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = v0;
  PopBsdHandleRequest(1u);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
