/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x140508664
 * Callers:
 *     HaliSetSystemInformation @ 0x14085EE78 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
