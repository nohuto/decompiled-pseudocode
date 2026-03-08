/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1408665AC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140866238 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A61634 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A61AEC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A64074 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A643AC (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6832C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A68868 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A69880 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x140868C7C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
