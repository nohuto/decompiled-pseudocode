/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Rrotate @ 0x18001FF9C
 * Callers:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Insert_node @ 0x1800FDA7C (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800FDA7C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Rrotate(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  *a2 = *(_QWORD *)(*a2 + 16LL);
  v3 = *(_QWORD *)(v2 + 16);
  if ( !*(_BYTE *)(v3 + 25) )
    *(_QWORD *)(v3 + 8) = a2;
  *(_QWORD *)(v2 + 8) = a2[1];
  result = *(_QWORD **)a1;
  if ( a2 == *(_QWORD **)(*(_QWORD *)a1 + 8LL) )
  {
    result[1] = v2;
  }
  else
  {
    result = (_QWORD *)a2[1];
    if ( a2 == (_QWORD *)result[2] )
      result[2] = v2;
    else
      *result = v2;
  }
  *(_QWORD *)(v2 + 16) = a2;
  a2[1] = v2;
  return result;
}
