/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x140417770
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x140417750 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x140578CA0 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
