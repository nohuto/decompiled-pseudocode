/*
 * XREFs of ??4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FBD84
 * Callers:
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB440 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB724 (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 * Callees:
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090BB4 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@0@Z @ 0x1801FB13C (--$assign@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@.c)
 *     ??$swap@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1801FB95C (--$swap@$09@-$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@det.c)
 */

__int64 *__fastcall CCpuClipAntialiasSinkContext::SinkEntry::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a2 + 1;
  if ( v6 != a1 + 1 )
  {
    if ( detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap<10>(a1 + 1, v6) )
    {
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(v6);
    }
    else
    {
      v8 = v6[1];
      v9 = *v6;
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,void>(
        a1 + 1,
        &v9,
        &v8);
    }
  }
  return a1;
}
