/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14061A094
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6730 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A54B50 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A9123C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A91380 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A920E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return RegRtlQueryValue(a2, a6);
}
