/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x140305D10
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14077E38C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1408A34DC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
