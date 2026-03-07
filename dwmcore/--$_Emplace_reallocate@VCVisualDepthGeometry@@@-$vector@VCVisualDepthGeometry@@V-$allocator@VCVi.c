_OWORD *__fastcall std::vector<CVisualDepthGeometry>::_Emplace_reallocate<CVisualDepthGeometry>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rsi
  _OWORD *v14; // r8
  _OWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx

  v5 = 0x1745D1745D1745DLL;
  v7 = (a2 - *a1) / 176;
  v8 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 4);
  if ( v8 == 0x1745D1745D1745DLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x1745D1745D1745DLL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<176>(v5);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_OWORD *)v13;
  v15 = (_OWORD *)(v13 + 176 * v7);
  *v15 = *a3;
  v15[1] = a3[1];
  v15[2] = a3[2];
  v15[3] = a3[3];
  v15[4] = a3[4];
  v15[5] = a3[5];
  v15[6] = a3[6];
  v15[7] = a3[7];
  v15[8] = a3[8];
  v15[9] = a3[9];
  v15[10] = a3[10];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CVisualDepthGeometry *>(v17, a2, v13);
    v16 = a1[1];
    v14 = v15 + 11;
    v17 = a2;
  }
  std::_Uninitialized_move<CVisualDepthGeometry *>(v17, v16, v14);
  std::vector<CVisualDepthGeometry>::_Change_array(a1, v13, v9, v5);
  return v15;
}
