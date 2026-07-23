/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x1409D46F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmLockPagableDataSection()
{
  return ((__int64 (*)(void))pXdvMmLockPagableDataSection)();
}
