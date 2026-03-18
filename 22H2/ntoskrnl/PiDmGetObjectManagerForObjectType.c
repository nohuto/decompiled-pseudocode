/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1406D82BC
 * Callers:
 *     PiDmGetObject @ 0x1406D81D0 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407885C4 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1407BEAB0 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C2788 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FBAF0 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddList @ 0x140882944 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x14095ADC0 (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x14095AE1C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14095AF6C (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return &PiDmDeviceInstallerClassManager;
  v4 = v3 - 1;
  if ( !v4 )
    return &PiDmDeviceInterfaceManager;
  v6 = v4 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDmDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDmDevicePanelManager;
  return (void *)v1;
}
