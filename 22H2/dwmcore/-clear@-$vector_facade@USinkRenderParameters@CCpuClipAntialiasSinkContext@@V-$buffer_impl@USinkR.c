/*
 * XREFs of ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090D84
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180090BDC (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180090DB4 (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@0@Z @ 0x1801FE4BC (--$assign@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x1801FEFDC (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     ??4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FF104 (--4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z @ 0x1801FF284 (--_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xCCCCCCCCCCCCCCCDuLL;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3) )
    return detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
