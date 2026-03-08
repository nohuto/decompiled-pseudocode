/*
 * XREFs of ??1?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801FE274
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B3298 (-clear_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_.c)
 */

void __fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::~vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8
  void *v3; // rcx
  bool v4; // zf

  v2 = (a1[1] - *a1) >> 6;
  if ( v2 )
    detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  v3 = (void *)*a1;
  v4 = *a1 == (_QWORD)(a1 + 4);
  *a1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
