/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801F6D08
 * Callers:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x180025840 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1800B0B64 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vli.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v6 = (a3 - (__int64)a2) >> 2;
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
  v8 = *a4;
  *v7 = ((__int64)memmove_0((void *)(*a4 + 4 * *v7 - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - v8) >> 2;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
