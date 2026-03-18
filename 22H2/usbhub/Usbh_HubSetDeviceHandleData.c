/*
 * XREFs of Usbh_HubSetDeviceHandleData @ 0x1C005870C
 * Callers:
 *     UsbhPdoSetDeviceData @ 0x1C0057B50 (UsbhPdoSetDeviceData.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
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
