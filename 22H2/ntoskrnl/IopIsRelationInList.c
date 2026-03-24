/*
 * XREFs of IopIsRelationInList @ 0x1408B275C
 * Callers:
 *     PnpProcessRelation @ 0x14074950C (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x14074995C (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
