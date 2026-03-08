/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x140ADA2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExTryToAcquireFastMutex()
{
  return ((__int64 (*)(void))pXdvExTryToAcquireFastMutex)();
}
