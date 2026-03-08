/*
 * XREFs of ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022C1A4
 * Callers:
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 * Callees:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0013EE8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     DrawThumb2 @ 0x1C0013FB8 (DrawThumb2.c)
 *     GetWndSBDisableFlags @ 0x1C00D9F98 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C00D9FC8 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall xxxDrawThumb(struct tagWND *a1, struct tagSBCALC *a2, unsigned int a3)
{
  HDC DCEx; // rbp
  char WndSBDisableFlags; // si
  HBRUSH ColorObjects; // rbx
  __int64 v8; // rdi
  _DWORD v9[16]; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v9, 0, sizeof(v9));
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff((__int64)a1, (__int64)v9, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
  ColorObjects = (HBRUSH)xxxGetColorObjects(a1, (HWND)DCEx);
  v8 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((__int64)a1, v9, DCEx, ColorObjects, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v8);
  _ReleaseDC(DCEx);
}
