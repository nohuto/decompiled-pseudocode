/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140AD2620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInStackQueuedSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseInStackQueuedSpinLockForDpc)();
}
