/*
 * XREFs of ?GetVisualRect@CDragVisual@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180495290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

BOOL __fastcall CDragVisual::GetVisualRect(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  __int128 v3; // xmm0
  HWND v4; // rcx
  struct tagPOINT Points[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(a1 + 208);
  v4 = *(HWND *)(a1 + 120);
  *(_OWORD *)&Points[0].x = v3;
  MapWindowPoints(v4, 0LL, Points, 2u);
  return CopyRect(a3, (const RECT *)Points);
}
