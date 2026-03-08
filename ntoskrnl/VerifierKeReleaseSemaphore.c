/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x140ABD450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReleaseSemaphore)();
}
