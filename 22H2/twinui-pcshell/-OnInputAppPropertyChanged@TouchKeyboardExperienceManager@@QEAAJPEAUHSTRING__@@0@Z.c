/*
 * XREFs of ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803BD394
 * Callers:
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1803CE700 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA0C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x1803B45F4 (--$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1803B8A3C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x1803BAACC (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1803C64F4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1803C66FC (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged(
        TouchKeyboardExperienceManager *this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v7; // rax
  wchar_t *v8; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int ViewInfo; // ebx
  int ViewTypeFromInputKind; // [rsp+24h] [rbp-45h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-41h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-9h] BYREF
  wchar_t String[16]; // [rsp+80h] [rbp+17h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)v17, StringRawBuffer);
  v7 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring((__int64)String, v7);
  if ( std::wstring::find(v17, L"ViewIdForInputKind:") == -1 )
  {
LABEL_9:
    ViewInfo = 0;
    goto LABEL_10;
  }
  v8 = (wchar_t *)std::wstring::substr(v17, (__int64)v18, 0x13uLL, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = std::stoul(v8);
  std::wstring::_Tidy_deallocate(v18);
  ViewTypeFromInputKind = anonymous_namespace_::GetViewTypeFromInputKind(v9);
  v10 = std::stoul(String);
  if ( !v9 )
  {
    *((_DWORD *)this + 179) = v10;
    v11 = *((_QWORD *)this + 86);
    *(_DWORD *)(v11 + 488) = v10;
    *(_DWORD *)(*(_QWORD *)(v11 + 104) + 612LL) = v10;
  }
  *(_OWORD *)v15 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((__int64)this, v10, v15);
  if ( ViewInfo >= 0 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, (RTL_SRWLOCK *)this + 52);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_unverified<unsigned int const,std::_Not_a_node_tag>(
      (_QWORD *)v15[0] + 5,
      (__int64)v18,
      (const unsigned __int8 *)&ViewTypeFromInputKind);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
    goto LABEL_9;
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
LABEL_10:
  std::wstring::_Tidy_deallocate(String);
  std::wstring::_Tidy_deallocate(v17);
  return (unsigned int)ViewInfo;
}
