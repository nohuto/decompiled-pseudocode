/*
 * XREFs of ZwQueryDirectoryObject @ 0x14041D020
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1405F3F00 (DifZwQueryDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C2444 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140809890 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1408153D0 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409FC3E0 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FAB0 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
