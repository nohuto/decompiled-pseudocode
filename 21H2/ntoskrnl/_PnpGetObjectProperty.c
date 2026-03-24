/*
 * XREFs of _PnpGetObjectProperty @ 0x140637B7C
 * Callers:
 *     PiRebalanceOptOut @ 0x140510338 (PiRebalanceOptOut.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x14063420C (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x140634B3C (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140636410 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140636754 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x140637A3C (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x140637F94 (PiDqPnPGetObjectProperty.c)
 *     PnpGetDevicePropertyData @ 0x14063A118 (PnpGetDevicePropertyData.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14063C7AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14063DC98 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140641240 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406415EC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceParent @ 0x1406B09D4 (_CmGetDeviceParent.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406E63A0 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x1406E6A9C (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725DB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407265A0 (_CmMatchLastKnownParentCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B010 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x14072CA88 (_CmDeleteDeviceWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140730420 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140732EE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BD08 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073CE44 (PiDevCfgQueryObjectProperties.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E140 (IopDeviceObjectFromSymbolicName.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14073F1A0 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14074230C (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x140742E20 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074578C (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1407461B0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmUpdateDevicePanel @ 0x1407476A8 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140748120 (_CmQueryDevicePanelPldProperty.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074BFA4 (PpForEachDeviceInstanceDriver.c)
 *     PnpAssignResourcesToDevices @ 0x14074FBD0 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x140758724 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140758904 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140759668 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1407609A0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x140767E78 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14076A918 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14076BA94 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14076E804 (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076FC7C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140770EF0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1407729A0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x14078F090 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x1407A35EC (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D0884 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x14089C544 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0D30 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2104 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2960 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A3670 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A6868 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B10F8 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B5648 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B5C54 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B5F14 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6AF4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140976130 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140978E20 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140979FDC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097A8F0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14097B380 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x140637D08 (_PnpGetObjectPropertyWorker.c)
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
  unsigned int ObjectPropertyWorker; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
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
  v17 = ObjectPropertyWorker;
  if ( !v14 )
    return v17;
  LODWORD(v22[0]) = ObjectPropertyWorker;
  v18 = v14(a1, a2, v11, 8LL, 2, v22);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(v22[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
