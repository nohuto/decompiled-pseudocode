/*
 * XREFs of EmonPreOverflowHandler @ 0x14051BB30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 EmonPreOverflowHandler()
{
  return HalpInterruptEnablePerformanceEvents(1LL);
}
