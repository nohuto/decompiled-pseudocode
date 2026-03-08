/*
 * XREFs of VerifierZwWaitForSingleObject @ 0x140AE3AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwWaitForSingleObject()
{
  return ((__int64 (*)(void))pXdvZwWaitForSingleObject)();
}
