/*
 * XREFs of ?erase@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@0@Z @ 0x1801B31C8
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rbx

  v6 = (*a3 - *a1) >> 3;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v6,
    (__int64)(*a4 - *a3) >> 3);
  *a2 = *a1 + 8 * v6;
  return a2;
}
