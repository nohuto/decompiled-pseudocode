/*
 * XREFs of VerifierIoAcquireCancelSpinLock @ 0x140ABCE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireCancelSpinLock)();
}
