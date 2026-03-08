/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1406091B4
 * Callers:
 *     PopFreeWakeSource @ 0x1409842D8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
