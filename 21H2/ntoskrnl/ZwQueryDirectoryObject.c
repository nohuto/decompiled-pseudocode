/*
 * XREFs of ZwQueryDirectoryObject @ 0x14041E0A0
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x140624100 (DifZwQueryDirectoryObjectWrapper.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x140799218 (IopGetLegacyVetoListDrivers.c)
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1408276AC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409FC2D0 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A21C40 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140B12C84 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
