/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x140637618
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406081C4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14063276C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140633564 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140639F28 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072C0D0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072CC64 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14073C480 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14076EAC0 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140770ECC (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x14077C5B0 (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14077CAC8 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x14077D1C0 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigOpenKey @ 0x1407AC520 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407B013C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407B0320 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1407B0558 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1407B05E8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407B09F4 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089B72C (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1408A1BA8 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A7270 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AD87C (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408B04CC (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140975028 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140976428 (_CmGetDevicesInBaseContainerList.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097809C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1409789EC (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978DBC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409798C4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097BDDC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A54388 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A54414 (PipProcessPendingServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A54958 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A91B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A91D50 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140637684 (_PnpCtxGetCachedNodeBaseKey.c)
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
