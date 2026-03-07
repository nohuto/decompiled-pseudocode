__int64 __fastcall std::uninitialized_move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        const struct CD3DDevice::CUnpinResource *a2,
        const struct CD3DDevice::CUnpinResource *a3,
        _QWORD *a4)
{
  const struct CD3DDevice::CUnpinResource *v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  CD3DDevice::CUnpinResource *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = (a3 - a2) >> 5;
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = (CD3DDevice::CUnpinResource *)(*a4 + 32 * *v5);
  while ( v4 != a3 )
  {
    CD3DDevice::CUnpinResource::CUnpinResource(v10, v4);
    v10 = (CD3DDevice::CUnpinResource *)((char *)v10 + 32);
    v4 = (const struct CD3DDevice::CUnpinResource *)((char *)v4 + 32);
  }
  result = a1;
  *v5 = ((__int64)v10 - *a4) >> 5;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
