/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14063562C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6730 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A54388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A54414 (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A54B50 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A9123C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A91380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A91B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A91D50 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A920E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = a1;
  LODWORD(a1) = 0;
  if ( v6 )
    a1 = *(_QWORD *)(v6 + 224);
  return SysCtxRegOpenKey(a1, a2, a3, a4, a5, a6);
}
