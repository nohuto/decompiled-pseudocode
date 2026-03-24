/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18004FE80
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180056BE8 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1800500C4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C5A94 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v15; // r10
  int InputBrushParameters; // eax
  unsigned int v18; // ecx

  v11 = 0;
  v12 = 44LL * a5;
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * a4);
  if ( !*(_BYTE *)(v15 + v12 + 72) )
    a7 = a6;
  EffectInput::operator=(a8, *a7 + ((unsigned __int64)*(unsigned int *)(v15 + v12 + 68) << 7));
  if ( !*((_BYTE *)a8 + 68) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(a1, a2, a3, a4, a5, a8);
    v11 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, InputBrushParameters, 0x535u, 0LL);
  }
  return v11;
}
