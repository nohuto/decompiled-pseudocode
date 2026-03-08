/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1406D3B3C
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x140681190 (PpForEachDeviceInstanceDriver.c)
 *     PnpCheckDeviceIdsChanged @ 0x140684A9C (PnpCheckDeviceIdsChanged.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140685094 (PnpDeviceObjectToDeviceInstance.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     _PnpDispatchDevice @ 0x1406C8E70 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x1406F6240 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1406F6B60 (PiQueryResourceRequirements.c)
 *     _CmGetDeviceCompoundFilters @ 0x140751AEC (_CmGetDeviceCompoundFilters.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     IoOpenDeviceRegistryKey @ 0x140771B00 (IoOpenDeviceRegistryKey.c)
 *     _CmCreateDeviceWorker @ 0x1407893E0 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14078A47C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407FD090 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140803270 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140803B38 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopGetRootDevices @ 0x14081CBA8 (IopGetRootDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x140847BFC (PipApplyFunctionToServiceInstances.c)
 *     IopReleaseDeviceResources @ 0x140866C4C (IopReleaseDeviceResources.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086A240 (_CmSetDeviceRegPropWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x140876144 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140876FB8 (PiDevCfgEnumDeviceKeys.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140954A10 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140956BCC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095B6D8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140A64810 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A64974 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A66AD8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
