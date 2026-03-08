/*
 * XREFs of ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180029AA0
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800299F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ??0CBlurRenderingGraph@@AEAA@AEBVCResourceTag@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800D181C (--0CBlurRenderingGraph@@AEAA@AEBVCResourceTag@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATI.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802673E8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     <none>
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::CBrushRenderingGraph(CBrushRenderingGraph *this)
{
  CBrushRenderingGraph *result; // rax

  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)((char *)this + 36) = 4LL;
  *((_QWORD *)this + 18) = (char *)this + 176;
  *((_QWORD *)this + 19) = (char *)this + 176;
  *((_DWORD *)this + 40) = 1;
  *(_QWORD *)((char *)this + 164) = 1LL;
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  return result;
}
