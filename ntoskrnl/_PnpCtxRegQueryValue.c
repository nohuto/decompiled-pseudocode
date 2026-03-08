/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14086617C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1406718E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B91054 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140B91F00 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
