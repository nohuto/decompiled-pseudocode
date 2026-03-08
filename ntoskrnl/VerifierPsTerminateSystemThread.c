/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x140ACD070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsTerminateSystemThread()
{
  return ((__int64 (*)(void))pXdvPsTerminateSystemThread)();
}
