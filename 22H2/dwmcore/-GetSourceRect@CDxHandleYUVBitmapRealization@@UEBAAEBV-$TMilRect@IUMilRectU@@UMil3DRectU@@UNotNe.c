/*
 * XREFs of ?GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802B43D8
 * Callers:
 *     ?GetSourceRect@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801231A0 (-GetSourceRect@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAAEBV-$TMilRect@IUMilRectU@@UMil3DR.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleYUVBitmapRealization::GetSourceRect(__int64 a1)
{
  return CBitmapRealization::CalcSourceRect(a1 - 504);
}
