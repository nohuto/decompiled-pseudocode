/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18002DABC
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x18002DBC0 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1801FB36C (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1801FB660 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v6; // rdx
  detail::liberal_expansion_policy *v7; // rcx
  char *v8; // rsi
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rsi
  void *v17; // rax
  void *v18; // r8
  void *v19; // rdx
  void *v20; // rdi
  void *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v29 = a3;
  v3 = (__int64)a1[1];
  v6 = a1[2];
  v7 = (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL;
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v6[-v3] >> 2)) )
  {
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(v7, (_QWORD)v7 * ((v6 - (_BYTE *)*a1) >> 2), v15);
    v17 = operator new(saturated_mul(v16, 0xCuLL));
    v18 = a1[1];
    v19 = *a1;
    v20 = v17;
    *(_QWORD *)&v24 = v17;
    *((_QWORD *)&v24 + 1) = v14;
    v25 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v26,
      v19,
      v18,
      &v24);
    v21 = *a1;
    v22 = *a1 == a1 + 3;
    *a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v23 = (char *)*a1;
    v3 = (__int64)*a1 + 12 * v14;
    a1[1] = (void *)v3;
    a1[2] = &v23[12 * v16];
  }
  v8 = (char *)*a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - (__int64)*a1) >> 2);
  v10 = v9 - a2;
  if ( !((char *)*a1 + 4 * ((v3 - (__int64)*a1) >> 2)) )
    goto LABEL_17;
  *(_QWORD *)&v24 = (char *)*a1 + 4 * ((v3 - (__int64)*a1) >> 2);
  v29 = v3;
  *((_QWORD *)&v24 + 1) = 1LL;
  v11 = v9 - a2;
  v25 = 1LL;
  if ( v10 > 1 )
    v11 = 1LL;
  v26 = v24;
  v27 = 1LL;
  v28 = v3 - 12 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v28,
    &v29,
    &v26);
  if ( v10 > 1 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      *(_QWORD *)&v24 = v8;
      v12 = 12 * a2;
      *((_QWORD *)&v24 + 1) = v9;
      v25 = v9;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v26,
        &v8[12 * a2],
        &v8[12 * v9 - 12],
        &v24);
      goto LABEL_7;
    }
LABEL_17:
    _invalid_parameter_noinfo_noreturn();
  }
  v12 = 12 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 12;
  return &v8[v12];
}
