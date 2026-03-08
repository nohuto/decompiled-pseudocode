/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C0051470
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C00388EC (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C005137C (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C006B674 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_1C006B678 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
