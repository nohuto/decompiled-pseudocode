/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140AD6620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInStackQueuedSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseInStackQueuedSpinLockForDpc)();
}
