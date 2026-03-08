/*
 * XREFs of std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void________std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ @ 0x1800FE5D0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void________std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v7;
  v8 = 0LL;
  *(_OWORD *)(v7 + 32) = *(_OWORD *)a4;
  *(_QWORD *)(v7 + 48) = *(_QWORD *)(a4 + 16);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v8++ + 24) = 0;
  while ( v8 < 2 );
  return a1;
}
