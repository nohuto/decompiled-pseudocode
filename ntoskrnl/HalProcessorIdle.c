/*
 * XREFs of HalProcessorIdle @ 0x140411C30
 * Callers:
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x14038FA50 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1403C7A00 (PpmIdleGuestExecute.c)
 *     KiHaltOnAddress @ 0x14057DA08 (KiHaltOnAddress.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1402C9D50 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
