/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x14056C800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C01D40[0]();
}
