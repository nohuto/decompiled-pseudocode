/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180030B1C
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180030A6C (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE444 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801AE540 (--$uninitialized_move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _OWORD *v9; // rdx
  __int64 v10; // rax
  _OWORD *v11; // r9
  __int64 v12; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  _OWORD *v23; // rsi
  void *v24; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  _BYTE v27[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v2) >> 4) )
  {
    v14 = (v2 - *(_QWORD *)a1) >> 4;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v15);
    v17 = operator new(saturated_mul(v16, 0x10uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v24 = v17;
    v25 = v14;
    v26 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, void **))std::uninitialized_move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      v27,
      v19,
      v18,
      &v24);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v2 = *(_QWORD *)a1 + 16 * v14;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v16;
    *((_QWORD *)a1 + 1) = v2;
  }
  v6 = *(char **)a1;
  v7 = (v2 - *(_QWORD *)a1) >> 4;
  v8 = v7 - a2;
  v9 = (_OWORD *)(*(_QWORD *)a1 + 16 * v7);
  if ( !v9 )
    goto LABEL_15;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = (_OWORD *)(v2 - 16 * v10);
  if ( (_OWORD *)v2 != v11 )
  {
    v23 = (_OWORD *)(v2 - 16);
    *v9 = *v23;
    if ( v23 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v25 = v7;
    v26 = v7;
    v12 = 16 * a2;
    v24 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, void **))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
      v27,
      &v6[v12],
      &v6[16 * v7 - 16],
      &v24);
  }
  else
  {
    v12 = 16 * a2;
  }
  *((_QWORD *)a1 + 1) += 16LL;
  return &v6[v12];
}
