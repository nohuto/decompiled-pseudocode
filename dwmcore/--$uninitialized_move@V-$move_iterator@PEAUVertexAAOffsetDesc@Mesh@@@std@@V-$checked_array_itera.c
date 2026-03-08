/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801F715C
 * Callers:
 *     ?reserve_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexAAOffsetDesc@Mesh@@_K0@Z @ 0x1800D9CF0 (-reserve_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mes.c)
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E16B0 (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v8; // r10
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a4 + 2;
  v5 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) >> 5;
  if ( v8 < 0 )
  {
    if ( *v4 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v4 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_3:
  v9 = (void *)(*a4 + 32 * *v4);
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = ((__int64)v9 + v5 - *a4) >> 5;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
