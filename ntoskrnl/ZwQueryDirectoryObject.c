/*
 * XREFs of ZwQueryDirectoryObject @ 0x140414C90
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1405F1A50 (DifZwQueryDirectoryObjectWrapper.c)
 *     IopGetLegacyVetoListDrivers @ 0x140698764 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14081DAA0 (PiDrvDbEnumDriverStoreNodes.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     ExpFindArcName @ 0x1409F9550 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5CDB0 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
