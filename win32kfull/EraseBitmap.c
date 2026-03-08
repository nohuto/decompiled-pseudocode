/*
 * XREFs of EraseBitmap @ 0x1C001D688
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 */

__int64 __fastcall EraseBitmap(__int64 a1)
{
  __int64 v2; // rbx

  GreExtGetObjectW(a1);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, 0, 0, 66);
  return GreSelectBitmap(ghdcMem, v2);
}
