/*
 * XREFs of ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@@Z @ 0x1800E4368
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_K_K@std@@@1@@Z @ 0x1800E7310 (--0-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$all.c)
 * Callees:
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800ED408 (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K.c)
 */

__int64 __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rdx
  __int64 result; // rax

  v3 = 16LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
    a1,
    16LL);
  v6 = *(__int64 **)a1;
  do
  {
    result = *a3;
    *v6++ = *a3;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 8) = v6;
  return result;
}
