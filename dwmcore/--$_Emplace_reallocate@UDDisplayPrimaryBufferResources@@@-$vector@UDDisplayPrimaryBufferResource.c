unsigned __int64 __fastcall std::vector<DDisplayPrimaryBufferResources>::_Emplace_reallocate<DDisplayPrimaryBufferResources>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  *a3 = 0LL;
  v15 = v13;
  v16 = v13;
  v17 = v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)v17 = v14;
  *(_QWORD *)(v17 + 8) = a3[1];
  a3[1] = 0LL;
  v18 = a3[2];
  a3[2] = 0LL;
  *(_QWORD *)(v17 + 16) = v18;
  *(_BYTE *)(v17 + 24) = *((_BYTE *)a3 + 24);
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<DDisplayPrimaryBufferResources *>(v20, a2, v16);
    v19 = a1[1];
    v16 = v17 + 32;
    v20 = a2;
  }
  std::_Uninitialized_move<DDisplayPrimaryBufferResources *>(v20, v19, v16);
  std::vector<DDisplayPrimaryBufferResources>::_Change_array(a1, v15, v9, v3);
  return v17;
}
