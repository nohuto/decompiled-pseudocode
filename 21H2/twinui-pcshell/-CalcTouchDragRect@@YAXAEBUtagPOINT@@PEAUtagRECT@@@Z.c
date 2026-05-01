/*
 * XREFs of ?CalcTouchDragRect@@YAXAEBUtagPOINT@@PEAUtagRECT@@@Z @ 0x180494CC0
 * Callers:
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180497C8C (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

void __fastcall CalcTouchDragRect(const struct tagPOINT *a1, struct tagRECT *a2)
{
  LONG x; // eax
  LONG y; // ecx
  struct tagRECT rc; // [rsp+20h] [rbp-28h] BYREF

  x = a1->x;
  y = a1->y;
  rc.left = x;
  rc.top = y;
  rc.right = x + 1;
  rc.bottom = y + 1;
  InflateRect(&rc, 270, 270);
  *a2 = rc;
}
