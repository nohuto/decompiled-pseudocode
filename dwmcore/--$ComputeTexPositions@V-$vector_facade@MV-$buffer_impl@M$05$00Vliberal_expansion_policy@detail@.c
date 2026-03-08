/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180025310
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??$?0UPrimitiveUVDesc@@$0?0$0?0$0A@@?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEAA@AEBV?$span@UPrimitiveUVDesc@@$0?0@1@@Z @ 0x180025234 (--$-0UPrimitiveUVDesc@@$0-0$0-0$0A@@-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEAA@AEBV-$span@UPrim.c)
 *     ??$?0$0?0V?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@URampPair@CoordMap@@$0?0@gsl@@QEAA@AEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800254F0 (--$-0$0-0V-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x1800256A8 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180025924 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18002594C (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180025A34 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180025B90 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
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
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  void *v18; // rcx
  bool v19; // zf
  __int128 v20; // [rsp+20h] [rbp-91h] BYREF
  __int128 v21; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v25[72]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+Fh] BYREF

  v24[0] = v25;
  v24[1] = v25;
  v24[2] = &v26;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a5);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a6);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a5, *v9);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a6, *a4);
  CoordMap::GetRampValues(v10, a1, v11, v24);
  v12 = (_QWORD *)gsl::span<CoordMap::RampPair,-1>::span<CoordMap::RampPair,-1>(v22, v24);
  v13 = gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(v23, v12);
  v21 = *a3;
  v20 = *(_OWORD *)v13;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v21,
    &v20,
    a5);
  CoordMap::GetRampValues(v14, a1 + 184, v15, v24);
  v16 = (_QWORD *)gsl::span<CoordMap::RampPair,-1>::span<CoordMap::RampPair,-1>(v23, v24);
  v17 = gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(v22, v16);
  v20 = *(_OWORD *)a4;
  v21 = *(_OWORD *)v17;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v20,
    &v21,
    a6);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(v24);
  v18 = (void *)v24[0];
  v19 = v24[0] == (_QWORD)v25;
  v24[0] = 0LL;
  if ( v19 )
    v18 = 0LL;
  operator delete(v18);
}
