char *__fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rdx
  char *v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  _OWORD *v14; // r8
  __int64 v15; // rbx
  char *v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  LPVOID v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  LPVOID v24; // rdi
  char *v25; // rcx
  bool v26; // zf
  _OWORD *v27; // r15
  _OWORD *v28; // r10
  unsigned __int64 v29; // rax
  LPVOID v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < a3 )
  {
    v17 = *(char **)a1;
    v18 = (v3 - *(_QWORD *)a1) >> 4;
    v19 = v18 + a3;
    if ( v19 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(a1, (v5 - (__int64)v17) >> 4, v19);
    v21 = operator new(saturated_mul(v20, 0x10uLL));
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(char **)a1;
    v30 = v21;
    v32 = 0LL;
    v24 = v21;
    v31 = v18;
    std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      v33,
      v23,
      v22,
      &v30);
    v25 = *(char **)a1;
    v26 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v3 = *(_QWORD *)a1 + 16 * v18;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v20;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 4;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 16 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_16;
  v12 = ((v3 - *(_QWORD *)a1) >> 4) - a2;
  if ( a3 < v10 )
    v12 = a3;
  v13 = 16 * a3;
  v14 = (_OWORD *)(v3 - 16 * v12);
  if ( (_OWORD *)v3 != v14 )
  {
    v27 = (_OWORD *)(v3 - 16);
    v28 = (_OWORD *)(v13 + v11);
    v29 = a3;
    if ( v11 )
    {
      while ( v29 )
      {
        --v29;
        --v28;
        if ( v29 >= a3 )
          break;
        *v28 = *v27;
        if ( v27 == v14 )
          goto LABEL_8;
        --v27;
      }
    }
    goto LABEL_16;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v15 = 16 * a2;
      v31 = v9;
      v32 = v9;
      v30 = v8;
      std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        v33,
        &v8[v15],
        &v8[16 * (v9 - a3)],
        &v30);
      goto LABEL_10;
    }
LABEL_16:
    _invalid_parameter_noinfo_noreturn();
  }
  v15 = 16 * a2;
LABEL_10:
  *((_QWORD *)a1 + 1) += v13;
  return &v8[v15];
}
