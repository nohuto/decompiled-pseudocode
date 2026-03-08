/*
 * XREFs of IopGetRegistryValue @ 0x1406C18D4
 * Callers:
 *     PnpBootDeviceWait @ 0x14038932C (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140392204 (IopReadDumpRegistry.c)
 *     PnpGetRegistryDword @ 0x14039BC5C (PnpGetRegistryDword.c)
 *     IoInitializeLiveDump @ 0x1403A9880 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403AB0B8 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403AE388 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1405567C4 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14055FEC8 (PiDevCfgQueryResolveValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x1406C25D8 (IopBuildFullDriverPath.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1407705F4 (PiFindDevInstMatch.c)
 *     IoOpenDriverRegistryKey @ 0x140771840 (IoOpenDriverRegistryKey.c)
 *     IopGetRegistryValues @ 0x1407804F8 (IopGetRegistryValues.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14078A47C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpPrepareDriverLoading @ 0x14079DAE0 (PnpPrepareDriverLoading.c)
 *     IopIsReportedAlready @ 0x140803270 (IopIsReportedAlready.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopQuerySecureDeviceClassState @ 0x14083B91C (IopQuerySecureDeviceClassState.c)
 *     PnpReadDeviceConfiguration @ 0x140842528 (PnpReadDeviceConfiguration.c)
 *     PipApplyFunctionToServiceInstances @ 0x140847BFC (PipApplyFunctionToServiceInstances.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14084A740 (PnpCheckPossibleBootStartDriver.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 *     PipUpdateSetupInProgress @ 0x14085E948 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PipCheckForDenyExecute @ 0x14086AB0C (PipCheckForDenyExecute.c)
 *     PiGetServiceNameInfo @ 0x140870010 (PiGetServiceNameInfo.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140872CF0 (PipUpdateAsyncOptionsCallback.c)
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x140876750 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiRearrangeDeviceInstances @ 0x14087E564 (PiRearrangeDeviceInstances.c)
 *     NtEnableLastKnownGood @ 0x14087F5A0 (NtEnableLastKnownGood.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094B85C (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140950328 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140954A10 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409553B0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140958180 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095BA4C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095BC74 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095C708 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095C778 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14095D110 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14095E470 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14095EAA0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14095F310 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14095F4F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiInitCacheGroupInformation @ 0x140B572AC (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B57600 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B57DAC (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140B591EC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140B59300 (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140B694FC (PipHardwareConfigInit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
