/*
 * XREFs of UsbhFreeID @ 0x1C0051094
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0031834 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0050E08 (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C00514DC (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00516AC (UsbhGetSerialNumber.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0058428 (UsbhRemoveAndDeletePdo.c)
 *     UsbhQueryParentHubConfig @ 0x1C005B6A8 (UsbhQueryParentHubConfig.c)
 *     UsbhUpdateUxdSettings @ 0x1C005BAE4 (UsbhUpdateUxdSettings.c)
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
