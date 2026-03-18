/*
 * XREFs of PopRecordAcDcState @ 0x14098127C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
