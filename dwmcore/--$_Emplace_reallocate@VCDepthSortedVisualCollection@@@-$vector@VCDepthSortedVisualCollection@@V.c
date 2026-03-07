__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx

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
  v14 = a3[2];
  v15 = a3[1];
  v16 = v13;
  v17 = *a3;
  a3[2] = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  v18 = v13 + 56 * v7;
  *(_QWORD *)(v18 + 16) = v14;
  v19 = v13;
  *(_QWORD *)v18 = v17;
  *(_QWORD *)(v18 + 8) = v15;
  *(_DWORD *)(v18 + 24) = *((_DWORD *)a3 + 6);
  v20 = a3[6];
  v21 = a3[5];
  v22 = a3[4];
  a3[6] = 0LL;
  a3[5] = 0LL;
  a3[4] = 0LL;
  *(_QWORD *)(v18 + 32) = v22;
  *(_QWORD *)(v18 + 40) = v21;
  *(_QWORD *)(v18 + 48) = v20;
  v23 = a1[1];
  v24 = *a1;
  if ( a2 != v23 )
  {
    std::_Uninitialized_move<CDepthSortedVisualCollection *>(v24, a2, v19);
    v23 = a1[1];
    v19 = v18 + 56;
    v24 = a2;
  }
  std::_Uninitialized_move<CDepthSortedVisualCollection *>(v24, v23, v19);
  std::vector<CDepthSortedVisualCollection>::_Change_array(a1, v16, v9, v4);
  return v18;
}
