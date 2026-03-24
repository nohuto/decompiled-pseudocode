/*
 * XREFs of _CmGetDeviceRegProp @ 0x14064146C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14063C7AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14063EDF8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceProperty @ 0x14063FC90 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1406401E8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406415EC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceStatus @ 0x1406A0340 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406A784C (_CmGetDeviceSoftwareKey.c)
 *     PiCMGetRegistryProperty @ 0x1406AAA50 (PiCMGetRegistryProperty.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406E6038 (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x14072CA88 (_CmDeleteDeviceWorker.c)
 *     PiCMQueryRemove @ 0x14072ED1C (PiCMQueryRemove.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072FE5C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407301CC (PpDevCfgProcessDeviceReset.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140734550 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739C9C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073A2B8 (PpDevCfgProcessDeviceOperations.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14073E6C8 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14073ECFC (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14074230C (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074578C (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     PiDeviceRegistration @ 0x14074BDF0 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074BFA4 (PpForEachDeviceInstanceDriver.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14074F750 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752C1C (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140758F6C (PiDcUpdateDeviceContainerMembership.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1407609A0 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x140763F00 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140767AB8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076A688 (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14076A918 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14076D954 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x14077283C (_CmIsLocalMachineContainer.c)
 *     IopIsReportedAlready @ 0x1407AEDC8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BDD10 (PiDevCfgProcessDeviceCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A3670 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A38D8 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A4F1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6940 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9A8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AA8EC (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmClassFilterCallback @ 0x140976EB0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140977240 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140A90500 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140A90620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406415EC (_CmGetDeviceRegPropWorker.c)
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
