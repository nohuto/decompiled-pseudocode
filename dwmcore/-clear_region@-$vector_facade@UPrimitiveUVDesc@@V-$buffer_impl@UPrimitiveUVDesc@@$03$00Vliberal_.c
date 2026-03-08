/*
 * XREFs of ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D9948
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x1801F828C (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansi.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801F70A4 (--$move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimitiveUVDes.c)
 */

__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a1[1] - *a1;
  v6 = a2 + a3;
  v8 = 0x4EC4EC4EC4EC4EC5LL * (v5 >> 2);
  v9 = a2;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v10 = v3 + 52 * v8;
    if ( v6 == v8 )
      goto LABEL_3;
  }
  if ( v9 && (!v3 || v9 < 0 || v8 < v9) )
    _invalid_parameter_noinfo_noreturn();
  v12[2] = v9;
  v12[0] = v3;
  v12[1] = v8;
  ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>)(
    v13,
    v3 + 52 * v6,
    v10,
    v12);
LABEL_3:
  result = -52 * a3;
  a1[1] += -52 * a3;
  return result;
}
