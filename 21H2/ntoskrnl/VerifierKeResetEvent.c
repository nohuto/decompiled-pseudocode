/*
 * XREFs of VerifierKeResetEvent @ 0x140A7F5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeResetEvent()
{
  return ((__int64 (*)(void))pXdvKeResetEvent)();
}
