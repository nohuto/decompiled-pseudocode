_QWORD *__fastcall std::vector<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 *v15; // rdx
  _QWORD *v16; // r8
  __int64 *v17; // rcx
  _QWORD *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + 8 * v5);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(v14, *a3);
  v15 = (__int64 *)a1[1];
  v16 = (_QWORD *)v13;
  v17 = (__int64 *)*a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
      v17,
      a2,
      v13);
    v15 = (__int64 *)a1[1];
    v16 = v14 + 1;
    v17 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
    v17,
    v15,
    v16);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
      (__int64 *)*a1,
      (__int64 *)a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  result = v14;
  a1[1] = v13 + 8 * v9;
  a1[2] = v13 + 8 * v3;
  return result;
}
