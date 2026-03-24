/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A5F6C
 * Callers:
 *     ExCreateCallback @ 0x1406A0050 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140779CE0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 */

char __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
