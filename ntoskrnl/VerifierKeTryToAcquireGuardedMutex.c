/*
 * XREFs of VerifierKeTryToAcquireGuardedMutex @ 0x140ACC990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTryToAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeTryToAcquireGuardedMutex)();
}
