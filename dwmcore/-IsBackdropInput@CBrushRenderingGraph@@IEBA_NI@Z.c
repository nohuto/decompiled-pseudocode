/*
 * XREFs of ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EC70
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x18002DF64 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  struct CBrush *NamedInput; // rax
  char v3; // bl

  NamedInput = CBrushRenderingGraph::GetNamedInput(this, a2);
  v3 = 0;
  if ( NamedInput )
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 56LL))(NamedInput, 9LL) != 0;
  return v3;
}
