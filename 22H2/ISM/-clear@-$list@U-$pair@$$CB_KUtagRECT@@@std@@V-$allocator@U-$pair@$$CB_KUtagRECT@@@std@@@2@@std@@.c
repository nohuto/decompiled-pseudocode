/*
 * XREFs of ?clear@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAAXXZ @ 0x1801461D8
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@_KUtagRECT@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801453F8 (--$_Assign_cast@AEAU-$pair@_KUtagRECT@@@std@@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180146184 (-clear@-$_Hash@V-$_Umap_traits@_KUtagRECT@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BC388 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,tagRECT>>::clear(_QWORD ***a1)
{
  __int64 result; // rax

  std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
    (__int64)a1,
    *a1);
  **a1 = *a1;
  result = (__int64)*a1;
  (*a1)[1] = *a1;
  a1[1] = 0LL;
  return result;
}
