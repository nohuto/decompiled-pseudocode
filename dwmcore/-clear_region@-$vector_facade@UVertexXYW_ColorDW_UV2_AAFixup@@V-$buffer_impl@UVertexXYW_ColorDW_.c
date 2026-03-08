/*
 * XREFs of ?clear_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B3298
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ??1?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801FE274 (--1-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x1801FE0E4 (--$move@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iterator@PEAU.c)
 */

__int64 __fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = a3 + a2;
  v7 = (a1[1] - *a1) >> 6;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v3 + (v7 << 6);
    if ( v6 == v7 )
      goto LABEL_3;
  }
  if ( v5 && (!v3 || v5 < 0 || v7 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v11[2] = v5;
  v11[1] = v7;
  v11[0] = v3;
  result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>)(
             v12,
             v3 + (v6 << 6),
             v9,
             v11);
LABEL_3:
  a1[1] += -64 * a3;
  return result;
}
