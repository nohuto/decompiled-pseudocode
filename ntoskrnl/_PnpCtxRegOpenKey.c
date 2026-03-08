/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14081D410
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1406718E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x140B5AF8C (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B5B018 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B5B0A4 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B91054 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B91F00 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
