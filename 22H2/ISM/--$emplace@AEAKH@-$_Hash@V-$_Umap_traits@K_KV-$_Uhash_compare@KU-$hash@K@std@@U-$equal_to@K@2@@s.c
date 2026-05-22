/*
 * XREFs of ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1801746A0
 * Callers:
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x180174A18 (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180175890 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKUtagPOINT@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUtagPOINT@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@1@@Z @ 0x1800F7394 (--$_Insert_unverified@AEAU-$pair@$$CBKUtagPOINT@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ??$_Insert@AEAKH@?$list@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAH@Z @ 0x18017453C (--$_Insert@AEAKH@-$list@U-$pair@$$CBK_K@std@@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@QEAAXV-$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4)
{
  __int64 **v4; // rbx

  v4 = (__int64 **)(a1 + 8);
  std::list<std::pair<unsigned long const,unsigned __int64>>::_Insert<unsigned long &,int>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_Insert_unverified<std::pair<unsigned long const,tagPOINT> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINT>>>>>(
    (_QWORD *)a1,
    a2,
    (const unsigned __int8 *)(**v4 + 16),
    **v4);
  return a2;
}
