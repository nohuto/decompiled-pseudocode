/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x1409D31E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeAcquireInterruptSpinLock)();
}
