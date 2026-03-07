__int64 __fastcall std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // r14
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = a3 - a2;
  if ( v8 > 0 )
  {
    if ( *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 < 0 && a4[1] - *v5 < (unsigned __int64)-v8 )
    goto LABEL_9;
LABEL_3:
  v10 = *a4;
  v11 = (__int64 *)(*a4 + 8 * *v5);
  while ( a2 != v7 )
  {
    --v7;
    --v11;
    v12 = *v7;
    *v7 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
