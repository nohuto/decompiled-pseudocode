/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1402643F0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x14062E710 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14073DBC0 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
