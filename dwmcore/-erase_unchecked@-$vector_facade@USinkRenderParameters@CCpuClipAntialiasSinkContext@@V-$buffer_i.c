/*
 * XREFs of ?erase_unchecked@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@0@Z @ 0x1801FBF54
 * Callers:
 *     ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1801FB9DC (--$swap_generic@V-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 * Callees:
 *     ?clear_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800DE3AC (-clear_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl.c)
 */

_QWORD *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::erase_unchecked(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*a3 - *a1) >> 3);
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v5,
    0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*a4 - *a3) >> 3));
  result = a2;
  *a2 = *a1 + 40 * v5;
  return result;
}
