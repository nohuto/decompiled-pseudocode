/*
 * XREFs of IopGetRegistryValue @ 0x14068CE78
 * Callers:
 *     PnpBootDeviceWait @ 0x14037519C (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140393E84 (IopReadDumpRegistry.c)
 *     PnpGetRegistryDword @ 0x1403A070C (PnpGetRegistryDword.c)
 *     IoInitializeLiveDump @ 0x1403AE5D0 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403AFE08 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B06AC (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403B3148 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140558C64 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x140562368 (PiDevCfgQueryResolveValue.c)
 *     IoOpenDriverRegistryKey @ 0x14068A0E0 (IoOpenDriverRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407904EC (PnpGetDeviceResourcesFromRegistry.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1407C2544 (PiFindDevInstMatch.c)
 *     IopGetRegistryValues @ 0x1407CF598 (IopGetRegistryValues.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8FDC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     IopIsReportedAlready @ 0x140837110 (IopIsReportedAlready.c)
 *     IopQuerySecureDeviceClassState @ 0x14083CC0C (IopQuerySecureDeviceClassState.c)
 *     PnpReadDeviceConfiguration @ 0x140845368 (PnpReadDeviceConfiguration.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084A26C (PipApplyFunctionToServiceInstances.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14084DED0 (PnpCheckPossibleBootStartDriver.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 *     PipUpdateSetupInProgress @ 0x140862910 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x140862E64 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     PipCheckForDenyExecute @ 0x140867174 (PipCheckForDenyExecute.c)
 *     PiGetServiceNameInfo @ 0x140872530 (PiGetServiceNameInfo.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140875BB0 (PipUpdateAsyncOptionsCallback.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyService @ 0x140879D2C (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BCA4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E5B4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     PiRearrangeDeviceInstances @ 0x140883308 (PiRearrangeDeviceInstances.c)
 *     NtEnableLastKnownGood @ 0x140884340 (NtEnableLastKnownGood.c)
 *     IopSafebootDriverLoad @ 0x1409456F4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E87C (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140953348 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x140954DC8 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140957A30 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409583D0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B1A0 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EA6C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EC94 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095F728 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140960130 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960200 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140961490 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140961AC0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961B9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140962330 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962510 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiInitCacheGroupInformation @ 0x140B3F8E8 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3FC3C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x140B40180 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B403E8 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140B41824 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140B41938 (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140B6D528 (PipHardwareConfigInit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  void *Pool2; // rdi
  NTSTATUS v13; // ebx
  void *v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  ValueName = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 1699442505LL);
    if ( Pool2 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool2;
        return 0;
      }
      ExFreePoolWithTag(Pool2, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = (void *)ExAllocatePool2(256LL, ResultLength, 1699442505LL);
      if ( v14 )
      {
        v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
        if ( v15 < 0 )
        {
          ExFreePoolWithTag(v14, 0);
          return v15;
        }
        *a4 = v14;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
