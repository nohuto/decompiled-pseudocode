/*
 * XREFs of VerifierKeTestSpinLock @ 0x140AC0ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTestSpinLock()
{
  return ((__int64 (*)(void))pXdvKeTestSpinLock)();
}
