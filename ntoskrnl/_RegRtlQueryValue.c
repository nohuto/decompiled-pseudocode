/*
 * XREFs of _RegRtlQueryValue @ 0x1406D3E98
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1406C3C74 (_CmIsDeviceInContainer.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C5750 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C8298 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _PnpRegQueryValueIndirect @ 0x140769420 (_PnpRegQueryValueIndirect.c)
 *     PnpGetServiceStartType @ 0x14078C7C0 (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407FD090 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IopGetOriginalServiceName @ 0x1408031F4 (IopGetOriginalServiceName.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x14081B840 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 *     _SysCtxOpenControlSet @ 0x140852308 (_SysCtxOpenControlSet.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140865F5C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14087E160 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14094EFE0 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140955668 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140956BCC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14096D218 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14096D7B8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x14096DBF4 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140A62D10 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A68A5C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140A68EF4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A690A0 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6924C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rsi
  NTSTATUS inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v16; // eax
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      v16 = *a5 + 12;
      if ( v16 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a5 + 12;
      Pool2 = ExAllocatePool2(256LL, v16, 1279739218LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)inited;
}
