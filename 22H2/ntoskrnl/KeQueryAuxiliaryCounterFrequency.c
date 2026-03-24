/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x1405143E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C00930[0]();
}
