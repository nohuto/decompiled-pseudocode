/*
 * XREFs of ??$_Insert_or_assign@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$unordered_map@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@UDCompTargetHash@@UDCompTargetEqual@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800AD26C
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800AF6C0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Insert@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$list@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800ACFD4 (--$_Insert@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$list@U-$pair@QEAUIDCom.c)
 *     ??$_Insert_unverified@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800ADEE4 (--$_Insert_unverified@U-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800B4388 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@.c)
 */

__int64 __fastcall std::unordered_map<IDCompInputTarget *,std::vector<unsigned long>,DCompTargetHash,DCompTargetEqual,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>::_Insert_or_assign<IDCompInputTarget *,std::vector<unsigned long>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 *v8; // rbx
  __int64 *v9; // rdx
  __int64 *v10; // rsi
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::lower_bound(
    a1,
    &v12);
  v8 = v12;
  v9 = *(__int64 **)(a1 + 8);
  if ( v12 == v9 )
  {
    std::list<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::_Insert<IDCompInputTarget *,std::vector<unsigned long>>(
      a1 + 8,
      *v9,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Insert_unverified<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>>>(
      a1,
      a2,
      **(_QWORD **)(a1 + 8) + 16LL);
  }
  else
  {
    v10 = v12 + 3;
    if ( v12 + 3 != a4 )
    {
      std::vector<Windows::UI::Color>::_Tidy((__int64)(v12 + 3));
      *v10 = *a4;
      v8[4] = a4[1];
      v8[5] = a4[2];
      *a4 = 0LL;
      a4[1] = 0LL;
      a4[2] = 0LL;
    }
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
