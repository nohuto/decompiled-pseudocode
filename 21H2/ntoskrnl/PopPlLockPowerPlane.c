/*
 * XREFs of PopPlLockPowerPlane @ 0x14057E4B0
 * Callers:
 *     PopFxUnregisterDevice @ 0x1407B4F70 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopPlLockPowerPlane(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
