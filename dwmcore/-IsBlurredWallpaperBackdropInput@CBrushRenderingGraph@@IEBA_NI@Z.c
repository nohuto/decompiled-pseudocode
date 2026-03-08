/*
 * XREFs of ?IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EBD8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsBlurredWallpaperBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  struct CBrush *NamedInput; // rax
  char v3; // bl

  NamedInput = CBrushRenderingGraph::GetNamedInput(this, a2);
  v3 = 0;
  if ( NamedInput )
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 56LL))(
             NamedInput,
             15LL) != 0;
  return v3;
}
