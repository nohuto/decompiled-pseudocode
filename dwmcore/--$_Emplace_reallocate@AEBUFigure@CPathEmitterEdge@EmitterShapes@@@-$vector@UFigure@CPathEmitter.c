__int64 __fastcall std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + 56 * v7;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  std::vector<Windows::Foundation::Numerics::float2>::_Construct_n<Windows::Foundation::Numerics::float2 * const &,Windows::Foundation::Numerics::float2 * const &>(
    (_QWORD *)v14,
    (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 3,
    (const void **)a3,
    (_QWORD *)(a3 + 8));
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 40) = 0LL;
  std::vector<float>::_Construct_n<float * const &,float * const &>(
    (_QWORD *)(v14 + 24),
    (__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 24)) >> 2,
    (const void **)(a3 + 24),
    (_QWORD *)(a3 + 32));
  v15 = v13;
  *(_DWORD *)(v14 + 48) = *(_DWORD *)(a3 + 48);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *>(v17, a2, v13);
    v16 = a1[1];
    v15 = v14 + 56;
    v17 = a2;
  }
  std::_Uninitialized_move<EmitterShapes::CPathEmitterEdge::Figure *>(v17, v16, v15);
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Change_array(a1, v13, v9, v4);
  return v14;
}
