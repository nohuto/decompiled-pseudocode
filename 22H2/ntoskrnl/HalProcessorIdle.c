/*
 * XREFs of HalProcessorIdle @ 0x1403F9320
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x14038FFF0 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403BC900 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140395BA0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
