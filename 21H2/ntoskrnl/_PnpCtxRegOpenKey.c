/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14064081C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C6500 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14063B8BC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140640410 (DrvDbOpenObjectRegKey.c)
 *     PiPnpRtlInit @ 0x1407A3350 (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A53388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A53414 (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A9023C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A90B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A90D50 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A910E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1406426AC (_SysCtxRegOpenKey.c)
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
