__int64 __fastcall std::uninitialized_move<std::move_iterator<CCustomKernelEffect::ConstantBufferRow *>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 *v4; // r11
  __int64 v5; // r10
  _OWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = a4 + 2;
  v5 = a3 - a2;
  if ( v5 < 0 )
  {
    if ( *v4 < (unsigned __int64)-v5 )
      goto LABEL_9;
  }
  else if ( v5 > 0 && a4[1] - *v4 < (unsigned __int64)v5 )
  {
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  v6 = (_OWORD *)(*a4 + 16 * *v4);
  while ( a2 != a3 )
    *v6++ = *a2++;
  *v4 = ((__int64)v6 - *a4) >> 4;
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
