/*
 * XREFs of EraseBitmap @ 0x1C00296A4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 */

__int64 __fastcall EraseBitmap(HSURF a1)
{
  __int64 v2; // rbx

  GreExtGetObjectW(a1);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, 0, 66);
  return GreSelectBitmap(ghdcMem, v2);
}
