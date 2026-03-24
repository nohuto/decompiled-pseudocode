/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1406BA950
 * Callers:
 *     IoOpenDeviceRegistryKey @ 0x140688170 (IoOpenDeviceRegistryKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A8AF8 (PiCMOpenDeviceKey.c)
 *     _PnpDispatchDevice @ 0x1406B51F0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406B7BD8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406BA3CC (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406BAA90 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407282BC (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceWorker @ 0x14072D948 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072DF0C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407308D4 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733E9C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x140735568 (_CmGetDeviceCompoundFilters.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140736C30 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x140737ED8 (PiDevCfgInitDeviceContext.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     _CmSetDeviceRegPropWorker @ 0x140740618 (_CmSetDeviceRegPropWorker.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140743594 (PnpDeviceObjectToDeviceInstance.c)
 *     PpForEachDeviceInstanceDriver @ 0x140748444 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateDeviceWorker @ 0x1407491D4 (_CmCreateDeviceWorker.c)
 *     IopReleaseDeviceResources @ 0x14074B5CC (IopReleaseDeviceResources.c)
 *     IopGetRootDevices @ 0x14074E2DC (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074EE3C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14074FA7C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14074FC5C (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140750014 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140750384 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14075240C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14075256C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140752610 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407670D8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x140769CA8 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1407AF208 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4D0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C16F0 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0EE0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2BDC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A6AE8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9ADC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097BA98 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406BAA90 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x52504E50u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v14 + 6) = a5;
  *((_BYTE *)v14 + 28) = a6;
  *((_DWORD *)v14 + 4) = a3;
  *((_QWORD *)v14 + 4) = a7;
  *((_DWORD *)v14 + 5) = a4;
  if ( !v8 )
    goto LABEL_5;
  v15 = v8(a1, a2, 1LL);
  switch ( v15 )
  {
    case -1073741822:
      v8 = 0LL;
      goto LABEL_5;
    case -1073741536:
      goto LABEL_15;
    case 0:
LABEL_5:
      v16 = CmOpenDeviceRegKeyWorker(
              a1,
              a2,
              *((_DWORD *)v14 + 4),
              *((_DWORD *)v14 + 5),
              *((_DWORD *)v14 + 6),
              *((_BYTE *)v14 + 28),
              *((_QWORD *)v14 + 4),
              (__int64)v14 + 40);
      v17 = v16;
      if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v20 = v19, v19 == -1073741822) )
      {
LABEL_6:
        if ( v17 >= 0 && a8 )
          *a8 = *((_DWORD *)v14 + 10);
        goto LABEL_9;
      }
      if ( v19 != -1073741536 )
      {
        v21 = v17;
        if ( v20 )
          v21 = -1073741595;
        v17 = v21;
        goto LABEL_6;
      }
LABEL_15:
      v17 = *(_DWORD *)v14;
      goto LABEL_6;
  }
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v17;
}
