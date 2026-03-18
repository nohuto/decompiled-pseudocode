/*
 * XREFs of Usbh_HubSetDeviceHandleData @ 0x1C0057034
 * Callers:
 *     UsbhPdoSetDeviceData @ 0x1C0056490 (UsbhPdoSetDeviceData.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubSetDeviceHandleData(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx

  v5 = FdoExt(a1);
  v6 = 0;
  if ( *((_QWORD *)v5 + 547) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64))v5 + 547))(*((_QWORD *)v5 + 529), a2, a3);
  else
    return (unsigned int)-1073741822;
  return v6;
}
