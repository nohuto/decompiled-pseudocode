/*
 * XREFs of VerifierIoReleaseVpbSpinLock @ 0x140AD0290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseVpbSpinLock)();
}
