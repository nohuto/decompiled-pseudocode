/*
 * XREFs of VerifierKeAcquireGuardedMutexUnsafe @ 0x140ACC590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutexUnsafe)();
}
