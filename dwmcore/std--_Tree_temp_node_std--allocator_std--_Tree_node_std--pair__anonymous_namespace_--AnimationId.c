_QWORD *__fastcall std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 **a5)
{
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rcx

  std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______(
    a1,
    a2);
  v7 = a1[1];
  v8 = **a5;
  *(_DWORD *)(v7 + 48) = 0;
  v9 = 0LL;
  *(_OWORD *)(v7 + 32) = v8;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v9 + a1[1] + 24) = 0;
    ++v9;
  }
  while ( v9 < 2 );
  return a1;
}
