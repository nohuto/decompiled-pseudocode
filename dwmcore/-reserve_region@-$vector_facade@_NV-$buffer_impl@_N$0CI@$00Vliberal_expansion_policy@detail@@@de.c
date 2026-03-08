/*
 * XREFs of ?reserve_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEA_N_K0@Z @ 0x1800D9F1C
 * Callers:
 *     ?resize@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEB_N@Z @ 0x1800D9E5C (-resize@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@d.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x1801F7210 (--$uninitialized_move@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@.c)
 *     ??$move_backward@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1801F7578 (--$move_backward@V-$move_iterator@PEAD@std@@V-$checked_array_iterator@PEAD@stdext@@@std@@YA-AV-$.c)
 */

char *__fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  char *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  char *v13; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  SIZE_T v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  LPVOID v21; // rbx
  char *v22; // rcx
  bool v23; // zf
  SIZE_T v24; // rax
  _BYTE *v25; // r10
  LPVOID v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  _BYTE v29[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( v5 - v3 < a3 )
  {
    v15 = v3 - *(_QWORD *)a1;
    v16 = v15 + a3;
    if ( v16 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, v5 - *(_QWORD *)a1, v16);
    v18 = operator new(v17);
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    v21 = v18;
    v26 = v18;
    v27 = v15;
    v28 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>)(
      v29,
      v20,
      v19,
      &v26);
    v22 = *(char **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v3 = *(_QWORD *)a1 + v15;
    v24 = v17 + *(_QWORD *)a1;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v24;
  }
  v8 = *(char **)a1;
  v9 = v3 - *(_QWORD *)a1;
  v10 = v9 - a2;
  if ( a3 && (!v3 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_25;
  v11 = v3 - *(_QWORD *)a1 - a2;
  v12 = a3;
  if ( a3 < v10 )
    v11 = a3;
  if ( v3 != v3 - v11 )
  {
    v25 = (_BYTE *)(v3 - 1);
    if ( v3 )
    {
      while ( v12 )
      {
        if ( --v12 >= a3 )
          break;
        *(_BYTE *)(v3 + v12) = *v25;
        if ( v25 == (_BYTE *)(v3 - v11) )
          goto LABEL_8;
        --v25;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v26 = v8;
      v27 = v9;
      v13 = &v8[a2];
      v28 = v9;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>)(
        v29,
        &v8[a2],
        &v8[v9 - a3],
        &v26);
      goto LABEL_10;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = &v8[a2];
LABEL_10:
  *((_QWORD *)a1 + 1) += a3;
  return v13;
}
