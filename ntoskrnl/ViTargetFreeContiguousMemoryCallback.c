/*
 * XREFs of ViTargetFreeContiguousMemoryCallback @ 0x140AC8B40
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140AC8B68 (ViTargetFreeContiguousMemoryFromNode.c)
 */

_BOOL8 __fastcall ViTargetFreeContiguousMemoryCallback(__int64 a1, __int64 a2)
{
  return (unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, a1) == 0;
}
