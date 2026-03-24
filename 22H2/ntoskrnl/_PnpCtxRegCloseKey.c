/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406B4684
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6440 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406B469C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x1407A3780 (PiPnpRtlInit.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4698 (DrvDbCreateDatabaseNode.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097D3F4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A53388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A53414 (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5CA78 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A90B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A90D50 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
