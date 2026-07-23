/*
 * XREFs of VerifierKeInitializeDeviceQueue @ 0x1409D4330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeDeviceQueue()
{
  return ((__int64 (*)(void))pXdvKeInitializeDeviceQueue)();
}
