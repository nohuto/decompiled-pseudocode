/*
 * XREFs of PopSetCleanShutdownMarker @ 0x140981500
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 */

void PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopBsdHandleRequest(9u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
