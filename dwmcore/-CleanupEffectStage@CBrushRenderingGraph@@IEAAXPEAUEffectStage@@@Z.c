/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@IEAAXPEAUEffectStage@@@Z @ 0x1800E9A84
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(CBrushRenderingGraph *this, struct EffectStage *a2)
{
  unsigned int i; // edi
  __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v4 = 104LL * i;
    if ( !*((_BYTE *)a2 + v4 + 52) )
    {
      v5 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a2 + v4 + 64);
      if ( v5 )
        (**v5)(v5, 1LL);
      *(_QWORD *)((char *)a2 + v4 + 64) = 0LL;
    }
  }
  *((_DWORD *)a2 + 1) = 0;
}
