/*
 * XREFs of _PnpGetObjectProperty @ 0x1406B095C
 * Callers:
 *     PiRebalanceOptOut @ 0x140510278 (PiRebalanceOptOut.c)
 *     _CmGetDeviceParent @ 0x140693B94 (_CmGetDeviceParent.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1406ACFEC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiCMGetObjectProperty @ 0x1406AD91C (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406AF1F0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406AF534 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PnpGetObjectProperty @ 0x1406B081C (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1406B0D74 (PiDqPnPGetObjectProperty.c)
 *     PnpGetDevicePropertyData @ 0x1406B2EF8 (PnpGetDevicePropertyData.c)
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406B6A78 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406BA020 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406BA3CC (_CmGetDeviceRegPropWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14071A450 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14071AB4C (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725C90 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmMatchLastKnownParentCallback @ 0x140726480 (_CmMatchLastKnownParentCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072BED0 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceWorker @ 0x14072D948 (_CmDeleteDeviceWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407308D4 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140733234 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgProcessDevice @ 0x140736238 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407381B0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1407392E4 (PiDevCfgQueryObjectProperties.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073A5E0 (IopDeviceObjectFromSymbolicName.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14073B640 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14073E7AC (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x14073F2C0 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140741C2C (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140742650 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmUpdateDevicePanel @ 0x140743B48 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1407445C0 (_CmQueryDevicePanelPldProperty.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14074557C (IopProcessSetInterfaceState.c)
 *     PpForEachDeviceInstanceDriver @ 0x140748444 (PpForEachDeviceInstanceDriver.c)
 *     PnpAssignResourcesToDevices @ 0x14074F3C0 (PnpAssignResourcesToDevices.c)
 *     PiDcHandleDeviceEvent @ 0x140757F14 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1407580F4 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140758E58 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075FFC0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCopyObjectProperties @ 0x140767498 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140769F38 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x14076B0B4 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x14076DED4 (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076F93C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140770BB0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772660 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDmListInitEnumCallback @ 0x140790380 (PiDmListInitEnumCallback.c)
 *     PiDrvDbSetupNodes @ 0x1407A3A1C (PiDrvDbSetupNodes.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D07A4 (_CmGetParentDeviceContainerId.c)
 *     PipGetDeviceObjectLocation @ 0x14089C594 (PipGetDeviceObjectLocation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0D80 (PnpGetDeviceInstancePropertyData.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2154 (PnpUpdateRebootRequiredReason.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A29B0 (PnpGetDeviceInterfacePropertyData.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A36C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A68B8 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1148 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1408B5698 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1408B5CA4 (PiAuditDeviceStart.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B5F64 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6B44 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140976180 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140978E70 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A02C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097A940 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14097B3D0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406B0AE8 (_PnpGetObjectPropertyWorker.c)
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
