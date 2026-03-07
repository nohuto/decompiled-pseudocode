__int64 __fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbp
  _OWORD *v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _OWORD *v13; // r10
  __int64 v14; // rdi
  _OWORD *v16; // rcx
  _OWORD *v17; // r8
  unsigned __int64 v18; // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF
  char v20[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = (_OWORD *)a1[1];
  v8 = ((__int64)v7 - *a1) >> 4;
  v9 = v8 - a2;
  v10 = *a1 + 16 * v8;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_19;
  v11 = ((a1[1] - *a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = 16 * a3;
  v13 = &v7[-v11];
  if ( v7 != v13 )
  {
    v16 = v7 - 1;
    v17 = (_OWORD *)(v12 + v10);
    v18 = a3;
    if ( v10 )
    {
      while ( v18 )
      {
        --v18;
        --v17;
        if ( v18 >= a3 )
          break;
        *v17 = *v16;
        if ( v16 == v13 )
          goto LABEL_7;
        --v16;
      }
    }
    goto LABEL_19;
  }
LABEL_7:
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v14 = 16 * a2;
      v19[1] = v8;
      v19[2] = v8;
      v19[0] = v6;
      std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        v20,
        v14 + v6,
        v6 + 16 * (v8 - a3),
        v19);
      goto LABEL_9;
    }
LABEL_19:
    _invalid_parameter_noinfo_noreturn();
  }
  v14 = 16 * a2;
LABEL_9:
  a1[1] += v12;
  return v14 + v6;
}
