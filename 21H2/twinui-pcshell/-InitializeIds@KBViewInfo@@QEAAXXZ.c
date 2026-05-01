/*
 * XREFs of ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1803BB168
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BB284 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE340 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180076704 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1B08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EDA60 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x1803B48C4 (--$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1803BA9AC (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1803BB810 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 */

void __fastcall KBViewInfo::InitializeIds(KBViewInfo *this)
{
  HSTRING *v2; // r14
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, HSTRING *); // rbx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r10
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  __int64 v11; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  int ViewTypeFromExperienceId; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 7) || *((_DWORD *)this + 26) == -1 )
  {
    v2 = (HSTRING *)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v3 = *(_QWORD *)this;
      v4 = *(void (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)this + 664LL);
      WindowsDeleteString(0LL);
      *v2 = 0LL;
      v4(v3, v2);
    }
    if ( !KBViewInfo::IsAppDefaultView(this) )
    {
      ViewTypeFromExperienceId = anonymous_namespace_::GetViewTypeFromExperienceId(v2);
      v6 = ViewTypeFromExperienceId;
      if ( ViewTypeFromExperienceId != -1 )
      {
        v7 = *((_QWORD *)this + 11) & std::_Fnv1a_append_bytes(
                                        v5,
                                        (const unsigned __int8 *const)&ViewTypeFromExperienceId,
                                        4uLL);
        while ( 1 )
        {
          v8 = std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                 (__int64)this + 40,
                 &v14,
                 v7);
          if ( v9 == *v8 )
            break;
          if ( *(_DWORD *)(v9 + 16) == v6 )
            goto LABEL_12;
        }
        v9 = *((_QWORD *)this + 6);
LABEL_12:
        if ( v9 == *((_QWORD *)this + 6) )
          std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_unverified<unsigned int const,std::_Not_a_node_tag>(
            (_QWORD *)this + 5,
            (__int64)v12,
            (const unsigned __int8 *)&ViewTypeFromExperienceId);
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
        (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
        1u,
        3u);
      v11 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)this, v10);
      if ( v11 )
        *((_DWORD *)this + 26) = v11;
    }
  }
}
