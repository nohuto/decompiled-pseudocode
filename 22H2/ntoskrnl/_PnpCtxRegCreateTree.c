/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140797E74
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC3C0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDCF0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE2A4 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140787F44 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14079B290 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FAB88 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140877328 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1408775F0 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A66990 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x140797ECC (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
