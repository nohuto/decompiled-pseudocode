/*
 * XREFs of _CmGetDeviceRegProp @ 0x1406C9884
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140680570 (PiQueryRemovableDeviceOverride.c)
 *     PiDeviceRegistration @ 0x140680FE4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140681190 (PpForEachDeviceInstanceDriver.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpCheckDeviceIdsChanged @ 0x140684A9C (PnpCheckDeviceIdsChanged.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406C40E0 (PnpCallDriverQueryServiceHelper.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PiCMGetRegistryProperty @ 0x1406C74A4 (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C8A54 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14074D0CC (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14074D604 (PipGetRegistryDwordWithFallback.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14078A594 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14078AC6C (PpDevCfgProcessDeviceOperations.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14078F428 (PpHotSwapUpdateRemovalPolicy.c)
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 *     IopIsReportedAlready @ 0x140803270 (IopIsReportedAlready.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     _CmIsLocalMachineContainer @ 0x140859BD8 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140876040 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140876FB8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140957504 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409579A0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1409582C0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140958510 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095B580 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14095FD04 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140A62230 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A62510 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140B91320 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140B91440 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
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
