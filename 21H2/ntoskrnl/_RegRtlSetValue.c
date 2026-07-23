/*
 * XREFs of _RegRtlSetValue @ 0x140768CB4
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140731400 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744338 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x1407469A0 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140759440 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1407664E4 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxOpenControlSet @ 0x1407A4D24 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC3F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B06F0 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6278 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6C54 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7318 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x140974B24 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975C30 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140977A70 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097BC28 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097BDDC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097C104 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
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
