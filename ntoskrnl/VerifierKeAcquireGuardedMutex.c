/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x140ACC570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutex)();
}
