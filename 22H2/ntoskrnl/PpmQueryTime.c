/*
 * XREFs of PpmQueryTime @ 0x14038FD28
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14082D954 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
