__int64 __fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  CD3DDevice::CUnpinResource *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  const struct CD3DDevice::CUnpinResource *v11; // rbp
  const struct CD3DDevice::CUnpinResource *v12; // rdi
  __int64 v13; // rdi
  CD3DDevice::CUnpinResource *v14; // rdx
  _QWORD v16[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-48h] BYREF

  v3 = (__int64 *)a1;
  detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v4 = *v3;
  v5 = v3[1];
  v6 = (v5 - *v3) >> 5;
  v7 = v6 - a2;
  v8 = (CD3DDevice::CUnpinResource *)(*v3 + 32 * v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 32 * v9;
  v11 = (const struct CD3DDevice::CUnpinResource *)(v5 - v10);
  if ( v5 != v5 - v10 )
  {
    v12 = (const struct CD3DDevice::CUnpinResource *)(v5 - 32);
    CD3DDevice::CUnpinResource::CUnpinResource(v8, v12);
    if ( v12 != v11 )
      goto LABEL_6;
    v3 = (__int64 *)a1;
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v16[1] = v6;
      v16[2] = v6;
      v16[0] = v4;
      v13 = 32 * a2;
      std::move_backward<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        (__int64)v17,
        (__int64 *)(32 * a2 + v4),
        (__int64 *)(32 * v6 + v4 - 32),
        v16);
      goto LABEL_14;
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 32 * a2;
LABEL_14:
  v14 = (CD3DDevice::CUnpinResource *)(v4 + 32 * (a2 + 1));
  if ( v8 < v14 )
    v14 = v8;
  detail::destruct_range<CD3DDevice::CUnpinResource>((CD3DDevice::CUnpinResource *)(v13 + v4), v14);
  v3[1] += 32LL;
  return v13 + v4;
}
