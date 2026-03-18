/*
 * XREFs of _PnpCtxRegEnumValue @ 0x14069946C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140698FBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140699288 (_PnpGetGenericStorePropertyLocales.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A26068 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A264F4 (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A29D04 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A2F5D0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1406CF2EC (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a6, a7, a8);
}
