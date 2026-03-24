/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x1409DAF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReadStateSemaphore)();
}
