/*
 * XREFs of _CmOpenDeviceRegKey @ 0x140636980
 * Callers:
 *     IoOpenDeviceRegistryKey @ 0x140602CD0 (IoOpenDeviceRegistryKey.c)
 *     PiCMOpenDeviceKey @ 0x140624D98 (PiCMOpenDeviceKey.c)
 *     _PnpDispatchDevice @ 0x140631220 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406363FC (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140730998 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140733D0C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x140735858 (_CmGetDeviceCompoundFilters.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744338 (_CmSetDeviceRegPropWorker.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1407472B4 (PnpDeviceObjectToDeviceInstance.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074C164 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateDeviceWorker @ 0x14074CEF4 (_CmCreateDeviceWorker.c)
 *     IopGetRootDevices @ 0x14074ECA8 (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F80C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407509E4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752DDC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752F3C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140752FE0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140767C78 (PiDevCfgEnumDeviceKeys.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076A848 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1407AEFC8 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4A0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C1450 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0FF0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2CEC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A6BF8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097BC28 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
