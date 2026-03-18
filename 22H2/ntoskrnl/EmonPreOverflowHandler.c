/*
 * XREFs of EmonPreOverflowHandler @ 0x14051E060
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 EmonPreOverflowHandler()
{
  return HalpInterruptEnablePerformanceEvents(1LL);
}
