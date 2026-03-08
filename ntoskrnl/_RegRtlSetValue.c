/*
 * XREFs of _RegRtlSetValue @ 0x140784FE4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140687D54 (_PnpSetPropertyWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407FFCCC (DrvDbSetRegValueMappedProperty.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _SysCtxOpenControlSet @ 0x140852308 (_SysCtxOpenControlSet.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086A240 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14087C668 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _PnpCtxRegSetValue @ 0x140A5DEF4 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A60700 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A62D10 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A66AD8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A66EA4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A67080 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A674EC (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
