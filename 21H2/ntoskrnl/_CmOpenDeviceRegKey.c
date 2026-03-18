/*
 * XREFs of _CmOpenDeviceRegKey @ 0x14077F2EC
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x140697EF0 (PiDevCfgEnumDeviceKeys.c)
 *     PiCMOpenDeviceKey @ 0x1406BA720 (PiCMOpenDeviceKey.c)
 *     IoOpenDeviceRegistryKey @ 0x1406C54A0 (IoOpenDeviceRegistryKey.c)
 *     IopGetRootDevices @ 0x1406CF708 (IopGetRootDevices.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DA4DC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407446E0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x1407448BC (PiDevCfgInitDeviceContext.c)
 *     _CmGetDeviceCompoundFilters @ 0x140745F48 (_CmGetDeviceCompoundFilters.c)
 *     PiQueryAndAllocateBootResources @ 0x14074856C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140748758 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140748B18 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140749A80 (PiQueryResourceRequirements.c)
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     _CmCreateDeviceWorker @ 0x140768C60 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14076B1A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PpForEachDeviceInstanceDriver @ 0x14076B788 (PpForEachDeviceInstanceDriver.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076C544 (PnpCheckDeviceIdsChanged.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x14076FF88 (_CmSetDeviceRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14077F420 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpDispatchDevice @ 0x1407855F0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140785B98 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14081EFBC (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14081FDD8 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140945E70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140947E30 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14094C428 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A24104 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A245FC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140A2A168 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A2A2CC (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A2C368 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14077F420 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  Pool2 = ExAllocatePool2(256LL, 88LL, 1380994640LL);
  v14 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(Pool2 + 16) = a3;
  *(_DWORD *)(Pool2 + 20) = a4;
  *(_DWORD *)(Pool2 + 24) = a5;
  *(_BYTE *)(Pool2 + 28) = a6;
  *(_QWORD *)(Pool2 + 32) = a7;
  if ( v8 )
  {
    v15 = v8(a1, a2, 1LL);
    if ( v15 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        goto LABEL_15;
      if ( v15 )
        goto LABEL_14;
    }
  }
  v16 = CmOpenDeviceRegKeyWorker(a1, *(_DWORD *)(v14 + 24), *(_BYTE *)(v14 + 28), *(_QWORD *)(v14 + 32), v14 + 40);
  v17 = v16;
  if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v19 == -1073741822) )
  {
LABEL_6:
    if ( v17 >= 0 && a8 )
      *a8 = *(_DWORD *)(v14 + 40);
    goto LABEL_9;
  }
  if ( v19 == -1073741536 )
  {
LABEL_15:
    v17 = *(_DWORD *)v14;
    goto LABEL_6;
  }
  if ( !v19 )
    goto LABEL_6;
LABEL_14:
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)v17;
}
