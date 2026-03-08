/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1406D045C
 * Callers:
 *     PiDmRemoveCacheReferenceForObject @ 0x140680BEC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1406CBAD4 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406CBBDC (PiDmAddCacheReferenceForObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiDmListAddList @ 0x14087DCD8 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x140957DA0 (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x140957DFC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140957F4C (PiDmListRemoveObject.c)
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
