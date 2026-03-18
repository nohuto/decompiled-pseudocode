/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140877BAC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673F30 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408769B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B43330 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140B436DC (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B95274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B953C0 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140B96120 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1406CE918 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
