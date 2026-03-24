/*
 * XREFs of ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1801A2FD0
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2810 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x18019FCD8 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A0EDC (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 */

char *__fastcall detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rbx
  char *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r10
  __int64 v12; // r11
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (const void **)a1,
    1uLL);
  v5 = *(_BYTE **)a1;
  v6 = *(char **)(a1 + 8);
  *((_QWORD *)&v15 + 1) = 1LL;
  v7 = (v6 - v5) >> 2;
  v8 = v7 - a2;
  *(_QWORD *)&v15 = &v5[4 * v7];
  if ( !(_QWORD)v15 )
    goto LABEL_18;
  v16 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v17 = v15;
  v10 = 4 * v9;
  v11 = &v6[-v10];
  v18 = 1LL;
  if ( v6 != &v6[-v10] )
  {
    v12 = v17;
    v4 = v18;
    do
    {
      v6 -= 4;
      if ( !v12 )
        goto LABEL_18;
      if ( !v4 )
        goto LABEL_18;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v17 + 1) )
        goto LABEL_18;
      *(_DWORD *)(v12 + 4 * v4) = *(_DWORD *)v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v17 = v5;
    *((_QWORD *)&v17 + 1) = v7;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_18;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_18:
      _o__invalid_parameter_noinfo_noreturn(v4, v8);
      __debugbreak();
      JUMPOUT(0x1801A3114LL);
    }
    v18 = v7;
    v15 = v17;
    v16 = v7;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      (__int64)&v17,
      &v5[4 * a2],
      (__int64)&v5[4 * v7 - 4],
      (__int64 *)&v15);
  }
  *(_QWORD *)(a1 + 8) += 4LL;
  return &v5[4 * a2];
}
