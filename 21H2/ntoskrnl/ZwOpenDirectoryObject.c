/*
 * XREFs of ZwOpenDirectoryObject @ 0x1403FAEA0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140661930 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140782748 (BiGetNtPartitionPath.c)
 *     ObpInitializeRootNamespace @ 0x1407A0990 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A43FC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094FF14 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973BD0 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x1409804D0 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
