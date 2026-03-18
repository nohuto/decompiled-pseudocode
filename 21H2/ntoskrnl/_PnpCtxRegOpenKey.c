/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14082EBA4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14064F770 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x140B0F0F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B0F180 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B4F8C4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B4FA10 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B50770 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
