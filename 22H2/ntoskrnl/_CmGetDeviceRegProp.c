/*
 * XREFs of _CmGetDeviceRegProp @ 0x1406BA24C
 * Callers:
 *     _CmGetDeviceStatus @ 0x140684C00 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceSoftwareKey @ 0x14068A7FC (_CmGetDeviceSoftwareKey.c)
 *     PiCMGetRegistryProperty @ 0x14068DA00 (PiCMGetRegistryProperty.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406B7BD8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceProperty @ 0x1406B8A70 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1406B8FC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406BA3CC (_CmGetDeviceRegPropWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x14072D948 (_CmDeleteDeviceWorker.c)
 *     PiCMQueryRemove @ 0x14072F1D0 (PiCMQueryRemove.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730310 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730680 (PpDevCfgProcessDeviceReset.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407348A0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140736144 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x140736238 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140736760 (PpDevCfgProcessDeviceOperations.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14073AB68 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14073B19C (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14073E7AC (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140741C2C (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PiDeviceRegistration @ 0x140748290 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140748444 (PpForEachDeviceInstanceDriver.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14074EF40 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14075240C (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075875C (PiDcUpdateDeviceContainerMembership.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075FFC0 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x140763520 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407670D8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x140769CA8 (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140769F38 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14076D020 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x1407724FC (_CmIsLocalMachineContainer.c)
 *     IopIsReportedAlready @ 0x1407AF208 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4D0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A36C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A3928 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A4F6C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6990 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9ADC (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AA93C (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     _CmClassFilterCallback @ 0x140976F00 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140977290 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A90500 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A90620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406BA3CC (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v12; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = v11(a1, a2, 1LL, 9LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = DeviceRegPropWorker;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = DeviceRegPropWorker;
  v15 = v11(a1, a2, 1LL, 9LL, 2, v20);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
