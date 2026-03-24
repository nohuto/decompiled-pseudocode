/*
 * XREFs of VerifierKeTestSpinLock @ 0x1409D3640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTestSpinLock()
{
  return ((__int64 (*)(void))pXdvKeTestSpinLock)();
}
