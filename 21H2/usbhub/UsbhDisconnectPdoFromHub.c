/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x1C002990C
 * Callers:
 *     UsbhDeletePdo @ 0x1C00537BC (UsbhDeletePdo.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *result; // rax

  v2 = *((_QWORD *)PdoExt(a1) + 148);
  FdoExt(v2);
  Log(v2, 8, 1346653997, a1, v2);
  result = PdoExt(a1);
  *((_QWORD *)result + 148) = 0LL;
  return result;
}
