/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406306B4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6730 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097D584 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A54388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A54414 (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A54B50 (PipResetDevices.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5DA78 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     PipMigrateCleanServiceCallback @ 0x140A91380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A91B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A91D50 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
