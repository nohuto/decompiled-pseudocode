/*
 * XREFs of ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x1801FBC5C
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800B1030 (-reserve_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEnt.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FBB78 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 * Callees:
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090BB4 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ??$swap@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1801FB95C (--$swap@$09@-$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@det.c)
 *     ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1801FB9DC (--$swap_generic@V-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 */

_QWORD *__fastcall CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rdi

  v2 = *a2;
  v3 = a1 + 1;
  *a2 = 0LL;
  v4 = a2 + 1;
  *a1 = v2;
  a1[1] = a1 + 4;
  a1[2] = a1 + 4;
  a1[3] = a1 + 54;
  if ( a2 + 1 != a1 + 1
    && !detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap<10>(a1 + 1, v4) )
  {
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>(
      v3,
      v4);
  }
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(v4);
  return a1;
}
