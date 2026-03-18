/*
 * XREFs of _PnpCtxRegCloseKey @ 0x14082EB8C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14064F770 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B0F0F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B0F180 (PipProcessPendingOsExtensionResources.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B10490 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     PipMigrateCleanServiceCallback @ 0x140B4FA10 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
