/*
 * XREFs of ?reserve_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexAAOffsetDesc@Mesh@@_K0@Z @ 0x1800D9CF0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005D950 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800B0C34 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801F715C (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801F74DC (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _OWORD *v15; // r9
  __int64 v16; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  LPVOID v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  LPVOID v24; // rbx
  char *v25; // rcx
  bool v26; // zf
  _OWORD *v27; // r14
  _OWORD *v28; // r8
  unsigned __int64 v29; // rax
  LPVOID v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 5 < a3 )
  {
    v18 = (v3 - *(_QWORD *)a1) >> 5;
    v19 = v18 + a3;
    if ( v19 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 5, v19);
    v21 = operator new(saturated_mul(v20, 0x20uLL));
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(char **)a1;
    v24 = v21;
    v30 = v21;
    v31 = v18;
    v32 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
      v33,
      v23,
      v22,
      &v30);
    v25 = *(char **)a1;
    v26 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v3 = *(_QWORD *)a1 + 32 * v18;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 32 * v20;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 5;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 32 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_25;
  v12 = ((v3 - *(_QWORD *)a1) >> 5) - a2;
  if ( a3 < v10 )
    v12 = a3;
  v13 = 32 * a3;
  v14 = 32 * v12;
  v15 = (_OWORD *)(v3 - v14);
  if ( v3 != v3 - v14 )
  {
    v27 = (_OWORD *)(v3 - 32);
    v28 = (_OWORD *)(v13 + v11);
    v29 = a3;
    if ( v11 )
    {
      while ( v29 )
      {
        --v29;
        v28 -= 2;
        if ( v29 >= a3 )
          break;
        *v28 = *v27;
        v28[1] = v27[1];
        if ( v27 == v15 )
          goto LABEL_8;
        v27 -= 2;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v16 = 32 * a2;
      v31 = v9;
      v32 = v9;
      v30 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
        v33,
        &v8[v16],
        &v8[32 * (v9 - a3)],
        &v30);
      goto LABEL_10;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  v16 = 32 * a2;
LABEL_10:
  *((_QWORD *)a1 + 1) += v13;
  return &v8[v16];
}
