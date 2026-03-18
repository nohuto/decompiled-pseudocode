/*
 * XREFs of Usbh_HubDerefDeviceHandle @ 0x1C002D868
 * Callers:
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002BAD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C002C898 (UsbhInitializeTtHub.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C002FB9C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubDerefDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 559) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))result + 559))(
                       *((_QWORD *)result + 529),
                       a2,
                       a3,
                       a4);
  return result;
}
