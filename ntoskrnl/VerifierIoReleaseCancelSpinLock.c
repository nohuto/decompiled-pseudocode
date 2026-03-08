/*
 * XREFs of VerifierIoReleaseCancelSpinLock @ 0x140ABCE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseCancelSpinLock)();
}
