/*
 * XREFs of ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x18049A460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1804931D0 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1804952F8 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x18049B864 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 */

void __fastcall CDropFeedbackItem::GetVisualRect(__int64 a1, int a2, struct tagRECT *a3)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  float v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int v10[4]; // [rsp+28h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc2; // [rsp+48h] [rbp-18h] BYREF

  *(_OWORD *)&Points[0].x = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 1LL, Points);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, Points, 2u);
  if ( a2 )
    *a3 = *(struct tagRECT *)MapRelativeRect(v10, (int *)(a1 + 108), (_OWORD *)(a1 + 92), (int *)Points);
  else
    CopyRect(a3, (const RECT *)Points);
  rcSrc2 = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 0LL, &rcSrc2);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, (LPPOINT)&rcSrc2, 2u);
  IntersectRect(a3, a3, &rcSrc2);
  v6 = *(_DWORD *)(a1 + 200);
  v7 = *(_DWORD *)(a1 + 204);
  v10[0] = a3->left;
  v10[1] = a3->top;
  v10[2] = a3->right;
  v10[3] = a3->bottom;
  v8 = *(_DWORD *)(a1 + 212) - v7;
  v9[0] = (float)((float)(*(_DWORD *)(a1 + 208) - v6) * 0.5) + (float)v6;
  v9[1] = (float)((float)v8 * 0.5) + (float)v7;
  ZoomRect(
    (const struct Geometry::CRect *)v10,
    (const struct Geometry::CPointFloat *)v9,
    (int)(*(double *)(a1 + 176) * 100.0),
    a3);
}
