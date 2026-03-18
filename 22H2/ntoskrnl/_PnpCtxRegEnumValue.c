/*
 * XREFs of _PnpCtxRegEnumValue @ 0x140877E74
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083BD54 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140876094 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140877C68 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A63EA4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A64334 (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A670AC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CA68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B436DC (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14086EAA0 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        _DWORD *a5,
        _DWORD *a6,
        void *a7,
        unsigned int *a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
