/*
 * XREFs of VerifierKeTestSpinLock @ 0x140A7EE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTestSpinLock()
{
  return ((__int64 (*)(void))pXdvKeTestSpinLock)();
}
