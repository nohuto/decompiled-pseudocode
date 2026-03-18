/*
 * XREFs of VerifierZwSetSystemTime @ 0x140AA3A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwSetSystemTime()
{
  return ((__int64 (*)(void))pXdvZwSetSystemTime)();
}
