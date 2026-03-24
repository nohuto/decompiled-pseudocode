/*
 * XREFs of UsbhBusIfLocationReference @ 0x1C004CB70
 * Callers:
 *     UsbhBusifGetLocationInterface @ 0x1C004CE3C (UsbhBusifGetLocationInterface.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement(result + 855);
  return result;
}
