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
