/*
 * XREFs of ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E16B0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005D950 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800B0C34 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801F715C (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 */

__int64 __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
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
  v7 = (a1[1] - *a1) >> 5;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v9 = v3 + 32 * v7;
    if ( v6 == v7 )
      goto LABEL_3;
  }
  if ( v5 && (!v3 || v5 < 0 || v7 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v11[2] = v5;
  v11[1] = v7;
  v11[0] = v3;
  result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
             v12,
             v3 + 32 * v6,
             v9,
             v11);
LABEL_3:
  a1[1] += -32 * a3;
  return result;
}
