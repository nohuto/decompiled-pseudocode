/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x140877FDC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140877C68 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMEnumerateSubKeys @ 0x140969A4C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A64334 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A647EC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A66D74 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A670AC (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A67E7C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A68754 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A6B568 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C580 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CA68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B436DC (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B953C0 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14086B8B4 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
