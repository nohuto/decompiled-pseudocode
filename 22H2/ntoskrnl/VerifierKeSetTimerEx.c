/*
 * XREFs of VerifierKeSetTimerEx @ 0x1409DB6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimerEx()
{
  return ((__int64 (*)(void))pXdvKeSetTimerEx)();
}
