/*
 * XREFs of PopRecordSleepCheckpoint @ 0x14097E410
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(0xAu);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
