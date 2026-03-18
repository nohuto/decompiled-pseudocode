/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x140AD0570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutex)();
}
