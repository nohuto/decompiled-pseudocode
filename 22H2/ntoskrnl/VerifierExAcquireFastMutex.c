/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140ADE1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireFastMutex()
{
  return ((__int64 (*)(void))pXdvExAcquireFastMutex)();
}
