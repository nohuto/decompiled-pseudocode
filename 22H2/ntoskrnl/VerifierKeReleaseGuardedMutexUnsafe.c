/*
 * XREFs of VerifierKeReleaseGuardedMutexUnsafe @ 0x1409D34A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutexUnsafe)();
}
