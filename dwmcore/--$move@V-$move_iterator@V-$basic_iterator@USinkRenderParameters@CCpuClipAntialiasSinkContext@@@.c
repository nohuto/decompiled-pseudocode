/*
 * XREFs of ??$move@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@0@0V12@@Z @ 0x1801FB600
 * Callers:
 *     ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1801FB9DC (--$swap_generic@V-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 * Callees:
 *     ??$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@$$QEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@Z @ 0x1801FB2BC (--$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@-$vector_facade@USinkRe.c)
 */

__int64 **__fastcall std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3,
        __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 *v6; // rsi
  __int64 **result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v6 = *a3;
  while ( v4 != v6 )
  {
    v9 = a4[1];
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::insert_unchecked<CCpuClipAntialiasSinkContext::SinkRenderParameters>(
      a4,
      &v10,
      &v9,
      v4);
    v4 += 5;
  }
  result = a1;
  *a1 = a4;
  return result;
}
