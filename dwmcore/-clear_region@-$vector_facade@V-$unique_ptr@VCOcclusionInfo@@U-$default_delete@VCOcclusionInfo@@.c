__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a2;
  v6 = *a1;
  v7 = a3 + a2;
  v9 = (a1[1] - v6) >> 3;
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_16;
  }
  v3 = (_QWORD *)(v6 + 8 * v9);
  if ( v7 != v9 )
  {
    if ( !v5 )
    {
LABEL_13:
      v13[0] = v6;
      v13[2] = v5;
      v13[1] = v9;
      result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, _QWORD *, _QWORD *))std::move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
                 v14,
                 v6 + 8 * v7,
                 v3,
                 v13);
      goto LABEL_3;
    }
    if ( !v6 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
    if ( v5 >= 0 )
    {
      if ( v9 >= v5 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_13;
    goto LABEL_14;
  }
LABEL_3:
  v10 = 8 * a3;
  for ( i = &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]; i != v3; ++i )
  {
    if ( *i )
      result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*i)(*i, 1LL);
  }
  a1[1] -= v10;
  return result;
}
