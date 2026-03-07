__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  __int64 v3; // rdx
  void *Pool2; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_1C006B462 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1112885333LL);
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2[1], *(unsigned __int16 *)a2);
  dword_1C006B40C = 0;
  dword_1C006B41C = 0;
  dword_1C006B42C = 0;
  dword_1C006B43C = 0;
  dword_1C006B44C = 0;
  dword_1C006B48C = 0;
  dword_1C006B49C = 0;
  dword_1C006B4AC = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006B410 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006B420 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C006B430 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C006B450 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C006B490 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C006B408 = 1;
  dword_1C006B418 = 1;
  dword_1C006B428 = 1;
  dword_1C006B438 = 1;
  qword_1C006B440 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006B448 = 1;
  dword_1C006B458 = 1;
  dword_1C006B45C = 64;
  dword_1C006B488 = 1;
  dword_1C006B498 = 1;
  qword_1C006B4A0 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006B4A8 = 1;
  UsbhWmiInit = 1;
  return result;
}
