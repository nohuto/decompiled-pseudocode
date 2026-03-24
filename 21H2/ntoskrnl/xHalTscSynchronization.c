/*
 * XREFs of xHalTscSynchronization @ 0x1404F17D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14038D81C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
