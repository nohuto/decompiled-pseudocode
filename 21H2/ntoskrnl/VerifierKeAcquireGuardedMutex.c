/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x140A8EC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutex)();
}
