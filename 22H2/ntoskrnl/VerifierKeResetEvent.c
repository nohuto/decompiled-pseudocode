/*
 * XREFs of VerifierKeResetEvent @ 0x1409DB5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeResetEvent()
{
  return ((__int64 (*)(void))pXdvKeResetEvent)();
}
