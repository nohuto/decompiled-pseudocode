/*
 * XREFs of PopRecordSleepCheckpoint @ 0x1409814C0
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140B37D6C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
