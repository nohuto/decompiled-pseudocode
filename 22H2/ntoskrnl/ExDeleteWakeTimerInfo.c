/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14060B604
 * Callers:
 *     PopFreeWakeSource @ 0x140987388 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
