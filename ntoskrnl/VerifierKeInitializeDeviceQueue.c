/*
 * XREFs of VerifierKeInitializeDeviceQueue @ 0x140ACC720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeDeviceQueue()
{
  return ((__int64 (*)(void))pXdvKeInitializeDeviceQueue)();
}
