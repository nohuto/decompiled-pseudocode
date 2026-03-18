/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C004AC00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001DEC0 (memmove.c)
 *     memset @ 0x1C001E180 (memset.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  SIZE_T v3; // rdx
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_1C006C422 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, (unsigned __int16)word_1C006C422);
  if ( !P )
    return 3221225626LL;
  memmove(P, a2[1], *(unsigned __int16 *)a2);
  dword_1C006C3CC = 0;
  dword_1C006C3DC = 0;
  dword_1C006C3EC = 0;
  dword_1C006C3FC = 0;
  dword_1C006C40C = 0;
  dword_1C006C44C = 0;
  dword_1C006C45C = 0;
  dword_1C006C46C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006C3D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C006C3E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C006C3F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C006C410 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C006C450 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C006C3C8 = 1;
  dword_1C006C3D8 = 1;
  dword_1C006C3E8 = 1;
  dword_1C006C3F8 = 1;
  qword_1C006C400 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006C408 = 1;
  dword_1C006C418 = 1;
  dword_1C006C41C = 64;
  dword_1C006C448 = 1;
  dword_1C006C458 = 1;
  qword_1C006C460 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C006C468 = 1;
  UsbhWmiInit = 1;
  return result;
}
