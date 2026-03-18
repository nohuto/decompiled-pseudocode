/*
 * XREFs of VerifierKeCancelTimer @ 0x140A7F300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeCancelTimer()
{
  return ((__int64 (*)(void))pXdvKeCancelTimer)();
}
