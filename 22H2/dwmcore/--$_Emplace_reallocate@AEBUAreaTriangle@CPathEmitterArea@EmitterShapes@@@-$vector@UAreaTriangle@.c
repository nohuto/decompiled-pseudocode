/*
 * XREFs of ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1802074F4
 * Callers:
 *     ?AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z @ 0x1802087D0 (-AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x1801DC230 (-_Change_array@-$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V-$allocator@UAreaTriangle.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Emplace_reallocate<EmitterShapes::CPathEmitterArea::AreaTriangle const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v6 = (a2 - (_BYTE *)*a1) / 28;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 28;
  if ( v7 == 0x924924924924924LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 28;
  v10 = v9 >> 1;
  if ( v9 <= 0x924924924924924LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 28 * v11;
  if ( v11 > 0x924924924924924LL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v15 = 28 * v6;
  *(_OWORD *)&v13[v15] = *(_OWORD *)a3;
  *(_QWORD *)&v13[v15 + 16] = *(_QWORD *)(a3 + 16);
  *(_DWORD *)&v13[v15 + 24] = *(_DWORD *)(a3 + 24);
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
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
    v16 = (void *)(v14 + v15 + 28);
  }
  memmove_0(v16, v18, v19);
  std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array((__int64)a1, v14, v8, v11);
  return (__int64)*a1 + v15;
}
