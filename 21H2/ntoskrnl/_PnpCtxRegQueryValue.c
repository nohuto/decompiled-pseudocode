/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406BADC4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6500 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14063B8BC (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A9023C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A910E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x140642318 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
