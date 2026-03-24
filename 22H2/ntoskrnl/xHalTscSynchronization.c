/*
 * XREFs of xHalTscSynchronization @ 0x1404F1450
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14038D11C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
