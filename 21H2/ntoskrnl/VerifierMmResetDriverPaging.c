/*
 * XREFs of VerifierMmResetDriverPaging @ 0x1409D47B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmResetDriverPaging()
{
  return ((__int64 (*)(void))pXdvMmResetDriverPaging)();
}
