/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406994BC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140698FBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMEnumerateSubKeys @ 0x140955628 (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A264F4 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A26994 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A293B4 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A29D04 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A2AAB0 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A2B388 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A2E0D0 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A2F5D0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B4FA10 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1406CB590 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
