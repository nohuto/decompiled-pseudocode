/*
 * XREFs of ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180092E30
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C550 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180011308 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x18003113C (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x180092C64 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B45F0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B45F0.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800B6320 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BCA0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024A460 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180092FF0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, struct IBitmapResource *a2)
{
  __int64 *v2; // rsi
  char v5; // al
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  bool v9; // bp
  void (__fastcall *v10)(struct IBitmapResource *, __int64 *); // r14
  CDrawListBitmap *result; // rax
  __int64 v12; // rcx

  v2 = (__int64 *)((char *)this + 8);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  v5 = (*(__int64 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = *v2;
  v7 = v5 == 0;
  v8 = *(_QWORD *)a2;
  v9 = !v7;
  *v2 = 0LL;
  v10 = *(void (__fastcall **)(struct IBitmapResource *, __int64 *))(v8 + 64);
  if ( v6 )
  {
    v12 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v10(a2, v2);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(this, a2);
  result = this;
  *((_BYTE *)this + 16) = v9;
  return result;
}
