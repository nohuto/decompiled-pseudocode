__int64 __fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF

  v17 = a3;
  detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  v8 = v7 - a2;
  if ( !(*a1 + 16 * v7) )
    goto LABEL_11;
  *(_QWORD *)&v12 = *a1 + 16 * ((a1[1] - *a1) >> 4);
  v17 = v6;
  *((_QWORD *)&v12 + 1) = 1LL;
  v9 = v7 - a2;
  v13 = 1LL;
  if ( v8 > 1 )
    v9 = 1LL;
  v14 = v12;
  v16 = v6 - 16 * v9;
  v15 = 1LL;
  detail::move_backward_uninitialized<detail::basic_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    &v16,
    &v17,
    (__int64 *)&v14);
  if ( v8 <= 1 )
  {
    v10 = 16 * a2;
    goto LABEL_10;
  }
  if ( v7 && (!v5 || v7 < 0) )
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  v10 = 16 * a2;
  *((_QWORD *)&v12 + 1) = v7;
  v13 = v7;
  *(_QWORD *)&v12 = v5;
  std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    (__int64)&v14,
    (const void *)(v10 + v5),
    16 * v7 + v5 - 16,
    &v12);
LABEL_10:
  a1[1] += 16LL;
  return v10 + v5;
}
