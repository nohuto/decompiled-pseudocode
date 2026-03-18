/*
 * XREFs of VerifierKeReleaseGuardedMutexUnsafe @ 0x140AD0840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutexUnsafe)();
}
