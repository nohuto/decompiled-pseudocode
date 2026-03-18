/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1402DECE0
 * Callers:
 *     PiLookupInDDBCache @ 0x14075EB84 (PiLookupInDDBCache.c)
 *     PiDqQueryFreeActiveData @ 0x140776E5C (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
