/*
 * XREFs of std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::pair__anonymous_namespace_::AnimationId_unsigned_int___ @ 0x1800F1488
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1800F14FC (std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair__anonymous_namespace_--Anima.c)
 */

__int64 __fastcall std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::pair__anonymous_namespace_::AnimationId_unsigned_int___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  *(_OWORD *)(v7 + 32) = *(_OWORD *)a4;
  *(_DWORD *)(v7 + 48) = *(_DWORD *)(a4 + 16);
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v8++ + 24) = 0;
  while ( v8 < 2 );
  return a1;
}
