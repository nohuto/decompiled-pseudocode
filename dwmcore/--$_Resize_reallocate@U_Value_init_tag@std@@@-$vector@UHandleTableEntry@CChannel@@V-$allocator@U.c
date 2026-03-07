__int64 __fastcall std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rax

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (a1[2] - *a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(v10 + 16 * v7, a2 - v7);
  v11 = a1[1];
  v12 = v10;
  for ( i = *a1; i != v11; i += 16LL )
  {
    *(_DWORD *)v12 = *(_DWORD *)i;
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(i + 4);
    v14 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    *(_QWORD *)(v12 + 8) = v14;
    v12 += 16LL;
  }
  std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v12, v12);
  return std::vector<CChannel::HandleTableEntry>::_Change_array(a1, v10, a2, v2);
}
