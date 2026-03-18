/*
 * XREFs of UsbhFreeID @ 0x1C004FAE8
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030490 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C004F874 (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C004FF10 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00500D4 (UsbhGetSerialNumber.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0056D50 (UsbhRemoveAndDeletePdo.c)
 *     UsbhQueryParentHubConfig @ 0x1C005A00C (UsbhQueryParentHubConfig.c)
 *     UsbhUpdateUxdSettings @ 0x1C005A420 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
