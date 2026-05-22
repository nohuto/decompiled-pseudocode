/*
 * XREFs of ??$_Try_emplace@PEAUIInputTarget@@$$V@?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x18014A8E8
 * Callers:
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18014BCEC (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEAUIInputTarget@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEAUIInputTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18014A524 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEAUIInputTarget@@@2@V-$tuple@$$V@2@@-$l.c)
 *     ??$_Insert_unverified@AEAU?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@1@@Z @ 0x18014A5E0 (--$_Insert_unverified@AEAU-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash@K@std@@U-$equal_to@.c)
 */

__int64 __fastcall std::unordered_map<IInputTarget *,std::unordered_set<unsigned long>>::_Try_emplace<IInputTarget *,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // r11
  __int64 **v7; // rax
  __int64 v8; // r8
  __int64 *v9; // r10
  __int64 ***v10; // rdi
  __int64 *v11; // rdx
  __int64 v12; // rdx
  const unsigned __int8 *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  while ( 1 )
  {
    v7 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                       a1,
                       &v14,
                       v6);
    if ( v9 == *v7 )
      break;
    if ( v9[2] == *(_QWORD *)a3 )
    {
      v10 = (__int64 ***)(a1 + 8);
      v11 = *(__int64 **)(a1 + 8);
      goto LABEL_6;
    }
  }
  v10 = (__int64 ***)(a1 + 8);
  v9 = *(__int64 **)(a1 + 8);
  v11 = v9;
LABEL_6:
  if ( v9 == v11 )
  {
    v12 = *v11;
    v14 = a3;
    std::list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>::_Insert<std::piecewise_construct_t const &,std::tuple<IInputTarget * &&>,std::tuple<>>(
      (__int64)v10,
      v12,
      v8,
      (__int64 **)&v14);
    std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Insert_unverified<std::pair<IInputTarget * const,std::unordered_set<unsigned long>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>>>>(
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
