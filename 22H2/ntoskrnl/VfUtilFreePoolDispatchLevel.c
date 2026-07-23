/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1405A0680
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1409D74A8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D7590 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1409E1940 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14037E460 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
