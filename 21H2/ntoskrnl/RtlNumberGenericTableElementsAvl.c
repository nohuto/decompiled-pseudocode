/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402AE5C0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14077E48C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1408A348C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
