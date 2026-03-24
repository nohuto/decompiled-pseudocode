/*
 * XREFs of HalpTimerSetProfilingHandler @ 0x1404C18E4
 * Callers:
 *     HalpSetSystemInformation @ 0x140733730 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpTimerSetProfilingHandler(__int64 (*a1)(void))
{
  HalpTimerProfilingCallback = a1;
}
