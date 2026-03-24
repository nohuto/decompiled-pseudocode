/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14074995C
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x14074942C (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x140749870 (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x1407498C8 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14074B084 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x14074B508 (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x14074BF38 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1408B2654 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408B275C (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140749980 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
