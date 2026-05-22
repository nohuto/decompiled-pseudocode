/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180172FFC
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$4 @ 0x180172D13 (_std--_Tree_std--_Tmap_traits_unsigned_int_ComboButtonRegistration_std--less_unsign_ea_180172D13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x70);
}
