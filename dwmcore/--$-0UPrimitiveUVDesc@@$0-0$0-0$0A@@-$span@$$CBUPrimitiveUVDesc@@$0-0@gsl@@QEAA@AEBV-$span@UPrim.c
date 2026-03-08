/*
 * XREFs of ??$?0UPrimitiveUVDesc@@$0?0$0?0$0A@@?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEAA@AEBV?$span@UPrimitiveUVDesc@@$0?0@1@@Z @ 0x180025234
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180025310 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(_QWORD *a1, _QWORD *a2)
{
  __int64 *v4; // rax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)gsl::details::extent_type<-1>::extent_type<-1>(&v8, *a2);
  v5 = (gsl::details *)a2[1];
  v6 = *v4;
  *a1 = v6;
  a1[1] = v5;
  if ( v6 == -1 || !v5 && v6 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x180025282LL);
  }
  return a1;
}
