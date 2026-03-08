/*
 * XREFs of gsl::final_action__lambda_599dd103dd54625acbe38721a71e5844___::_final_action__lambda_599dd103dd54625acbe38721a71e5844___ @ 0x1801FBCD8
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall gsl::final_action__lambda_599dd103dd54625acbe38721a71e5844___::_final_action__lambda_599dd103dd54625acbe38721a71e5844___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::PopLayer(*(CDrawingContext **)a1);
  return result;
}
