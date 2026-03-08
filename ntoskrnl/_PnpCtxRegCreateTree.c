/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140687A74
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140682DC0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406C50D8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C9F40 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1408658F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A63C90 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x140687ACC (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v2);
}
