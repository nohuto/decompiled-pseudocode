/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14022C920
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14077E64C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1408A35EC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
