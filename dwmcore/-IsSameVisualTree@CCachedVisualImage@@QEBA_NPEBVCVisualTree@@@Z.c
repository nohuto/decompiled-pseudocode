/*
 * XREFs of ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x1800B4948
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800B4190 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B45F0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B45F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::IsSameVisualTree(CCachedVisualImage *this, const struct CVisualTree *a2)
{
  return (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 216LL))(this) == (_QWORD)a2;
}
