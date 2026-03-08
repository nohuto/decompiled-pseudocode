/*
 * XREFs of ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x180208044
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x1800429F4 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(
        __int64 *a1,
        const void *a2,
        _WORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  char *v12; // rsi
  char *v13; // r14
  void *v14; // rcx
  __int64 v15; // r8
  const void *v16; // rdx
  size_t v17; // r8

  v4 = ((__int64)a2 - *a1) >> 1;
  v6 = (a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v11);
  v13 = &v12[2 * v4];
  *(_WORD *)v13 = *a3;
  v14 = v12;
  v15 = a1[1];
  v16 = (const void *)*a1;
  if ( a2 == (const void *)v15 )
  {
    v17 = v15 - (_QWORD)v16;
  }
  else
  {
    memmove_0(v12, v16, (size_t)a2 - *a1);
    v14 = v13 + 2;
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<unsigned short>::_Change_array(a1, (__int64)v12, v8, v11);
  return &v12[2 * v4];
}
