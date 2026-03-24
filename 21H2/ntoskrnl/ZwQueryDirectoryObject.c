/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403FCC20
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140661930 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140782748 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A43FC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094FF14 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973BD0 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
