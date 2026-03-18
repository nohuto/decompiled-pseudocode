/*
 * XREFs of VfPacketAcquireLock @ 0x140A9BF9C
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140A91260 (ViPendingCompleteAfterWait.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall VfPacketAcquireLock(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  *(_BYTE *)(a1 + 16) = result;
  return result;
}
