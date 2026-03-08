/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1405CBF00
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140AC8B68 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140AC8C50 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140ADAFB4 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403031F8 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
