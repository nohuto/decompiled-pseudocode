/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x140AD65E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReadStateSemaphore)();
}
