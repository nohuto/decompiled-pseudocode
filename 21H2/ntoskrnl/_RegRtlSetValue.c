/*
 * XREFs of _RegRtlSetValue @ 0x1406D5A30
 * Callers:
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CEA04 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407446E0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x14076CA78 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x14076FF88 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14081D304 (DrvDbSetRegValueMappedProperty.c)
 *     _SysCtxOpenControlSet @ 0x140827DE0 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x140A22D7C (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A255C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A27B38 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A2C368 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A2C72C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A2C910 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A2CD54 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A2D248 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A2F5D0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A2FD74 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
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
