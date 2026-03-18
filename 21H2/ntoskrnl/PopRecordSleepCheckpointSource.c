/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x140989C20
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B2C124 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (4 * a1)) & 0xC;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
