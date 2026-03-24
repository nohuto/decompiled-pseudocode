/*
 * XREFs of EraseBitmap @ 0x1C0029604
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 */

__int64 __fastcall EraseBitmap(HSURF a1)
{
  __int64 v2; // rbx

  GreExtGetObjectW(a1);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, 0, 66);
  return GreSelectBitmap(ghdcMem, v2);
}
