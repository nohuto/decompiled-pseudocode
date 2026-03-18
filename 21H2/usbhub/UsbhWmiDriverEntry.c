/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C0049850
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001F540 (memmove.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  __int64 v3; // rdx
  void *Pool2; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_1C006A462 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1112885333LL);
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2[1], *(unsigned __int16 *)a2);
  dword_1C006A40C = 0;
  dword_1C006A41C = 0;
  dword_1C006A42C = 0;
  dword_1C006A43C = 0;
  dword_1C006A44C = 0;
  dword_1C006A48C = 0;
  dword_1C006A49C = 0;
  dword_1C006A4AC = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006A410 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006A420 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C006A430 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C006A450 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C006A490 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C006A408 = 1;
  dword_1C006A418 = 1;
  dword_1C006A428 = 1;
  dword_1C006A438 = 1;
  qword_1C006A440 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006A448 = 1;
  dword_1C006A458 = 1;
  dword_1C006A45C = 64;
  dword_1C006A488 = 1;
  dword_1C006A498 = 1;
  qword_1C006A4A0 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006A4A8 = 1;
  UsbhWmiInit = 1;
  return result;
}
