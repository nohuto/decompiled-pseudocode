/*
 * XREFs of VerifierIoAcquireVpbSpinLock @ 0x1409D3680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireVpbSpinLock)();
}
