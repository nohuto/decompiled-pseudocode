/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C00521F0
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0039180 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C00520FC (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C006C5D4 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_1C006C5D8 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
