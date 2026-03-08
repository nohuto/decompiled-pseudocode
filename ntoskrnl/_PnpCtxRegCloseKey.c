/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1408653B4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1406718E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B57600 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B5AF8C (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B5B018 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
