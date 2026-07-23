/*
 * XREFs of VerifierKeSetTimerEx @ 0x1409DC6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimerEx()
{
  return ((__int64 (*)(void))pXdvKeSetTimerEx)();
}
