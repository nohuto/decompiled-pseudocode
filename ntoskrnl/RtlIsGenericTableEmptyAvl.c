/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140244F30
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 *     PiLookupInDDBCache @ 0x14079DD70 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
