/*
 * XREFs of IopRemoveRelationFromList @ 0x14096CC54
 * Callers:
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     PipRemoveDevicesInRelationList @ 0x140881CBC (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140869240 (PipDeviceObjectListIndexOf.c)
 *     PipDeviceObjectListRemove @ 0x140884CA4 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveRelationFromList(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int **v3; // r11
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PipDeviceObjectListIndexOf(*a1, a2, *(_DWORD *)*a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return PipDeviceObjectListRemove(*v3, v2);
}
