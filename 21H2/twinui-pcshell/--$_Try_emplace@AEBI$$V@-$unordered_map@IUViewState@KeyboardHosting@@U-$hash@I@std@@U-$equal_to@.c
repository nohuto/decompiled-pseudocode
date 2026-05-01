/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1803D6D14
 * Callers:
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1803D9B90 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1803D9ED0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D5E28 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$list@U-$pair@$$CBIUV.c)
 *     ??$_Insert_unverified@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUViewState@KeyboardHosting@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@@Z @ 0x1803D68EC (--$_Insert_unverified@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$_List_unchecked_iterator.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,KeyboardHosting::ViewState>::_Try_emplace<unsigned int const &,>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // rdx
  unsigned __int64 i; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 j; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  _DWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v8 ^ v5);
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v5 & *(_QWORD *)(a1 + 48);
  v11 = *(__int64 **)(a1 + 8);
  v12 = 2 * v10;
  for ( j = *(_QWORD *)(v9 + 8 * v12); ; j = *(_QWORD *)j )
  {
    v14 = *(__int64 **)(v9 + 8 * v12) == v11 ? *(_QWORD *)(a1 + 8) : **(_QWORD **)(v9 + 8 * v12 + 8);
    if ( j == v14 )
      break;
    if ( *(_DWORD *)(j + 16) == *a3 )
    {
      v15 = (__int64 *)j;
      goto LABEL_12;
    }
  }
  j = *(_QWORD *)(a1 + 8);
  v15 = (__int64 *)j;
LABEL_12:
  if ( v15 == v11 )
  {
    v16 = *v11;
    v18 = a3;
    std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
      a1 + 8,
      v16,
      v12,
      &v18);
    std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Insert_unverified<std::pair<unsigned int const,KeyboardHosting::ViewState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>>>(
      a1,
      a2,
      (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
