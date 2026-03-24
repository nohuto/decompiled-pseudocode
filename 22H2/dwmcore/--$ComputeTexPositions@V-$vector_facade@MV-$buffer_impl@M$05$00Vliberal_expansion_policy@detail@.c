/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180042330
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800F2530 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180016774 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180042514 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1800425BC (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180042650 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800426CC (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x1800426F4 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x180042860 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  gsl::details *v16; // rcx
  __int64 *v17; // rax
  gsl::details *v18; // rcx
  bool v19; // zf
  __int128 v20; // [rsp+20h] [rbp-91h] BYREF
  __int128 v21; // [rsp+30h] [rbp-81h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-71h] BYREF
  gsl::details *v23; // [rsp+50h] [rbp-61h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-59h]
  __int64 *v25; // [rsp+60h] [rbp-51h]
  _BYTE v26[72]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-1h] BYREF

  v23 = (gsl::details *)v26;
  v24 = v26;
  v25 = &v27;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a5);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a6);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a5, *v9);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a6, *a4);
  CoordMap::GetRampValues(v10, a1, v11, &v23);
  *(_QWORD *)&v20 = gsl::narrow<__int64,unsigned __int64>((v24 - (_BYTE *)v23) / 12);
  if ( (__int64)v20 < 0 || (*((_QWORD *)&v20 + 1) = v23) == 0LL && (_QWORD)v20 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v20);
    __debugbreak();
  }
  v12 = gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v22, (__int64 *)&v20);
  v21 = *a3;
  v20 = *(_OWORD *)v12;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v21,
    &v20,
    a5);
  CoordMap::GetRampValues(v13, a1 + 184, v14, &v23);
  v15 = gsl::narrow<__int64,unsigned __int64>((v24 - (_BYTE *)v23) / 12);
  *(_QWORD *)&v20 = v15;
  if ( v15 < 0 || (v16 = v23, (*((_QWORD *)&v20 + 1) = v23) == 0LL) && v15 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v16);
    __debugbreak();
  }
  v17 = gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v22, (__int64 *)&v20);
  v20 = *(_OWORD *)a4;
  v21 = *(_OWORD *)v17;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v20,
    &v21,
    a6);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(&v23);
  v18 = v23;
  v19 = v23 == (gsl::details *)v26;
  v23 = 0LL;
  if ( v19 )
    v18 = 0LL;
  operator delete(v18);
}
