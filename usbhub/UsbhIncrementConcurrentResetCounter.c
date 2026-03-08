/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x1C003D358
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( (int)++result[1316] > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
