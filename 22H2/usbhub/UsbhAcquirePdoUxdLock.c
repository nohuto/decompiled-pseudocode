/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C005A634
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0056680 (UsbhPdoPnp_QueryId.c)
 *     UsbhUpdateUxdSettings @ 0x1C005BAE4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}
