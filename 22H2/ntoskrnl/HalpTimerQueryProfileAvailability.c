/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404C17E4
 * Callers:
 *     DefaultQueryInformation @ 0x140864840 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
