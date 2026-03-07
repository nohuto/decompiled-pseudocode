__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 *v6; // rbx

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CPathData> *,std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
    *a1,
    a1[1],
    v6);
  return std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array((__int64)a1, (__int64)v6, v4, a2);
}
