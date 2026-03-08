/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C8BB4
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180052C10 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C98F0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800C991C (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800C9958 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18012B118 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18012B29A (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18012BBD4 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x1801D7C74 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801D7EB8 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 */

char __fastcall COverlayContext::PushCandidates(__int64 a1, const struct COverlayContext::OverlayPlaneInfo ***a2)
{
  __int64 v2; // r14
  char result; // al
  const struct COverlayContext::OverlayPlaneInfo **v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  void *v10; // rcx
  bool v11; // zf
  const struct COverlayContext::OverlayPlaneInfo **v12; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v13; // [rsp+28h] [rbp-D8h] BYREF
  char v14[8]; // [rsp+30h] [rbp-D0h] BYREF
  char v15[224]; // [rsp+38h] [rbp-C8h] BYREF
  char v16[224]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE *v17; // [rsp+1F8h] [rbp+F8h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v18; // [rsp+200h] [rbp+100h]
  __int64 *v19; // [rsp+208h] [rbp+108h]
  _BYTE v20[3584]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v21; // [rsp+1010h] [rbp+F10h] BYREF

  v2 = a1 + 3696;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(a1 + 3696);
  if ( a2 )
  {
    v6 = *a2;
    v17 = v20;
    v18 = (const struct COverlayContext::OverlayPlaneInfo **)v20;
    v19 = &v21;
    while ( v6 != a2[1] )
    {
      if ( *(_QWORD *)*v6 == a1 )
      {
        v7 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v15, *v6);
        v8 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v16, v7);
        v12 = v18;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
          &v17,
          &v13,
          &v12,
          v8);
        v9 = *(std::_Ref_count_base **)(v7 + 168);
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v7 + 16));
        v12 = v6;
        v6 = *(const struct COverlayContext::OverlayPlaneInfo ***)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                    a2,
                                                                    v14,
                                                                    &v12);
      }
      else
      {
        ++v6;
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 88);
    if ( &v17 != (_BYTE **)(a1 + 88) )
    {
      if ( (unsigned __int8)detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
                              a1 + 88,
                              &v17) )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v17);
      }
      else
      {
        v12 = v18;
        v13 = v17;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
          a1 + 88,
          &v13,
          &v12);
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(&v17);
    v10 = v17;
    v11 = v17 == v20;
    v17 = 0LL;
    if ( v11 )
      v10 = 0LL;
    operator delete(v10);
  }
  else
  {
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      a1 + 88);
  }
  if ( *(_BYTE *)(a1 + 11024) && *(_BYTE *)(a1 + 11025) && !*(_BYTE *)(a1 + 11305) )
    *(_BYTE *)(a1 + 11310) = 1;
  result = *(_BYTE *)(a1 + 11306);
  *(_BYTE *)(a1 + 11307) = result;
  return result;
}
