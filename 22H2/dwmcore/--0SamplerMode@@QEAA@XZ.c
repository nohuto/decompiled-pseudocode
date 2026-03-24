/*
 * XREFs of ??0SamplerMode@@QEAA@XZ @ 0x1800E26C0
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x18004F74C (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800547E0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 * Callees:
 *     <none>
 */

SamplerMode *__fastcall SamplerMode::SamplerMode(SamplerMode *this)
{
  SamplerMode *result; // rax

  *(_WORD *)this = 257;
  result = this;
  *((_BYTE *)this + 2) = 1;
  return result;
}
