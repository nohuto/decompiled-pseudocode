/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801F72B4
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x1800B2E68 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800B2F30 (-resize@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
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

  v6 = (a3 - (__int64)a2) >> 1;
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
  *v7 = ((__int64)memmove_0((void *)(*a4 + 2 * *v7 - (a3 - (_QWORD)a2)), a2, a3 - (_QWORD)a2) - v8) >> 1;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
