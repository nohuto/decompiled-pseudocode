/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14069E104
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6440 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406B469C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A9023C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A910E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1406BB0F8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return RegRtlQueryValue(a2, a6);
}
