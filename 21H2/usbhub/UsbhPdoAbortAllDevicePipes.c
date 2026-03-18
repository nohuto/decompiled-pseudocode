/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x1C00029DC
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001178 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     UsbhDerefPdoDeviceHandle @ 0x1C0003470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C00036C0 (UsbhRefPdoDeviceHandle.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax

  result = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  v5 = result;
  if ( result )
  {
    v6 = FdoExt(a1);
    if ( *(_QWORD *)(v6 + 4512) )
      (*(void (__fastcall **)(_QWORD, __int64))(v6 + 4512))(*(_QWORD *)(v6 + 4232), v5);
    return UsbhDerefPdoDeviceHandle(a1, v5, a2, 1148346977LL);
  }
  return result;
}
