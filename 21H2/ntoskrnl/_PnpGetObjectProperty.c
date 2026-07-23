/*
 * XREFs of _PnpGetObjectProperty @ 0x14062C98C
 * Callers:
 *     PiRebalanceOptOut @ 0x140510578 (PiRebalanceOptOut.c)
 *     _CmGetDeviceParent @ 0x14060F984 (_CmGetDeviceParent.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140629298 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x14062994C (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x14062CDA4 (PiDqPnPGetObjectProperty.c)
 *     PnpGetDevicePropertyData @ 0x14062EF28 (PnpGetDevicePropertyData.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140632AA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140636050 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406363FC (_CmGetDeviceRegPropWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406FD780 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x1406FDE7C (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmMatchLastKnownParentCallback @ 0x140726770 (_CmMatchLastKnownParentCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407330A4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E300 (IopDeviceObjectFromSymbolicName.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14073F360 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407424CC (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140746370 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmUpdateDevicePanel @ 0x140747868 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1407482E0 (_CmQueryDevicePanelPldProperty.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074C164 (PpForEachDeviceInstanceDriver.c)
 *     PnpAssignResourcesToDevices @ 0x14074FD90 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x1407588E4 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140758AC4 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140759828 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140760B60 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x140768038 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14076AAD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14076BC54 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076FE3C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1407710B0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772B60 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x140790640 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x1407A37EC (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D09F4 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x14089C6A4 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0E90 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2264 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2AC0 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A37D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A69C8 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B57A8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B5DB4 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B6074 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6C54 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140976310 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979000 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A1BC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097AAD0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14097B560 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x14062CB18 (_PnpGetObjectPropertyWorker.c)
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
