/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1402524B0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14073DD80 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
