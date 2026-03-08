/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180036C08
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EAC00 (std--_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800427F8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D6458 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E9B88 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x1800F5F10 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_ @ 0x1801CA3CC (std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_delete__anonym.c)
 */

void __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  void ***v6; // rbx
  char v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdi
  void *v11; // rbp
  void **v14; // rcx
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  char *v20; // rax
  char *v21; // rdi
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int64 v27; // rax
  void ***v28; // rcx
  void *v29; // rcx
  void ***v30; // rdi
  void **v31; // rax
  void ***v32; // rcx
  void *v33; // [rsp+20h] [rbp-88h] BYREF
  int v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  void *v36; // [rsp+38h] [rbp-70h] BYREF
  int v37; // [rsp+40h] [rbp-68h]
  _BYTE v38[32]; // [rsp+48h] [rbp-60h] BYREF

  v5 = a1 + 112;
  v6 = *(void ****)(a1 + 112);
  v7 = 0;
  v8 = a5;
  v9 = (__int64)(*(_QWORD *)(a1 + 120) - (_QWORD)v6) >> 3;
  v33 = a3;
  v11 = a3;
  v34 = a2;
  v35 = a5;
  v37 = 0;
  if ( v9 > 0 )
  {
    do
    {
      if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                              &v6[(unsigned __int64)v9 >> 1],
                              a3) )
      {
        v6 += ((unsigned __int64)v9 >> 1) + 1;
        v9 += -1LL - ((unsigned __int64)v9 >> 1);
      }
      else
      {
        v9 = (unsigned __int64)v9 >> 1;
      }
    }
    while ( v9 > 0 );
    v11 = v33;
    v5 = a1 + 112;
    v8 = v35;
  }
  if ( v6 == *(void ****)(a1 + 120) || (v14 = *v6, **v6 != v11) )
  {
    v20 = (char *)operator new(0x70uLL);
    v21 = v20;
    if ( v20 )
      memset_0(v20, 0, 0x70uLL);
    else
      v21 = 0LL;
    *((_DWORD *)v21 + 26) = v34;
    *(_QWORD *)v21 = v11;
    v22 = *(_DWORD *)(a4 + 80);
    v33 = v21;
    v23 = *(_OWORD *)(a4 + 16);
    v24 = *(_OWORD *)(a4 + 32);
    v25 = *(_OWORD *)(a4 + 48);
    v26 = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(v21 + 8) = *(_OWORD *)a4;
    *(_OWORD *)(v21 + 24) = v23;
    *(_OWORD *)(v21 + 40) = v24;
    *(_OWORD *)(v21 + 56) = v25;
    *(_OWORD *)(v21 + 72) = v26;
    *((_DWORD *)v21 + 22) = v22;
    if ( v8 )
    {
      std::wstring::wstring(v38, v8);
      v7 = 1;
      v27 = *(_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::insert<0,0>(
                         a1 + 160,
                         &v35,
                         v38)
          + 32LL;
    }
    else
    {
      v27 = 0LL;
    }
    *((_QWORD *)v21 + 12) = v27;
    if ( (v7 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v38);
    v28 = *(void ****)(v5 + 8);
    if ( v28 == *(void ****)(v5 + 16) )
    {
      std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
        v5,
        v6,
        &v33);
      v29 = v33;
    }
    else
    {
      if ( v6 == v28 )
      {
        *v28 = (void **)v21;
        *(_QWORD *)(v5 + 8) += 8LL;
        return;
      }
      v36 = v21;
      v30 = v28 - 1;
      v31 = *(v28 - 1);
      *(v28 - 1) = 0LL;
      *v28 = v31;
      *(_QWORD *)(v5 + 8) += 8LL;
      v35 = v5;
      while ( v30 != v6 )
      {
        v32 = v30--;
        std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_(
          v32,
          v30);
      }
      std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator__std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn__0_(
        v6,
        &v36);
      v29 = v36;
    }
    if ( v29 )
      operator delete(v29, 0x70uLL);
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 80);
    v16 = *(_OWORD *)(a4 + 16);
    v17 = *(_OWORD *)(a4 + 32);
    v18 = *(_OWORD *)(a4 + 48);
    v19 = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(v14 + 1) = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 3) = v16;
    *(_OWORD *)(v14 + 5) = v17;
    *(_OWORD *)(v14 + 7) = v18;
    *(_OWORD *)(v14 + 9) = v19;
    *((_DWORD *)v14 + 22) = v15;
  }
}
