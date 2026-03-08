/*
 * XREFs of ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180205CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateRenderingEffectWorker@VCProjectedShadowRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1801FE2C0 (--$CreateRenderingEffectWorker@VCProjectedShadowRenderingEffect@@@CCommonRenderingEffectFactory@.c)
 */

__int64 __fastcall CProjectedShadowRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  return CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CProjectedShadowRenderingEffect>(
           (gsl::details *)&v4,
           a3);
}
