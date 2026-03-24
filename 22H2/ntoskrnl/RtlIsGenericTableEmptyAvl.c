/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14032D550
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1406A74F8 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14073A060 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
