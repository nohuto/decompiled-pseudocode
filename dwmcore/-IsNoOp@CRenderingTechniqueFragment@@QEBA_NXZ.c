/*
 * XREFs of ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180030C4C
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x18002DF64 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180030C4C (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180030C4C (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::IsNoOp(CRenderingTechniqueFragment *this)
{
  char v2; // bl
  __int64 v3; // rcx
  CRenderingTechniqueFragment *v5; // rcx

  v2 = 0;
  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 4)) )
    {
      v5 = *(CRenderingTechniqueFragment **)(*((_QWORD *)this + 4) + 8LL);
      if ( !v5 || CRenderingTechniqueFragment::IsNoOp(v5) )
        return 1;
    }
  }
  return v2;
}
