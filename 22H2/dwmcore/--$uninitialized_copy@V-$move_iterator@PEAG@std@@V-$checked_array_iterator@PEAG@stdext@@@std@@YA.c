/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180061D58
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180061C54 (-ensure_extra_capacity@-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 * Callees:
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // r10
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 1;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
    JUMPOUT(0x1801186C1LL);
  }
  v8 = *a4;
  v9 = (void *)(*a4 + 2 * a4[2]);
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v9 + v5 - v8) >> 1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
