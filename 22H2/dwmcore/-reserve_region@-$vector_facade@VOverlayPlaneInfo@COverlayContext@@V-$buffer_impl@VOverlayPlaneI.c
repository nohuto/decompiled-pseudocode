/*
 * XREFs of ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18017D0EC
 * Callers:
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x18002F7A4 (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x1801793E8 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x180179500 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??$insert@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@1@Z @ 0x180179650 (--$insert@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x18002F910 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180179778 (--$move_backward@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180179940 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18017CEF4 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r10
  COverlayContext::OverlayPlaneInfo *v11; // r12
  unsigned __int64 v12; // r15
  bool v13; // sf
  signed __int64 v14; // rax
  signed __int64 v15; // r11
  unsigned __int64 v16; // r11
  __int64 v17; // r9
  bool v18; // sf
  COverlayContext::OverlayPlaneInfo *v19; // rdx
  COverlayContext::OverlayPlaneInfo *v20; // rbx
  COverlayContext::OverlayPlaneInfo *result; // rax
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v25; // [rsp+50h] [rbp-10h]

  v5 = a1;
  detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v7 = *v5;
  v8 = v5[1];
  v23 = 0LL;
  v9 = (unsigned __int128)((v8 - v7) * (__int128)0x4924924924924925LL) >> 64;
  v25 = 0LL;
  *((_QWORD *)&v22 + 1) = a3;
  v10 = (v8 - v7) / 224;
  v11 = (COverlayContext::OverlayPlaneInfo *)(v7 + 224 * v10);
  v12 = v10 - a2;
  *(_QWORD *)&v22 = v11;
  v13 = a3 < 0;
  if ( a3 )
  {
    if ( !v11 )
      goto LABEL_21;
    v13 = a3 < 0;
  }
  if ( !v13 || !a3 )
  {
    v25 = a3;
    v14 = a3;
    if ( a3 >= v12 )
      v14 = (v8 - v7) / 224 - a2;
    v23 = a3;
    if ( v8 != v8 - 224 * v14 )
    {
      v5 = (__int64 *)v22;
      v15 = v23;
      while ( 1 )
      {
        v8 -= 224LL;
        if ( !(_QWORD)v22 )
          goto LABEL_21;
        if ( !v15 )
          goto LABEL_21;
        v16 = v15 - 1;
        if ( v16 >= *((_QWORD *)&v22 + 1) )
          goto LABEL_21;
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v22 + 224 * v16, v8);
        if ( v8 == v17 )
        {
          v5 = a1;
          break;
        }
      }
    }
    if ( v12 <= a3 )
      goto LABEL_23;
    *(_QWORD *)&v22 = v7;
    *((_QWORD *)&v22 + 1) = v10;
    v18 = v10 < 0;
    if ( !v10 )
    {
LABEL_19:
      if ( !v18 || !v10 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v7 )
    {
      v18 = v10 < 0;
      goto LABEL_19;
    }
  }
LABEL_21:
  _o__invalid_parameter_noinfo_noreturn(v6, v9);
  __debugbreak();
LABEL_22:
  v23 = v10;
  v24 = v22;
  v25 = v10;
  std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
    (__int64)&v22,
    v7 + 224 * a2,
    v7 + 224 * (v10 - a3),
    &v24);
LABEL_23:
  v19 = (COverlayContext::OverlayPlaneInfo *)(v7 + 224 * (a3 + a2));
  if ( v11 < v19 )
    v19 = v11;
  v20 = (COverlayContext::OverlayPlaneInfo *)(224 * a2 + v7);
  detail::destruct_range<COverlayContext::OverlayPlaneInfo>(v20, v19);
  result = v20;
  v5[1] += 224 * a3;
  return result;
}
