/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Move_assign @ 0x180036FE0
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180037050 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 * Callees:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x18010AD70 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_18010AD70.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Move_assign(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = (__int64 *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 8);
  std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
    a1 + 8,
    a1 + 8,
    v4[1]);
  v4[1] = v4;
  *v4 = v4;
  v4[2] = v4;
  v2[1] = 0LL;
  v5 = *v2;
  *v2 = *(_QWORD *)(a2 + 8);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v5;
  v7 = v2[1];
  v2[1] = result;
  *(_QWORD *)(a2 + 16) = v7;
  return result;
}
