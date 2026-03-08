/*
 * XREFs of ??0SamplerMode@@QEAA@XZ @ 0x1801062B4
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18009280C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800939E0 (--$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV-$sp.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180095CCC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
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
