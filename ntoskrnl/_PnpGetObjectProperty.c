/*
 * XREFs of _PnpGetObjectProperty @ 0x1406D0FB4
 * Callers:
 *     PiRebalanceOptOut @ 0x140562990 (PiRebalanceOptOut.c)
 *     PnpAssignResourcesToDevices @ 0x140680DD8 (PnpAssignResourcesToDevices.c)
 *     PpForEachDeviceInstanceDriver @ 0x140681190 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     _CmUpdateDevicePanel @ 0x140683E30 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14068492C (_CmQueryDevicePanelPldProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406874DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiUEventCacheObjectProperties @ 0x14068C634 (PiUEventCacheObjectProperties.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14068DA78 (PiUEventProcessBroadcastNotifications.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406C40E0 (PnpCallDriverQueryServiceHelper.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     _CmGetDeviceParent @ 0x1406C7D1C (_CmGetDeviceParent.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406CB4C0 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiDqPnPGetObjectProperty @ 0x1406CD8A8 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1406CDAF0 (PiPnpRtlIsDeviceValidForSession.c)
 *     PnpGetObjectProperty @ 0x1406CEE90 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1406CF2B4 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406CFC70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D0018 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406D4190 (PiPnpRtlInterfaceFilterCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406F6F58 (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x1406F7418 (PnpGetDevicePropertyData.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14074DA38 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14078A594 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14078BA10 (PiUEventDeviceNeedsInstall.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14078D104 (PnpGetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     PiDcHandleDeviceEvent @ 0x1407F8294 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1407F8364 (PiDcHandleInterfaceEvent.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407FCC30 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDmListInitEnumCallback @ 0x1407FE3D0 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x14081C208 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14081D82C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14081D958 (PiDrvDbGetNodeSystemRoot.c)
 *     _CmGetParentDeviceContainerId @ 0x14085CA14 (_CmGetParentDeviceContainerId.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408731D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140875C3C (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgCopyObjectProperties @ 0x140875D30 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     PiDcContainerRequiresConfiguration @ 0x1408793AC (PiDcContainerRequiresConfiguration.c)
 *     _CmUpdateDevicePanelInterface @ 0x140881498 (_CmUpdateDevicePanelInterface.c)
 *     PipGetDeviceObjectLocation @ 0x14094FFE4 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1409548E0 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x140955E50 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095763C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409579A0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1409582C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14096C7A8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14096CE1C (PiAuditDeviceStart.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A604E0 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140A61490 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A66450 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406D1148 (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  unsigned int v11; // r14d
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int ObjectPropertyWorker; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD v22[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A4h] [rbp-5h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+B0h] [rbp+7h]
  int v32; // [rsp+B4h] [rbp+Bh]

  v11 = a3;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v29 = 0;
  v32 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v30 = a10;
  v31 = a11;
  v23 = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 8LL, 1, v22);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(v22[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(a1, a2, v11, v23, v24, v25, v26, v27, v28, v30, v31);
  v16 = ObjectPropertyWorker;
  if ( v14 )
  {
    LODWORD(v22[0]) = ObjectPropertyWorker;
    v19 = v14(a1, a2, v11, 8LL, 2, v22);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(v22[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
