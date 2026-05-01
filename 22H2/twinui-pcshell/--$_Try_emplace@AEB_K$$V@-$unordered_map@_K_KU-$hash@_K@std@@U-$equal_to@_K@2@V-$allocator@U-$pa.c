/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800E5710
 * Callers:
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_KAEB_K@Z @ 0x1800E8710 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180076704 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CB_K_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_K_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@@Z @ 0x1800E526C (--$_Insert_unverified@AEAU-$pair@$$CB_K_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List.c)
 *     ??$emplace_front@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEAU?$pair@$$CB_K_K@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800E61E8 (--$emplace_front@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$list@U-$pair@.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x1800ED8F0 (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 ***v10; // rdi
  __int64 v11; // rax
  const unsigned __int8 *v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  while ( 1 )
  {
    v7 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
                     a1,
                     &v13,
                     v6);
    if ( v9 == *v7 )
      break;
    if ( *(_QWORD *)(v9 + 16) == *(_QWORD *)a3 )
    {
      v10 = (__int64 ***)(a1 + 8);
      v11 = *(_QWORD *)(a1 + 8);
      goto LABEL_6;
    }
  }
  v10 = (__int64 ***)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  v11 = v9;
LABEL_6:
  if ( v9 == v11 )
  {
    v13 = a3;
    std::list<std::pair<unsigned __int64 const,unsigned __int64>>::emplace_front<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
      v10,
      v8,
      &v13);
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>(
      a1,
      a2,
      (const unsigned __int8 *)**v10 + 16,
      **v10);
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
