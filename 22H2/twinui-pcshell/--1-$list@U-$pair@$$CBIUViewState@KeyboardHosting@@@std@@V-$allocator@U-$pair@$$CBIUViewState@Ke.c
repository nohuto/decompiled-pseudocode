/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA@XZ @ 0x1803C9ED0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_KeyboardHosting::ViewState_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState____0___::_Hash_std::_Umap_traits_unsigned_int_KeyboardHosting::ViewState_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__KeyboardHosting::ViewState____0____::_1_::dtor$0 @ 0x1803C9854 (_std--_Hash_std--_Umap_traits_unsigned_int_KeyboardHosting--ViewState_std--_Uhash_compare_unsign.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803C88B4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX.c)
 */

void __fastcall std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::~list<std::pair<unsigned int const,KeyboardHosting::ViewState>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x58);
}
