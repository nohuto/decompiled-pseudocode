/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x1800B0830
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800B09B8 (-ensure_extra_capacity@-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
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
  v8 = (a3 - (__int64)a2) >> 6;
  if ( v8 < 0 )
  {
    if ( *v4 < (unsigned __int64)-v8 )
      goto LABEL_7;
  }
  else if ( v8 > 0 && a4[1] - *v4 < (unsigned __int64)v8 )
  {
LABEL_7:
    _invalid_parameter_noinfo_noreturn();
  }
  v9 = (void *)(*a4 + (*v4 << 6));
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = ((__int64)v9 + v5 - *a4) >> 6;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
