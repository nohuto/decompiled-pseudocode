/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x140A95FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReadStateSemaphore)();
}
