/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14086210C
 * Callers:
 *     IopIsDescendantNode @ 0x140861DAC (IopIsDescendantNode.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x14086207C (IopAddRelationToList.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140862510 (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x14087CD58 (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x1409699BC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140862130 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
