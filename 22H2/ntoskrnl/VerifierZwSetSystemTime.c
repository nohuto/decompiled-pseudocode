/*
 * XREFs of VerifierZwSetSystemTime @ 0x140AE7950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwSetSystemTime()
{
  return ((__int64 (*)(void))pXdvZwSetSystemTime)();
}
