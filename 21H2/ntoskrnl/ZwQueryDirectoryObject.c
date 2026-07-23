/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403FCE00
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x140656750 (IopGetLegacyVetoListDrivers.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A45FC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409500E4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973DB0 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
