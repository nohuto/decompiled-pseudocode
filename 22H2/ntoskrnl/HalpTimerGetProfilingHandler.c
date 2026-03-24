/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404C1778
 * Callers:
 *     HalpSetSystemInformation @ 0x140733730 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
