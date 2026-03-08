/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DCCC
 * Callers:
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x180016CF8 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18002AB38 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1801FB36C (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = a2;
  v6 = a3 + a2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v4) >> 2);
  if ( v6 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v4 + 4 * ((a1[1] - v4) >> 2);
    if ( v6 == v8 )
      goto LABEL_3;
  }
  if ( v5 && (!v4 || v5 < 0 || v8 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v11[0] = v4;
  v11[1] = v8;
  v11[2] = v5;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
    v12,
    v4 + 12 * v6,
    v9,
    v11);
LABEL_3:
  result = -12 * a3;
  a1[1] += -12 * a3;
  return result;
}
