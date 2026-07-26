/*
 * XREFs of ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0060070
 * Callers:
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0116F4C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 * Callees:
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C0021470 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 */

bool __fastcall IsIfBlockAvailable(const struct _GUID *a1)
{
  bool v2; // di
  KIRQL v3; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // r9

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  if ( InterfaceByInterfaceGuid )
    v2 = BYTE3(InterfaceByInterfaceGuid[87].Flink) == 0;
  KeReleaseSpinLock(&ndisIfListLock, v3);
  return v2;
}
