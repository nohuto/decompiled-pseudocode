/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1801F7578
 * Callers:
 *     ?reserve_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEA_N_K0@Z @ 0x1800D9F1C (-reserve_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@de.c)
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1800FE514 (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // r8
  _QWORD *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = (__int64)a2 - a3;
  v8 = a4 + 2;
  if ( v7 < 0 )
  {
    if ( *v8 >= (unsigned __int64)-v7 )
      goto LABEL_3;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 0 && a4[1] - *v8 < (unsigned __int64)v7 )
    goto LABEL_6;
LABEL_3:
  *v8 = (char *)memmove_0((void *)(*a4 + *v8 - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - *a4;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
