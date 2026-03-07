__int64 __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rax
  _OWORD *v11; // r10
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  _OWORD *v14; // r9
  __int128 v15; // xmm1

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (__int64)(a1[2] - *a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
    v10 + 32 * v7,
    a2 - v7);
  v12 = (_OWORD *)*a1;
  v13 = v11;
  v14 = (_OWORD *)a1[1];
  while ( v12 != v14 )
  {
    *v13 = *v12;
    v13 += 2;
    v15 = v12[1];
    v12 += 2;
    *(v13 - 1) = v15;
  }
  return std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(a1, v11, a2, v2);
}
