/*
 * XREFs of ??0EffectStage@@QEAA@XZ @ 0x1800C9C10
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180056BE8 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??0EffectInput@@QEAA@XZ @ 0x180057F5C (--0EffectInput@@QEAA@XZ.c)
 */

EffectStage *__fastcall EffectStage::EffectStage(EffectStage *this)
{
  EffectInput *v1; // rdi
  __int64 v3; // rsi

  *(_DWORD *)this = 0;
  v1 = (EffectStage *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  v3 = 4LL;
  do
  {
    EffectInput::EffectInput(v1);
    v1 = (EffectInput *)((char *)v1 + 128);
    --v3;
  }
  while ( v3 );
  return this;
}
