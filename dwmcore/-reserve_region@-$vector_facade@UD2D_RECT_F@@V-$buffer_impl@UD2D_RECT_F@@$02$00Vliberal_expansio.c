/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002E040
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x18002F33C (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x1800307F8 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE390 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801AE444 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  char *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rsi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rdi
  char *v21; // rcx
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h]
  _BYTE v26[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+50h] BYREF

  v28 = a3;
  v3 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  if ( !((v6 - v3) >> 4) )
  {
    v14 = (v3 - *(_QWORD *)a1) >> 4;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v6 - *(_QWORD *)a1) >> 4, v15);
    v17 = operator new(saturated_mul(v16, 0x10uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v23 = (__int64)v17;
    v24 = v14;
    v25 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, __int64 *))std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
      v26,
      v19,
      v18,
      &v23);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v3 = *(_QWORD *)a1 + 16 * v14;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v16;
    *((_QWORD *)a1 + 1) = v3;
  }
  v7 = *(char **)a1;
  v8 = (v3 - *(_QWORD *)a1) >> 4;
  v9 = v8 - a2;
  v10 = *(_QWORD *)a1 + 16 * v8;
  if ( !v10 )
    goto LABEL_17;
  v28 = v3;
  v23 = v10;
  v24 = 1LL;
  v11 = v8 - a2;
  v25 = 1LL;
  if ( v9 > 1 )
    v11 = 1LL;
  v27 = v3 - 16 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v27,
    &v28,
    &v23);
  if ( v9 > 1 )
  {
    if ( !v8 || v7 && v8 >= 0 )
    {
      v12 = 16 * a2;
      v24 = v8;
      v25 = v8;
      v23 = (__int64)v7;
      ((void (__fastcall *)(_BYTE *, char *, char *, __int64 *))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
        v26,
        &v7[v12],
        &v7[16 * v8 - 16],
        &v23);
      goto LABEL_7;
    }
LABEL_17:
    _invalid_parameter_noinfo_noreturn();
  }
  v12 = 16 * a2;
LABEL_7:
  *((_QWORD *)a1 + 1) += 16LL;
  return &v7[v12];
}
