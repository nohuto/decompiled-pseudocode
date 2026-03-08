/*
 * XREFs of PiDqQueryUnlock @ 0x1409595D4
 * Callers:
 *     PiDqIrpCancel @ 0x14055F6E0 (PiDqIrpCancel.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(a1 + 64), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
