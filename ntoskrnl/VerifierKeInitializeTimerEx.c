/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140AD2540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeTimerEx()
{
  return ((__int64 (*)(void))pXdvKeInitializeTimerEx)();
}
