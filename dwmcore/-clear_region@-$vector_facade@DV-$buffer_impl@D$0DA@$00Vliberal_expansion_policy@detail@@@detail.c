/*
 * XREFs of ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FE4CC
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1800FE21C (AppendCustomSamplerShaderBody.c)
 *     ??1?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180207A4C (--1-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x1801F7210 (--$uninitialized_move@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@.c)
 */

__int64 __fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  char v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a1[1];
  v7 = a2;
  v8 = v5 - *a1;
  v9 = a3 + a2;
  if ( v9 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else if ( v9 == v8 )
  {
    goto LABEL_3;
  }
  if ( v7 && (!v3 || v7 < 0 || v8 < v7) )
    _invalid_parameter_noinfo_noreturn();
  v11[1] = v8;
  v11[2] = v7;
  v11[0] = v3;
  result = ((__int64 (__fastcall *)(char *, unsigned __int64, __int64, _QWORD *))std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>)(
             v12,
             v3 + v9,
             v5,
             v11);
LABEL_3:
  a1[1] -= a3;
  return result;
}
