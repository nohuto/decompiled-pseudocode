/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x140A8EF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeReleaseInterruptSpinLock)();
}
