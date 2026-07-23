/*
 * XREFs of ZwOpenDirectoryObject @ 0x1403FA520
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1406DA720 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140782648 (BiGetNtPartitionPath.c)
 *     ObpInitializeRootNamespace @ 0x1407A0DC0 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A482C (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094FF64 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973C20 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
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
