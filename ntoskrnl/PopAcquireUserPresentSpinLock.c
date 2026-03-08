/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x14058B9DC
 * Callers:
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
  *a1 = result;
  return result;
}
