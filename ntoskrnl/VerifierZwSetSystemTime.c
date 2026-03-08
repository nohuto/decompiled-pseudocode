/*
 * XREFs of VerifierZwSetSystemTime @ 0x140AE3950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwSetSystemTime()
{
  return ((__int64 (*)(void))pXdvZwSetSystemTime)();
}
