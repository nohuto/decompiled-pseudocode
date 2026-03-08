/*
 * XREFs of PopRecordAcDcState @ 0x14097E1CC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1u);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
