CBlurRenderingGraph *__fastcall CBlurRenderingGraph::CBlurRenderingGraph(
        CBlurRenderingGraph *this,
        const struct CResourceTag *a2,
        const struct D2D_VECTOR_2F *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a4)
{
  __int64 v4; // rcx
  __int128 *v5; // r10
  __int128 v6; // xmm0
  CBlurRenderingGraph *result; // rax
  int v8; // r9d
  _QWORD *v9; // r8

  CBrushRenderingGraph::CBrushRenderingGraph(this);
  *(_QWORD *)(v4 + 216) = v4 + 240;
  *(_QWORD *)(v4 + 224) = v4 + 240;
  *(_QWORD *)(v4 + 232) = v4 + 512;
  *(_QWORD *)v4 = &CExternalEffectGraph::`vftable';
  *(_QWORD *)(v4 + 512) = v4 + 536;
  *(_QWORD *)(v4 + 520) = v4 + 536;
  *(_QWORD *)(v4 + 528) = v4 + 1560;
  v6 = *v5;
  *(_QWORD *)v4 = &CBlurRenderingGraph::`vftable';
  result = (CBlurRenderingGraph *)v4;
  *(_DWORD *)(v4 + 1584) = v8;
  *(_OWORD *)(v4 + 1560) = v6;
  *(_QWORD *)(v4 + 1576) = *v9;
  return result;
}
