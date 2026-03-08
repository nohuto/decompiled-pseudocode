/*
 * XREFs of ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265140
 * Callers:
 *     ?AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z @ 0x1802662C0 (-AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Get_size_of_n@$0BM@@std@@YA_K_K@Z @ 0x18023CC84 (--$_Get_size_of_n@$0BM@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x180266FD4 (-_Change_array@-$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V-$allocator@UAreaTriangle.c)
 */

char *__fastcall std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Emplace_reallocate<EmitterShapes::CPathEmitterArea::AreaTriangle const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rbp
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v4 = 0x924924924924924LL;
  v7 = (a2 - (_BYTE *)*a1) / 28;
  v8 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v8 == 0x924924924924924LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x924924924924924LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<28>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[28 * v7];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
  *((_DWORD *)v15 + 6) = *(_DWORD *)(a3 + 24);
  v16 = v13;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, a2 - (_BYTE *)*a1);
    v16 = v15 + 28;
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array(a1, v14, v9, v4);
  return v15;
}
