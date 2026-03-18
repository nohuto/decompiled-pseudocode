/*
 * XREFs of VerifierIoAcquireVpbSpinLock @ 0x140ACFA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireVpbSpinLock)();
}
