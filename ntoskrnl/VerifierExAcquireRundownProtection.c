/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x140ABCCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtection()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtection)();
}
