/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x140642808
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063D95C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x14063E754 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140641CB0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140645118 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406AA244 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072BC20 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C290 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072C7B4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D04C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14073C2C0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipOpenServiceEnumKeys @ 0x140742BEC (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075A97C (_CmGetDeviceContainerIdFromBase.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14076E900 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770D0C (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x14077C3F0 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14077C908 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x14077D000 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigOpenKey @ 0x1407AC320 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407AFF9C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407B0180 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1407B03B8 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407B0448 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407B0854 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089B5CC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1408A1A48 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A7110 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD71C (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408AFF68 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408B036C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140974E48 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140976248 (_CmGetDevicesInBaseContainerList.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977EBC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097880C (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978BDC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409796E4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097BBFC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMigratePnpState @ 0x140A51084 (PipMigratePnpState.c)
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A53388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A53414 (PipProcessPendingServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A53958 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A90B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A90D50 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140642874 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 11 )
    {
      if ( a2 <= 13 || a2 > 15 )
        goto LABEL_9;
    }
    else if ( a2 < 9 && a2 != 5 )
    {
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v4 = v6 - 16;
    if ( v6 != a1 + 56 )
    {
LABEL_10:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_9:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_10;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
