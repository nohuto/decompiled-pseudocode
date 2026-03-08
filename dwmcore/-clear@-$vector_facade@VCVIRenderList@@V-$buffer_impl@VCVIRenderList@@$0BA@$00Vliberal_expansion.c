/*
 * XREFs of ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C1DA0
 * Callers:
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C1CD0 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020C844 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xCCCCCCCCCCCCCCCDuLL;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3) )
    return detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
