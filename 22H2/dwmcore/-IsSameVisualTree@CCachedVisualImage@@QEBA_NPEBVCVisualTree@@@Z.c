/*
 * XREFs of ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x1800B4E28
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800B4670 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B4AD0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B4AD0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::IsSameVisualTree(CCachedVisualImage *this, const struct CVisualTree *a2)
{
  return (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 216LL))(this) == (_QWORD)a2;
}
