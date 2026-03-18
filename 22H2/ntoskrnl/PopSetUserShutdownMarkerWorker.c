/*
 * XREFs of PopSetUserShutdownMarkerWorker @ 0x140683420
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 */

void PopSetUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 4u;
  PopBsdHandleRequest(9u);
  PopOkayToQueueNextWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
