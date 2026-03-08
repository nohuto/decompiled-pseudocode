/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x140303C70
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14079D924 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x140957DA0 (PiDmGetObjectCount.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
