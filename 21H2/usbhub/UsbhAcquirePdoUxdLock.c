/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C0058F64
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0054FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhUpdateUxdSettings @ 0x1C005A420 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}
