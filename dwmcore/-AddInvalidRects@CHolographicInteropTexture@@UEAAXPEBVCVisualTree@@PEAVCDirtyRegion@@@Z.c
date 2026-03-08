/*
 * XREFs of ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1802A7160
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C680 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800C4210 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::AddInvalidRects(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi

  v3 = (__int64 *)((char *)this + 56);
  if ( *((_BYTE *)this + 176) )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 176) = 0;
  }
  else
  {
    v6 = *v3;
    v7 = *((_QWORD *)this + 8);
    while ( v6 != v7 )
    {
      CDirtyRegion::Add((__int64)a3, 0LL, 0LL, v6);
      v6 += 16LL;
    }
  }
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear(v3);
}
