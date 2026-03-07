__int64 __fastcall std::move<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>(
        __int64 a1,
        CResource **a2,
        CResource **a3,
        __int64 *a4)
{
  CResource **v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  __int64 v10; // r12
  CResource **v11; // rsi
  CResource *v12; // rax
  CResource *v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = a3 - a2;
  if ( v8 >= 0 )
  {
    if ( v8 <= 0 || a4[1] - *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( *v5 < (unsigned __int64)-v8 )
    goto LABEL_10;
LABEL_3:
  v10 = *a4;
  v11 = (CResource **)(*a4 + 8 * *v5);
  while ( v4 != a3 )
  {
    v12 = *v4;
    *v4 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      CResource::InternalRelease(v13);
    ++v11;
    ++v4;
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
