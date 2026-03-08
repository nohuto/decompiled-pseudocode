/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Check_grow_by_1 @ 0x1800F3EB4
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x18010D9F0 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--_ea_18010D9F0.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Check_grow_by_1(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
    std::_Throw_tree_length_error();
  return result;
}
