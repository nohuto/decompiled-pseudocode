_QWORD *__fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T size_of; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // r8
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = *a3;
  *a3 = 0LL;
  v13 = v11;
  v14 = (_QWORD *)v11;
  v15 = (_QWORD *)(v11 + 8 * ((a2 - v3) >> 3));
  *v15 = v12;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
      v17,
      a2,
      v11);
    v16 = a1[1];
    v14 = v15 + 1;
    v17 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>(
    v17,
    v16,
    v14);
  std::vector<wil::com_ptr_t<CSceneObject,wil::err_returncode_policy>>::_Change_array((__int64)a1, v13, v8, v9);
  return v15;
}
