/*
 * XREFs of PopRecordSleepCheckpoint @ 0x1407FFF0C
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140B2C124 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
