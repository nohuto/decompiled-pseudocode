/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x140ACC800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryRuntimeThread()
{
  return ((__int64 (*)(void))pXdvKeQueryRuntimeThread)();
}
