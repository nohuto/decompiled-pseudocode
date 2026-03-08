/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x1801FE198
 * Callers:
 *     ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x1800B32F8 (-reserve_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorD.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v6 = (a3 - (__int64)a2) >> 6;
  v7 = a4 + 2;
  if ( v6 > 0 )
  {
    if ( *v7 >= (unsigned __int64)v6 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 < 0 && a4[1] - *v7 < (unsigned __int64)-v6 )
    goto LABEL_6;
LABEL_3:
  *v7 = ((__int64)memmove_0((void *)(*a4 + (*v7 << 6) - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - *a4) >> 6;
  result = a1;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
