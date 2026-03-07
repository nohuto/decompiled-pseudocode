unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  LPVOID v9; // rax
  __int64 *v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16[4]; // [rsp+20h] [rbp-48h] BYREF
  char v17[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - *a1) >> 3;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *a1) >> 3),
           (v3 - *a1) >> 3,
           v7);
    v9 = operator new(saturated_mul(v8, 8uLL));
    v10 = (__int64 *)a1[1];
    v11 = (__int64 *)*a1;
    v16[0] = (__int64)v9;
    v16[2] = 0LL;
    v12 = (__int64)v9;
    v16[1] = v6;
    std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
      (__int64)v17,
      v11,
      v10,
      v16);
    detail::destruct_range<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>(*a1, a1[1]);
    v13 = (void *)*a1;
    v14 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *a1;
    a1[1] = *a1 + 8 * v6;
    result = v15 + 8 * v8;
    a1[2] = result;
  }
  return result;
}
