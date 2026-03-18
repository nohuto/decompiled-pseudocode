/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14086921C
 * Callers:
 *     IopSortRelationListForRemove @ 0x140868C88 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868E48 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x14086918C (IopAddRelationToList.c)
 *     IopIsDescendantNode @ 0x1408693C4 (IopIsDescendantNode.c)
 *     IopSetRelationsTag @ 0x140881B08 (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x14096C9DC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140869240 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
