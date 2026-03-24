/*
 * XREFs of VerifierIoAcquireCancelSpinLock @ 0x1409D2670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireCancelSpinLock)();
}
