/*
 * XREFs of Usbh_HubGetUsbDescriptors @ 0x1C003B174
 * Callers:
 *     Usbh_HubRestoreDevice @ 0x1C001A81C (Usbh_HubRestoreDevice.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubGetUsbDescriptors(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, __int64, __int64, __int64, __int64); // r10

  v9 = FdoExt(a1);
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64))*((_QWORD *)v9 + 534);
  if ( v10 )
    return v10(*((_QWORD *)v9 + 529), a2, a3, a4, a5, a6);
  else
    return 3221225474LL;
}
