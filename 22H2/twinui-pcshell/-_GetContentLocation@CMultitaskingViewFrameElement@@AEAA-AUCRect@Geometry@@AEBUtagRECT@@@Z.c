/*
 * XREFs of ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x18041B364
 * Callers:
 *     ?HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18041A1A0 (-HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x18041B500 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x18041B7A4 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x18041BA00 (-v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804183C4 (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

struct tagRECT *__fastcall CMultitaskingViewFrameElement::_GetContentLocation(
        __int64 a1,
        struct tagRECT *a2,
        _DWORD *a3)
{
  int v5; // edx
  int v6; // edx
  LONG top; // ecx
  _DWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  v9[0] = *a3;
  v9[1] = a3[1];
  v9[2] = a3[2];
  v9[3] = a3[3];
  RelativeMargins::ApplyMargins((double *)(a1 + 296), (__int64)a2, v9);
  v5 = *(_DWORD *)(a1 + 328);
  if ( v5 > 0 && a2->right - a2->left > v5 )
    InflateRect(a2, (v5 + a2->left - a2->right) / 2, 0);
  v6 = *(_DWORD *)(a1 + 332);
  if ( v6 > 0 )
  {
    top = a2->top;
    if ( a2->bottom - top > v6 )
      InflateRect(a2, 0, (v6 + top - a2->bottom) / 2);
  }
  return a2;
}
