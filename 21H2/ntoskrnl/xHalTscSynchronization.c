/*
 * XREFs of xHalTscSynchronization @ 0x1404F1750
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x14038D96C (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
