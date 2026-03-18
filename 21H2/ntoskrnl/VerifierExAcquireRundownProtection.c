/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x140A7EC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtection()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtection)();
}
