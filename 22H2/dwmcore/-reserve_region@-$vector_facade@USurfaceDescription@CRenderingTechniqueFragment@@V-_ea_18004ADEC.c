/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18004ADEC
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18004B194 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x18004AF14 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061AA4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180268CD0 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18026A078 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r9
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  void *v20; // rax
  void *v21; // r8
  void *v22; // rdx
  void *v23; // rbx
  void *v24; // rcx
  bool v25; // zf
  char *v26; // rdx
  bool v27; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF

  v33 = a3;
  v5 = a1[2];
  v6 = 0x2AAAAAAAAAAAAAABLL;
  v7 = (__int64)a1[1];
  if ( !((__int64)&v5[-v7] / 12) )
  {
    v17 = (v7 - (__int64)*a1) / 12;
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(v5 - (_BYTE *)*a1),
            ((unsigned __int64)((unsigned __int128)((v5 - (_BYTE *)*a1) * (__int128)v6) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((v5 - (_BYTE *)*a1) * (__int128)v6) >> 64) >> 1),
            v18);
    v20 = operator new(saturated_mul(v19, 0xCuLL));
    v21 = a1[1];
    v22 = *a1;
    *(_QWORD *)&v28 = v20;
    v23 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      &v28,
      v22,
      v21,
      &v30);
    v24 = *a1;
    v25 = *a1 == a1 + 3;
    *a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v26 = (char *)*a1;
    v7 = (__int64)*a1 + 12 * v17;
    a1[1] = (void *)v7;
    a1[2] = &v26[12 * v19];
  }
  v8 = (char *)*a1;
  v9 = v7 - (_QWORD)*a1;
  v29 = 0LL;
  v10 = (unsigned __int128)(v9 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v31 = 0LL;
  *((_QWORD *)&v28 + 1) = 1LL;
  v11 = v9 / 12;
  v12 = v9 / 12 - a2;
  v13 = &v8[12 * (v9 / 12)];
  *(_QWORD *)&v28 = v13;
  if ( !v13 )
    goto LABEL_19;
  v33 = v7;
  v31 = 1LL;
  v14 = 1LL;
  if ( v12 <= 1 )
    v14 = v12;
  v29 = 1LL;
  v32 = v7 - 12 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v32,
    &v33,
    &v28);
  if ( v12 > 1 )
  {
    *(_QWORD *)&v28 = v8;
    *((_QWORD *)&v28 + 1) = v11;
    v27 = v11 < 0;
    if ( v11 )
    {
      if ( !v8 )
        goto LABEL_19;
      v27 = v11 < 0;
    }
    if ( !v27 || !v11 )
    {
      v29 = v11;
      v15 = 12 * a2;
      v30 = v28;
      v31 = v11;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v28,
        &v8[12 * a2],
        &v8[12 * v11 - 12],
        &v30);
      goto LABEL_7;
    }
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v13, v10);
    __debugbreak();
    JUMPOUT(0x1801114F3LL);
  }
  v15 = 12 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 12;
  return &v8[v15];
}
