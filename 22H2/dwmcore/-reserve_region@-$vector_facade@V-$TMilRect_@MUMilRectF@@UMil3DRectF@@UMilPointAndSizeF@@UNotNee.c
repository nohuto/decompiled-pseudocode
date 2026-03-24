/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180259B10
 * Callers:
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x180258974 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18019C5FC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802599F8 (-ensure_extra_capacity@-$buffer_impl@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  _OWORD *v4; // rdx
  __int64 v5; // rbx
  _OWORD *v6; // r9
  __int64 v7; // r8
  _OWORD *v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = *a1;
  v16 = 0LL;
  v6 = (_OWORD *)a1[1];
  *((_QWORD *)&v15 + 1) = 1LL;
  v7 = ((__int64)v6 - v5) >> 4;
  v18 = 0LL;
  v8 = (_OWORD *)(v5 + 16 * v7);
  v9 = v7 - a2;
  *(_QWORD *)&v15 = v8;
  v17 = v15;
  if ( !v8 )
    goto LABEL_18;
  v18 = 1LL;
  v10 = v7 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v11 = 16 * v10;
  v4 = &v6[v11 / 0xFFFFFFFFFFFFFFF0uLL];
  v16 = 1LL;
  if ( v6 != &v6[v11 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v12 = v16;
    v8 = (_OWORD *)(v17 + 16);
    do
    {
      --v6;
      if ( !(_QWORD)v15 )
        goto LABEL_18;
      if ( !v12 )
        goto LABEL_18;
      --v12;
      --v8;
      if ( v12 >= *((_QWORD *)&v15 + 1) )
        goto LABEL_18;
      *v8 = *v6;
    }
    while ( v6 != v4 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v17 = v5;
    *((_QWORD *)&v17 + 1) = v7;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_18;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_18:
      _o__invalid_parameter_noinfo_noreturn(v8, v4);
      __debugbreak();
      JUMPOUT(0x180259C85LL);
    }
    v18 = v7;
    v15 = v17;
    v16 = v7;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      (__int64)&v17,
      (const void *)(v5 + 16 * a2),
      v5 + 16 * v7 - 16,
      &v15);
  }
  a1[1] += 16LL;
  return v5 + 16 * a2;
}
