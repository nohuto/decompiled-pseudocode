/*
 * XREFs of ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1800B0B64
 * Callers:
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800B0AA8 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801F6C58 (--$move@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D1_EDGE_FL.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801F6D08 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 */

char *__fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  _DWORD *v13; // r9
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  LPVOID v21; // rbx
  char *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  _DWORD *v25; // r14
  unsigned __int64 v26; // rdx
  LPVOID v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  _BYTE v30[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 2 < a3 )
  {
    v15 = (v3 - *(_QWORD *)a1) >> 2;
    v16 = v15 + a3;
    if ( v16 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 2, v16);
    v18 = operator new(saturated_mul(v17, 4uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    v21 = v18;
    v27 = v18;
    v28 = v15;
    v29 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::move<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
      v30,
      v20,
      v19,
      &v27);
    v22 = *(char **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v3 = *(_QWORD *)a1 + 4 * v15;
    v24 = *(_QWORD *)a1 + 4 * v17;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v24;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 2;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 4 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_24;
  v12 = ((v3 - *(_QWORD *)a1) >> 2) - a2;
  if ( a3 < v10 )
    v12 = a3;
  v13 = (_DWORD *)(v3 - 4 * v12);
  if ( (_DWORD *)v3 != v13 )
  {
    v25 = (_DWORD *)(v3 - 4);
    v26 = a3;
    if ( v11 )
    {
      while ( v26 )
      {
        if ( --v26 >= a3 )
          break;
        *(_DWORD *)(v11 + 4 * v26) = *v25;
        if ( v25 == v13 )
          goto LABEL_8;
        --v25;
      }
    }
    goto LABEL_24;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v28 = v9;
      v29 = v9;
      v27 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
        v30,
        &v8[4 * a2],
        &v8[4 * (v9 - a3)],
        &v27);
      goto LABEL_9;
    }
LABEL_24:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  *((_QWORD *)a1 + 1) += 4 * a3;
  return &v8[4 * a2];
}
