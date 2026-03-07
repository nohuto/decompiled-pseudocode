__int64 __fastcall std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rbx

  v2 = 0x666666666666666LL;
  if ( a2 > 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3);
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (v5 >> 3);
  v8 = v6 >> 1;
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<40>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(v10 + 40 * v7, a2 - v7);
  std::_Uninitialized_move<CDDisplayCachedScanout *>(*a1, a1[1], v10);
  return std::vector<CDDisplayCachedScanout>::_Change_array(a1, v10, a2, v2);
}
