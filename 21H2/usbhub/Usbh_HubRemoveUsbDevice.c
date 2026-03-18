/*
 * XREFs of Usbh_HubRemoveUsbDevice @ 0x1C003A78C
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00015D0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubRemoveUsbDevice(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
