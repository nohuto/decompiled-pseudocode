/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x1801FA590
 * Callers:
 *     ?reserve_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEA_N_K0@Z @ 0x1800DA9CC (-reserve_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@de.c)
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FF10C (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1800FF154 (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?clear_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801FB46C (-clear_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     memmove_0 @ 0x18011B9A4 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(
        __int64 a1,
        char *a2,
        __int64 a3,
        _QWORD *a4)
{
  char **v4; // r14
  __int64 v5; // rsi
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = (char **)(a4 + 2);
  v5 = a3 - (_QWORD)a2;
  if ( a3 - (__int64)a2 < 0 )
  {
    if ( *v4 >= &a2[-a3] )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v5 > 0 && a4[1] - (_QWORD)*v4 < (unsigned __int64)v5 )
    goto LABEL_6;
LABEL_3:
  v8 = &(*v4)[*a4];
  memmove_0(v8, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = &v8[v5 - *a4];
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
