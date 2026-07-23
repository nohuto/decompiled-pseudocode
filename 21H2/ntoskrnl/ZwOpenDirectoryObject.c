/*
 * XREFs of ZwOpenDirectoryObject @ 0x1403FB080
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x140656750 (IopGetLegacyVetoListDrivers.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     ObpInitializeRootNamespace @ 0x1407A0B90 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A45FC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973DB0 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
