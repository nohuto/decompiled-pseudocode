/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14031E6B0
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1407E02C8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
