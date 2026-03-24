/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x1409D3190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutex)();
}
