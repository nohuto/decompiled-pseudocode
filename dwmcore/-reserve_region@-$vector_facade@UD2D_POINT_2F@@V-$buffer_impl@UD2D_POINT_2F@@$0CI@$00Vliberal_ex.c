/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800D52F4
 * Callers:
 *     ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1800D5240 (-BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1800D52A0 (-AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x1801B0320 (-AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  char *v21; // rdx
  LPVOID v22; // rbx
  char *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // r9
  unsigned __int64 v28; // rax
  LPVOID v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  _BYTE v32[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 3 < a3 )
  {
    v16 = (v3 - *(_QWORD *)a1) >> 3;
    v17 = v16 + a3;
    if ( v17 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v17);
    v19 = operator new(saturated_mul(v18, 8uLL));
    v20 = *((_QWORD *)a1 + 1);
    v21 = *(char **)a1;
    v22 = v19;
    v29 = v19;
    v30 = v16;
    v31 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      v32,
      v21,
      v20,
      &v29);
    v23 = *(char **)a1;
    v24 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v3 = *(_QWORD *)a1 + 8 * v16;
    v25 = *(_QWORD *)a1 + 8 * v18;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v25;
  }
  v8 = *(char **)a1;
  v9 = (v3 - *(_QWORD *)a1) >> 3;
  v10 = v9 - a2;
  v11 = *(_QWORD *)a1 + 8 * v9;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_24;
  v12 = 8 * a3;
  v13 = ((v3 - *(_QWORD *)a1) >> 3) - a2;
  if ( a3 < v10 )
    v13 = a3;
  v14 = (_QWORD *)(v3 - 8 * v13);
  if ( (_QWORD *)v3 != v14 )
  {
    v26 = (_QWORD *)(v3 - 8);
    v27 = (_QWORD *)(v12 + v11);
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
    goto LABEL_24;
  }
LABEL_8:
  if ( v10 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v30 = v9;
      v31 = v9;
      v29 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        v32,
        &v8[8 * a2],
        &v8[8 * (v9 - a3)],
        &v29);
      goto LABEL_9;
    }
LABEL_24:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  *((_QWORD *)a1 + 1) += v12;
  return &v8[8 * a2];
}
