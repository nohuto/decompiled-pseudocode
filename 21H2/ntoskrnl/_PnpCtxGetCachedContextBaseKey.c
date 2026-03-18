/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14078014C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406997B8 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406BE094 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C1D24 (DrvDbLoadDatabaseNode.c)
 *     PiDevCfgInitMigrationContext @ 0x1406E2FE8 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1406E6424 (PiDevCfgConfigureDeviceLocation.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14076D4A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14077F420 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140781268 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     NtEnableLastKnownGood @ 0x14080B090 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x14080BFE0 (NtDisableLastKnownGood.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x14082EC0C (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14083DA50 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14083DC20 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x14083DE38 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14083DEC8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14083E2B8 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094017C (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140946BB8 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14094CAB8 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140952178 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140955628 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A23328 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A23A34 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A24104 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A25AC0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A264F4 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A26994 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A281F8 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A28FC4 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A293B4 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140A2A3F4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A2C72C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B0F0F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B0F180 (PipProcessPendingOsExtensionResources.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B23340 (PnpOpenCCSPnpRegKey.c)
 *     PipHardwareConfigInit @ 0x140B28AB0 (PipHardwareConfigInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1407801B8 (_PnpCtxGetCachedNodeBaseKey.c)
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
