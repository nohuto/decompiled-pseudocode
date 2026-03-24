/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FB34
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006D330 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18002F670 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x18002F700 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002FB04 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F3F00 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x18016BA34 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180179268 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x180179500 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180179940 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180179AE0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18017D05C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

unsigned __int64 __fastcall COverlayContext::PushCandidates(
        __int64 a1,
        const struct COverlayContext::OverlayPlaneInfo ***a2)
{
  _QWORD *v2; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  const struct COverlayContext::OverlayPlaneInfo **v9; // rbx
  COverlayContext::OverlayPlaneInfo *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  void *v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  int v18; // ecx
  const struct COverlayContext::OverlayPlaneInfo **v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  char v21[224]; // [rsp+30h] [rbp-D0h] BYREF
  char v22[224]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v23[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE *v24; // [rsp+200h] [rbp+100h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v25; // [rsp+208h] [rbp+108h]
  __int64 *v26; // [rsp+210h] [rbp+110h]
  _BYTE v27[3584]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v28; // [rsp+1018h] [rbp+F18h] BYREF

  v2 = (_QWORD *)(a1 + 3704);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)(a1 + 3704));
  if ( a2 )
  {
    v9 = *a2;
    v24 = v27;
    v25 = (const struct COverlayContext::OverlayPlaneInfo **)v27;
    v26 = &v28;
    while ( v9 != a2[1] )
    {
      if ( *(_QWORD *)*v9 == a1 )
      {
        v10 = (COverlayContext::OverlayPlaneInfo *)COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                                                     (COverlayContext::OverlayPlaneInfo *)v21,
                                                     *v9);
        v13 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v22, v10, v11, v12);
        v19 = v25;
        ((void (__fastcall *)(_BYTE **, __int64 *, const struct COverlayContext::OverlayPlaneInfo ***, __int64))detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>)(
          &v24,
          &v20,
          &v19,
          v13);
        COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo(v10);
        v19 = v9;
        v9 = *(const struct COverlayContext::OverlayPlaneInfo ***)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                    a2,
                                                                    v23,
                                                                    &v19);
      }
      else
      {
        ++v9;
      }
    }
    v5 = (_QWORD *)(a1 + 96);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      (_QWORD *)(a1 + 96));
    if ( &v24 != (_BYTE **)(a1 + 96) )
    {
      if ( detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>((_QWORD *)(a1 + 96), &v24) )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)&v24);
      }
      else
      {
        v19 = v25;
        v20 = (__int64)v24;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
          a1 + 96,
          &v20,
          &v19);
      }
    }
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)&v24);
    v14 = v24;
    v15 = v24 == v27;
    v24 = 0LL;
    if ( v15 )
      v14 = 0LL;
    operator delete(v14);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 96);
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v2,
      (_QWORD *)(a1 + 96));
  }
  if ( *(_BYTE *)(a1 + 11032) && *(_BYTE *)(a1 + 11033) && !*(_BYTE *)(a1 + 11425) )
    *(_BYTE *)(a1 + 11432) = 1;
  *(_BYTE *)(a1 + 11427) = *(_BYTE *)(a1 + 11426);
  v6 = *(_QWORD *)(a1 + 7320);
  if ( (v5[1] - *v5) / 224LL )
  {
    v16 = v6 - *(_QWORD *)(a1 + 7312);
    result = (unsigned __int64)((unsigned __int128)(v16 * (__int128)0x4924924924924925LL) >> 64) >> 63;
    if ( !(v16 / 224) )
    {
      v17 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)a1
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8LL));
      result = (**v17)(v17, v23);
      v18 = *(_DWORD *)(result + 4);
      *(_DWORD *)(a1 + 8) = v18;
      if ( v18 != 1 )
      {
        *(_DWORD *)(a1 + 12) = 1;
LABEL_27:
        *(_BYTE *)(a1 + 11431) = 1;
      }
    }
  }
  else
  {
    v7 = v6 - *(_QWORD *)(a1 + 7312);
    result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x4924924924924925LL) >> 64) >> 63;
    if ( v7 / 224 )
    {
      result = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)result != 1 )
      {
        *(_DWORD *)(a1 + 12) = result;
        goto LABEL_27;
      }
    }
  }
  return result;
}
