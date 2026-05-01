/*
 * XREFs of ?ComputeShellFeedsWindowRect@ShellFeedsDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHAEBU2@1111H@Z @ 0x1800C21C0
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C50CC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall ShellFeedsDesktopExperienceView::ComputeShellFeedsWindowRect(
        __int64 a1,
        struct tagRECT *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        RECT *lprcSrc1,
        _DWORD *a8,
        _DWORD *a9,
        RECT *lprc,
        int a11)
{
  char v11; // r14
  int v13; // r8d
  LONG v14; // ecx
  LONG v15; // r8d
  LONG top; // eax
  LONG bottom; // eax
  LONG left; // eax
  LONG right; // eax
  RECT rcSrc2; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-20h] BYREF

  *(_QWORD *)&rcSrc2.left = 0LL;
  v11 = 0;
  if ( a3 )
  {
    v13 = a3 - 1;
    if ( !v13 )
    {
      v15 = a8[3];
      v14 = *a9 + (a9[2] - *a9) / 2 - a4 / 2;
      goto LABEL_9;
    }
    if ( v13 != 1 )
    {
      v14 = *a9 + (a9[2] - *a9) / 2 - a4 / 2;
      v15 = a8[1] - a5;
      goto LABEL_9;
    }
    v14 = *a8 - a4;
  }
  else
  {
    v14 = a8[2];
  }
  v11 = 1;
  v15 = a9[1] + (a9[3] - a9[1]) / 2 - a5 / 2;
LABEL_9:
  rcSrc2.top = v15;
  rcSrc2.right = a4 + v14;
  rcSrc2.bottom = v15 + a5;
  rcSrc2.left = v14;
  if ( v11 )
  {
    top = lprcSrc1->top;
    if ( v15 >= top )
    {
      bottom = lprcSrc1->bottom;
      if ( v15 + a5 > bottom )
      {
        rcSrc2.bottom = lprcSrc1->bottom;
        rcSrc2.top = bottom - a5;
      }
    }
    else
    {
      rcSrc2.top = lprcSrc1->top;
      rcSrc2.bottom = a5 + top;
    }
  }
  else
  {
    left = lprcSrc1->left;
    if ( v14 >= lprcSrc1->left )
    {
      right = lprcSrc1->right;
      if ( a4 + v14 > right )
      {
        rcSrc2.right = lprcSrc1->right;
        rcSrc2.left = right - a4;
      }
    }
    else
    {
      rcSrc2.left = lprcSrc1->left;
      rcSrc2.right = a4 + left;
    }
  }
  if ( !IsRectEmpty(lprc) && IntersectRect(&rcDst, lprc, &rcSrc2) && *(_DWORD *)(a6 + 12) - lprc->bottom <= a11 )
    OffsetRect(&rcSrc2, 0, lprc->top - rcSrc2.bottom);
  *a2 = 0LL;
  IntersectRect(a2, lprcSrc1, &rcSrc2);
  return a2;
}
