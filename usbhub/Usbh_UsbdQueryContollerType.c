/*
 * XREFs of Usbh_UsbdQueryContollerType @ 0x1C002E45C
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_UsbdQueryContollerType(__int64 a1)
{
  _DWORD *result; // rax
  __int64 (__fastcall *v2)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *); // rdi

  result = FdoExt(a1);
  if ( *((_WORD *)result + 2400) == 3 )
  {
    v2 = (__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *))*((_QWORD *)result + 580);
    if ( v2 )
      return (_DWORD *)v2(
                         *((_QWORD *)result + 570),
                         result + 1306,
                         result + 1307,
                         (char *)result + 5230,
                         result + 1308,
                         (char *)result + 5233,
                         (char *)result + 5234,
                         (char *)result + 5235);
  }
  return result;
}
