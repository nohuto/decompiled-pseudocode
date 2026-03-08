/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140ADA1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireFastMutex()
{
  return ((__int64 (*)(void))pXdvExAcquireFastMutex)();
}
