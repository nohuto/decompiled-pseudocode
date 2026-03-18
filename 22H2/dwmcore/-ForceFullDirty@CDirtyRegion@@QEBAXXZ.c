/*
 * XREFs of ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CDD24
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008BA8C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8994 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EB650 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F9888 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004D0C4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C28C4 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800C4C70 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDirtyRegion::ForceFullDirty(CDirtyRegion *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, gsl::details *, char *); // rbx
  gsl::details *DirtyRects; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 4420) )
  {
    CDirtyRegion::SetFullDirty(this);
    if ( COcclusionContext::IsCurrent((CDirtyRegion *)((char *)this + 16)) )
    {
      v2 = *(_QWORD *)this;
      v3 = *(void (__fastcall **)(__int64, gsl::details *, char *))(**(_QWORD **)this + 200LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)this, (gsl::details *)v5);
      v3(v2, DirtyRects, (char *)this + 16);
    }
  }
}
