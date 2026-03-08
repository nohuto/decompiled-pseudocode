/*
 * XREFs of VerifierExAcquireSharedWaitForExclusive @ 0x140AE1250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireSharedWaitForExclusive()
{
  return ((__int64 (*)(void))pXdvExAcquireSharedWaitForExclusive)();
}
