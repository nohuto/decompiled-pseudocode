/*
 * XREFs of ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802254C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045610 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x1802255C4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

__int64 __fastcall CCursorVisual::GetContentBounds(CCursorVisual *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContentBounds = CVisual::GetContentBounds((char *)this, (__int64)a2);
  v5 = ContentBounds;
  if ( ContentBounds >= 0 )
  {
    if ( CCursorVisual::IsVisible(this) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        a2,
        (float *)(*((_QWORD *)this + 90) + 120LL));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)ContentBounds);
    return v5;
  }
}
