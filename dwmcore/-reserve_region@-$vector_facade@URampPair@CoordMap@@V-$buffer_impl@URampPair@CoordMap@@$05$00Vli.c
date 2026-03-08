/*
 * XREFs of ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x180025AB0
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180025A34 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1801FB660 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802B6ACC (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  char *v6; // rbx
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int64 v24; // rsi
  void *v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-60h]
  signed __int64 v27; // [rsp+30h] [rbp-58h]
  _BYTE v28[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((v4 - v2) >> 2)) )
  {
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, 0xAAAAAAAAAAAAAAABuLL * ((v4 - *(_QWORD *)a1) >> 2), v15);
    v17 = operator new(saturated_mul(v16, 0xCuLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v25 = v17;
    v26 = v14;
    v27 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, void **))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      v28,
      v19,
      v18,
      &v25);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v23 = *(char **)a1;
    v2 = *(_QWORD *)a1 + 12 * v14;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = &v23[12 * v16];
  }
  v6 = *(char **)a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
  v8 = v7 - a2;
  v9 = *(_QWORD *)a1 + 4 * ((v2 - *(_QWORD *)a1) >> 2);
  if ( !v9 )
    goto LABEL_15;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v2 - 12 * v10;
  if ( v2 != v11 )
  {
    v24 = v2 - 12;
    *(_QWORD *)v9 = *(_QWORD *)v24;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(v24 + 8);
    if ( v24 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v26 = v7;
    v27 = v7;
    v12 = 12 * a2;
    v25 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, void **))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
      v28,
      &v6[12 * a2],
      &v6[12 * v7 - 12],
      &v25);
  }
  else
  {
    v12 = 12 * a2;
  }
  *((_QWORD *)a1 + 1) += 12LL;
  return &v6[v12];
}
