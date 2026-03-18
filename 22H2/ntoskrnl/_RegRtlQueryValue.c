/*
 * XREFs of _RegRtlQueryValue @ 0x1406CE918
 * Callers:
 *     PnpGetServiceStartType @ 0x14068F410 (PnpGetServiceStartType.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C948C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407956A8 (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     _CmIsDeviceInContainer @ 0x14079B710 (_CmIsDeviceInContainer.c)
 *     _PnpRegQueryValueIndirect @ 0x1407BB240 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1407C6530 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080C9B4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x140813170 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082CAC0 (_CmDeviceClassesSubkeyCallback.c)
 *     IopGetOriginalServiceName @ 0x140837094 (IopGetOriginalServiceName.c)
 *     _SysCtxOpenControlSet @ 0x140856138 (_SysCtxOpenControlSet.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140876094 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14087798C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x140877BAC (_PnpCtxRegQueryValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088161C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140882F04 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140952000 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140958688 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140959BEC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1409707D8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970C14 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140A65A10 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A6B75C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140A6BBF4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A6BDA0 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6BF4C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D224 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
