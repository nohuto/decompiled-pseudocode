/*
 * XREFs of ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02445B4
 * Callers:
 *     xxxSetScrollBar @ 0x1C00F5D08 (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1C0245344 (xxxEndScroll.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0063D00 (CalcSBStuff.c)
 *     DrawThumb2 @ 0x1C0157C84 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0157E0C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C0157EDC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawThumb(struct tagWND *a1, struct tagSBCALC *a2, unsigned int a3)
{
  HDC DCEx; // rbp
  __int64 v6; // r8
  char WndSBDisableFlags; // si
  HBRUSH ColorObjects; // rbx
  __int64 v9; // rdi
  int v10[16]; // [rsp+30h] [rbp-78h] BYREF

  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff((__int64)a1, v10, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v6);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (__int64)DCEx);
  v9 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, v10, DCEx, ColorObjects, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v9);
  _ReleaseDC(DCEx);
}
