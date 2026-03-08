/*
 * XREFs of _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180037510
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035F64 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800374D0 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1801201D0 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@@Z @ 0x1800375A0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x18010AD70 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_18010AD70.c)
 */

__int64 __fastcall anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(_QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = a1 + 56;
  std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
    a1 + 56,
    a1 + 56,
    *(_QWORD *)(a1[56] + 8LL));
  std::_Deallocate<16,0>(*v1, 56LL);
  std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
    a1 + 53,
    a1 + 53,
    *(_QWORD *)(a1[53] + 8LL));
  std::_Deallocate<16,0>(a1[53], 40LL);
  std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
    a1 + 51,
    a1 + 51,
    *(_QWORD *)(a1[51] + 8LL));
  return std::_Deallocate<16,0>(a1[51], 40LL);
}
