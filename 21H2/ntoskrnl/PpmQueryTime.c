/*
 * XREFs of PpmQueryTime @ 0x1403CF338
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x140849A30 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409971BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
