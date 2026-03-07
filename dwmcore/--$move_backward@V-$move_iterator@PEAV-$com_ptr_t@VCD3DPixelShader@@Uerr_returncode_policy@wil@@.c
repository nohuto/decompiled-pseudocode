__int64 __fastcall std::move_backward<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // xmm1_8

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
    {
      v14 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v16 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v16;
  return result;
}
