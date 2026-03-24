/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403FC2A0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1406DA720 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140782648 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A482C (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094FF64 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140973C20 (SiGetEfiSystemDevice.c)
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
