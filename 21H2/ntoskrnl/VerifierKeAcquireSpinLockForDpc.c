/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x1409D4270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeAcquireSpinLockForDpc)();
}
