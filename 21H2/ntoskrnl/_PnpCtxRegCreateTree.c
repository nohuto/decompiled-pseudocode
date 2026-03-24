/*
 * XREFs of _PnpCtxRegCreateTree @ 0x14063E278
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063D95C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x14063E754 (DrvDbLoadDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140640410 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140640698 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140641CB0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140645118 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406454C4 (_PnpOpenPropertiesKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406A98B8 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406AA244 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6AF4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097880C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x14063E2D0 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v2);
}
