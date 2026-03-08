/*
 * XREFs of _PnpCtxRegEnumValue @ 0x140866444
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083AA64 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140866238 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A611A4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A61634 (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A643AC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6832C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14086C580 (_RegRtlEnumValue.c)
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
