/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1406CE174
 * Callers:
 *     IoOpenDeviceRegistryKey @ 0x140687CA0 (IoOpenDeviceRegistryKey.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC880 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDispatchDevice @ 0x1406CD0C0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD68C (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE2A4 (_CmOpenDeviceRegKeyWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FF34 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140790134 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407904EC (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140790854 (PiQueryResourceRequirements.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140798CA4 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x140798D00 (PnpCheckDeviceIdsChanged.c)
 *     PiCMOpenDeviceKey @ 0x1407BEE44 (PiCMOpenDeviceKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFCF8 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateDeviceWorker @ 0x1407D7D8C (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8E64 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8FDC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceCompoundFilters @ 0x1407FDB00 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080C9B4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IopGetRootDevices @ 0x1408144D8 (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x1408186D4 (IopWriteAllocatedResourcesToRegistry.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140837110 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1408446E0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084A26C (PipApplyFunctionToServiceInstances.c)
 *     IopReleaseDeviceResources @ 0x140869C4C (IopReleaseDeviceResources.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CE70 (_CmSetDeviceRegPropWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087C0D0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x14087CCD8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D4F4 (PiDevCfgEnumDeviceKeys.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140957A30 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140959BEC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095E6F8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961B9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61F64 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A6244C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140A67510 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A67674 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A697D8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE2A4 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rbp
  __int64 Pool2; // rax
  char *v14; // rdi
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // rax
  int v19; // ecx

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  Pool2 = ExAllocatePool2(256LL, 88LL, 1380994640LL);
  v14 = (char *)Pool2;
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
      {
        v16 = *(_DWORD *)v14;
        v17 = v14 + 40;
        goto LABEL_6;
      }
      if ( v15 )
        goto LABEL_15;
    }
  }
  v16 = CmOpenDeviceRegKeyWorker(a1, *((_DWORD *)v14 + 6), v14[28], *((_QWORD *)v14 + 4), (__int64)(v14 + 40));
  v17 = v14 + 40;
  if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v17 = v14 + 40, v19 == -1073741822) )
  {
LABEL_6:
    if ( v16 >= 0 && a8 )
      *a8 = *v17;
    goto LABEL_9;
  }
  if ( v19 == -1073741536 )
  {
    v16 = *(_DWORD *)v14;
    goto LABEL_6;
  }
  if ( !v19 )
    goto LABEL_6;
LABEL_15:
  v16 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v16;
}
