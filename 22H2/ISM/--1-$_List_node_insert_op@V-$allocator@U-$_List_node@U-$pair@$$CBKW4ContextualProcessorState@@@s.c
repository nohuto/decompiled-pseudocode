/*
 * XREFs of ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014B0BC
 * Callers:
 *     _std::list_std::pair_unsigned_long_const__enum_ContextualProcessorState__std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorState_____::_Assign_cast_std::pair_unsigned_long_enum_ContextualProcessorState__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__enum_ContextualProcessorState______std::_Iterator_base0____::_1_::dtor$0 @ 0x18014A1A2 (_std--list_std--pair_unsigned_long_const__enum_ContextualProcessorState__std--allocator_std--pai.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    **(_QWORD **)(a1 + 8) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x18);
    }
  }
}
