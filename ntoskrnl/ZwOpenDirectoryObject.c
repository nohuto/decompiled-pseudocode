/*
 * XREFs of ZwOpenDirectoryObject @ 0x140412E10
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x1405EF0D0 (DifZwOpenDirectoryObjectWrapper.c)
 *     IopGetLegacyVetoListDrivers @ 0x140698764 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14081DAA0 (PiDrvDbEnumDriverStoreNodes.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     PiDrvDbUnregisterNode @ 0x14096E504 (PiDrvDbUnregisterNode.c)
 *     ExpFindArcName @ 0x1409F9550 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5CDB0 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
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
