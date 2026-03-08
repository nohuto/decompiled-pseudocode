/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180084918
 * Callers:
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18001F160 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800843E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800E18F0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x1801316F2 (--$_Uninitialized_move@PEAVCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVC.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_DWORD *__fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(void **a1, _BYTE *a2)
{
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  _OWORD *v13; // rax
  _OWORD *v14; // rdi
  _DWORD *v15; // rsi
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  __int64 v18; // xmm1_8
  _BYTE *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _DWORD *result; // rax
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  void *v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2 - (_BYTE *)*a1;
  v5 = 0x492492492492492LL;
  v6 = v3 / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v10 = (v9 >> 1) + v9;
    v11 = v8;
    if ( v10 >= v8 )
      v11 = v10;
    if ( v11 > 0x492492492492492LL )
      std::_Throw_bad_array_new_length();
    v5 = v11;
  }
  v12 = 56 * v5;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(56 * v5);
  v14 = v13;
  v15 = (_DWORD *)v13 + 14 * v6;
  *v15 = 0;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == (_BYTE *)v16 )
  {
    while ( v17 != v16 )
    {
      *v13 = *v17;
      v13 = (_OWORD *)((char *)v13 + 56);
      *(_OWORD *)((char *)v13 - 40) = v17[1];
      *(_OWORD *)((char *)v13 - 24) = v17[2];
      v18 = *((_QWORD *)v17 + 6);
      v17 = (_OWORD *)((char *)v17 + 56);
      *((_QWORD *)v13 - 1) = v18;
    }
  }
  else
  {
    std::_Uninitialized_move<CShapeRenderTask *>(v17, a2, v13);
    std::_Uninitialized_move<CShapeRenderTask *>(a2, a1[1], v15 + 14);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = (_BYTE *)a1[2] - v19;
    v24 = *a1;
    v21 = 8 * (v20 >> 3);
    v23 = v21;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v24, &v23);
      v21 = v23;
      v19 = v24;
    }
    operator delete(v19, v21);
  }
  result = v15;
  *a1 = v14;
  a1[1] = (char *)v14 + 56 * v8;
  a1[2] = (char *)v14 + v12;
  return result;
}
