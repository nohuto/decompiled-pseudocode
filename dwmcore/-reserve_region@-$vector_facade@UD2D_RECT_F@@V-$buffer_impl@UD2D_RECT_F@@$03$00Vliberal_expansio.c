/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002EDFC
 * Callers:
 *     ?insert@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_RECT_F@@@2@V?$basic_iterator@$$CBUD2D_RECT_F@@@2@_KAEBUD2D_RECT_F@@@Z @ 0x18002ED24 (-insert@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy.c)
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180030790 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x1800307F8 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE390 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE444 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  char *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  char *result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rsi
  void *v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  void *v21; // rdi
  char *v22; // rcx
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]
  unsigned __int64 v26; // [rsp+30h] [rbp-30h]
  _BYTE v27[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < a3 )
  {
    v15 = (v3 - *(_QWORD *)a1) >> 4;
    v16 = v15 + a3;
    if ( v15 + a3 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v16);
    v18 = operator new(saturated_mul(v17, 0x10uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    v24 = (__int64)v18;
    v26 = 0LL;
    v21 = v18;
    v25 = v15;
    ((void (__fastcall *)(_BYTE *, char *, __int64, __int64 *))std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
      v27,
      v20,
      v19,
      &v24);
    v22 = *(char **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v3 = *(_QWORD *)a1 + 16 * v15;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v17;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 4;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 16 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_19;
  v28 = v3;
  v24 = v11;
  v25 = a3;
  v12 = v9 - a2;
  v26 = a3;
  if ( a3 < v10 )
    v12 = a3;
  v29 = v3 - 16 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v29,
    &v28,
    &v24);
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v13 = 16 * a2;
      v24 = (__int64)v8;
      v25 = v9;
      v26 = v9;
      ((void (__fastcall *)(_BYTE *, char *, char *, __int64 *))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
        v27,
        &v8[v13],
        &v8[16 * (v9 - a3)],
        &v24);
      goto LABEL_9;
    }
LABEL_19:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 16 * a2;
LABEL_9:
  result = &v8[v13];
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
