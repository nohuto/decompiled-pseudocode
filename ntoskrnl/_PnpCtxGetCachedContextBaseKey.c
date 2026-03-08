/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1406D3680
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140682DC0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406C50D8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C9F40 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     PipHardwareConfigOpenKey @ 0x14081B6E8 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x140823B98 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140823CD0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140823EA0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140823FCC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140824314 (_CmGetMatchingCommonClassListWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x140875994 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140875E34 (PiDevCfgConfigureDeviceLocation.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1408772B4 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14087E160 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtEnableLastKnownGood @ 0x14087F5A0 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x1408806A0 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094EECC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140955668 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14095BD68 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140962EC8 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A5E4A8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A5EBA0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A60C0C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A61634 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A61AEC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6333C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A63C90 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A64074 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140A64A9C (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A66EA4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B5AF8C (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B5B018 (PipProcessPendingOsExtensionResources.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B618DC (PnpOpenCCSPnpRegKey.c)
 *     PipHardwareConfigInit @ 0x140B694FC (PipHardwareConfigInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406D370C (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 == 12 || a2 == 13 )
          goto LABEL_12;
        v6 = a2 - 14;
        if ( a2 != 14 )
          goto LABEL_10;
      }
    }
    else if ( a2 != 10 )
    {
      if ( a2 == 4 )
        goto LABEL_12;
      if ( a2 != 5 )
      {
        if ( a2 == 6 )
          goto LABEL_12;
        if ( a2 == 7 )
          goto LABEL_12;
        v6 = a2 - 8;
        if ( a2 == 8 )
          goto LABEL_12;
LABEL_10:
        if ( v6 != 1 )
          goto LABEL_12;
      }
    }
    v7 = *(_QWORD *)(a1 + 56);
    v4 = v7 - 16;
    if ( v7 != a1 + 56 )
    {
LABEL_13:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_12:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_13;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
