/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x14041FB00
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x14041FAE0 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x14057B1B0 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
