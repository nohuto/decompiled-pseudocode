/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140772AA0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C1D24 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14076D4A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14077F420 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140781268 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1407829F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A28FC4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x140772AF8 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v2);
}
