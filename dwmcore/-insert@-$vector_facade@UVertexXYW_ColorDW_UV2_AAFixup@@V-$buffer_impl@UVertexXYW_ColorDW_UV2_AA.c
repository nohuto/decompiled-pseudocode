/*
 * XREFs of ?insert@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@2@V?$basic_iterator@$$CBUVertexXYW_ColorDW_UV2_AAFixup@@@2@_KAEBUVertexXYW_ColorDW_UV2_AAFixup@@@Z @ 0x1800B3208
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x1800B32F8 (-reserve_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorD.c)
 */

_QWORD *__fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  _OWORD *i; // rax
  _QWORD *result; // rax

  v6 = (__int64)(*a3 - *a1) >> 6;
  v7 = a4;
  for ( i = (_OWORD *)detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
  {
    *i = *a5;
    i += 4;
    *(i - 3) = a5[1];
    *(i - 2) = a5[2];
    *(i - 1) = a5[3];
  }
  result = a2;
  *a2 = *a1 + (v6 << 6);
  return result;
}
