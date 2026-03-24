/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1406B7058
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     PiDqOpenUserObjectRegKey @ 0x14068C868 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14068D1F4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406B673C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406B7534 (DrvDbLoadDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x1406B91F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406B9478 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406BAA90 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406BDEF8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406BE2A4 (_PnpOpenPropertiesKey.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6B44 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097885C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1406B70B0 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v2);
}
