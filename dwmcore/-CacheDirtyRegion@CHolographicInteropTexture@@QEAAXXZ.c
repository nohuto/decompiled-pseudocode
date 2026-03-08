/*
 * XREFs of ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7288
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??A?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x180021E90 (--A-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C1E64 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1801B3EB0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS_ea_1801B3EB0.c)
 */

void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  _OWORD *v5; // rbx
  __int64 v6; // r8
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 || *(_BYTE *)(v2 + 4420) )
  {
    *((_BYTE *)this + 240) = 1;
  }
  else
  {
    CDirtyRegion::GetDirtyRects(v2, (gsl::details *)v7);
    if ( v7[0] )
    {
      v3 = 0LL;
      v4 = v7[0];
      do
      {
        v5 = (_OWORD *)gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                         (gsl::details *)v7,
                         v3++);
        *(_OWORD *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64 *)this + 15,
                     (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 4,
                     v6) = *v5;
        --v4;
      }
      while ( v4 );
    }
    *((_QWORD *)this + 14) = 0LL;
  }
}
