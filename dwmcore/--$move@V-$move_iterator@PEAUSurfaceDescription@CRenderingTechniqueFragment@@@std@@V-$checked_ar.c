/*
 * XREFs of ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1801FB36C
 * Callers:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800259D0 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18002DABC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DCCC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?reserve_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBounds@CCpuClipAntialiasSink@@_K0@Z @ 0x1800E2140 (-reserve_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAn.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E9DCC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800E9DCC.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  signed __int64 v8; // r10
  __int64 v9; // rdi
  void *v10; // rbx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a4 + 2;
  v5 = a3 - (_QWORD)a2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - (__int64)a2) >> 2);
  if ( v8 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x5555555555555555LL * ((a3 - (__int64)a2) >> 2)) )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v4 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_3:
  v9 = *a4;
  v10 = (void *)(*a4 + 12LL * *v4);
  memmove_0(v10, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v10 + v5 - v9) >> 2);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
