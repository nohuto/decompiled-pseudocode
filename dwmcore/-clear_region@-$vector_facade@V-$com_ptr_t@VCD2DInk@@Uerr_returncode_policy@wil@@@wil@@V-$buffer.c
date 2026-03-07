void __fastcall detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  bool v10; // zf
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v9 = a2;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = (__int64 *)(v3 + 8 * v8);
  if ( !v10 )
  {
    if ( v9 && (!v3 || v9 < 0 || v8 < v9) )
      _invalid_parameter_noinfo_noreturn();
    v13[2] = v9;
    v13[0] = v3;
    v13[1] = v8;
    std::move<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
      (__int64)v14,
      (__int64 *)(v3 + 8 * v7),
      (__int64 *)(v3 + 8 * v8),
      v13);
  }
  v12 = 8 * a3;
  detail::destruct_range<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>(&v11[v12 / 0xFFFFFFFFFFFFFFF8uLL], v11);
  a1[1] -= v12;
}
