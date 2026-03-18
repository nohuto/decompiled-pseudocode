/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x1801196A4
 * Callers:
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x180119678 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180119570 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@det.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B346C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCVisual@@@detail@@V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCVisual@@@0@0V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@Z @ 0x1801B5D28 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCVisual@@@detail@@V-$checked_array_iterator.c)
 */

char *__fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        char *a3)
{
  char *v5; // rdi
  char *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  char *v15; // [rsp+90h] [rbp+30h] BYREF
  char *v16; // [rsp+A0h] [rbp+40h] BYREF

  v16 = a3;
  detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v5 = (char *)*a1;
  v6 = (char *)a1[1];
  *((_QWORD *)&v11 + 1) = 1LL;
  v7 = (v6 - v5) >> 3;
  v8 = v7 - a2;
  *(_QWORD *)&v11 = &v5[8 * v7];
  if ( !(_QWORD)v11 )
    goto LABEL_10;
  v16 = v6;
  v12 = 1LL;
  v9 = v7 - a2;
  v13 = v11;
  if ( v8 > 1 )
    v9 = 1LL;
  v14 = 1LL;
  v15 = &v6[-8 * v9];
  detail::move_backward_uninitialized<detail::basic_iterator<CVisual *>,stdext::checked_array_iterator<CVisual * *>>(
    &v15,
    &v16,
    &v13);
  if ( v8 > 1 )
  {
    *(_QWORD *)&v11 = v5;
    *((_QWORD *)&v11 + 1) = v7;
    if ( !v7 || v5 && v7 >= 0 )
    {
      v12 = v7;
      v13 = v11;
      v14 = v7;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v11,
        &v5[8 * a2],
        &v5[8 * v7 - 8],
        &v13);
      goto LABEL_9;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  a1[1] = (char *)a1[1] + 8;
  return &v5[8 * a2];
}
