/*
 * XREFs of Usbh_HubGetDeviceBusContext @ 0x1C002D8C4
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x1C002B0CC (UsbhGetDeviceBusInfo.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubGetDeviceBusContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx

  v5 = FdoExt(a1);
  v6 = 0;
  if ( *((_QWORD *)v5 + 543) )
    *a3 = (*((__int64 (__fastcall **)(_QWORD, __int64))v5 + 543))(*((_QWORD *)v5 + 529), a2);
  else
    return (unsigned int)-1073741822;
  return v6;
}
