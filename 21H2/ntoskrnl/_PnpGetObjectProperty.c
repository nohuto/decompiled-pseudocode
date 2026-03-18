/*
 * XREFs of _PnpGetObjectProperty @ 0x14077DA5C
 * Callers:
 *     PiRebalanceOptOut @ 0x140564AC0 (PiRebalanceOptOut.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140698298 (PiDevCfgCopyObjectProperties.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406BD5D8 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     PiUEventDeviceNeedsInstall @ 0x1406E0480 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1406E66F4 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1406E9E7C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406EA694 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407449E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PnpAssignResourcesToDevices @ 0x140747E9C (PnpAssignResourcesToDevices.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140748FA4 (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x1407496A8 (PnpGetDevicePropertyData.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140768D10 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PpForEachDeviceInstanceDriver @ 0x14076B788 (PpForEachDeviceInstanceDriver.c)
 *     PiDcHandleDeviceEvent @ 0x14076D824 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x14076D9FC (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x14076DAF0 (PiDcContainerRequiresConfiguration.c)
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14076E548 (_CmQueryDevicePanelPldProperty.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140772190 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14077386C (PnpCallDriverQueryServiceHelper.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x14077AA70 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14077AD94 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiCMGetObjectProperty @ 0x14077BF70 (PiCMGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x14077D368 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiDqPnPGetObjectProperty @ 0x14077D784 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14077D91C (PnpGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140781DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1407872FC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140789210 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14078AF40 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14078B5D8 (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodes @ 0x1408260F8 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     PiDmListInitEnumCallback @ 0x14083F090 (PiDmListInitEnumCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086358C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PipGetDeviceObjectLocation @ 0x140941244 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140945D40 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x140947274 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140948814 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140948B70 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140949470 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14095B69C (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14095BD0C (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14095BFCC (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x140A245FC (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A253A0 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140A26350 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetParentDeviceContainerId @ 0x140A28D58 (_CmGetParentDeviceContainerId.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A297B0 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A2AAB0 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A2B388 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A2BD78 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x14077DBE8 (_PnpGetObjectPropertyWorker.c)
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
