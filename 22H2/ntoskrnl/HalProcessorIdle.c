/*
 * XREFs of HalProcessorIdle @ 0x140419FC0
 * Callers:
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140391EF0 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1403CC520 (PpmIdleGuestExecute.c)
 *     KiHaltOnAddress @ 0x14057FF18 (KiHaltOnAddress.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140334110 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
