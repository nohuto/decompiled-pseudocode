/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180081420
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800813C4 (-resize@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE444 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801AE540 (--$uninitialized_move@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

char *__fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  _OWORD *v14; // r9
  __int64 v15; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  LPVOID v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  _OWORD *v26; // r14
  _OWORD *v27; // r10
  unsigned __int64 v28; // rax
  LPVOID v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  _BYTE v32[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < a3 )
  {
    v17 = (v3 - *(_QWORD *)a1) >> 4;
    v18 = v17 + a3;
    if ( v18 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v18);
    v20 = operator new(saturated_mul(v19, 0x10uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(char **)a1;
    v23 = v20;
    v29 = v20;
    v30 = v17;
    v31 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      v32,
      v22,
      v21,
      &v29);
    v24 = *(char **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v3 = *(_QWORD *)a1 + 16 * v17;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 4;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 16 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_25;
  v12 = ((v3 - *(_QWORD *)a1) >> 4) - a2;
  if ( a3 < v10 )
    v12 = a3;
  v13 = 16 * a3;
  v14 = (_OWORD *)(v3 - 16 * v12);
  if ( (_OWORD *)v3 != v14 )
  {
    v26 = (_OWORD *)(v3 - 16);
    v27 = (_OWORD *)(v13 + v11);
    v28 = a3;
    if ( v11 )
    {
      while ( v28 )
      {
        --v28;
        --v27;
        if ( v28 >= a3 )
          break;
        *v27 = *v26;
        if ( v26 == v14 )
          goto LABEL_8;
        --v26;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v15 = 16 * a2;
      v30 = v9;
      v31 = v9;
      v29 = v8;
      std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        v32,
        &v8[v15],
        &v8[16 * (v9 - a3)],
        &v29);
      goto LABEL_10;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  v15 = 16 * a2;
LABEL_10:
  *((_QWORD *)a1 + 1) += v13;
  return &v8[v15];
}
