/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140A95ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeTimerEx()
{
  return ((__int64 (*)(void))pXdvKeInitializeTimerEx)();
}
