/*
 * XREFs of PopRecordDisplayState @ 0x140870F80
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140870EA4 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopRecordDisplayState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1u);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
