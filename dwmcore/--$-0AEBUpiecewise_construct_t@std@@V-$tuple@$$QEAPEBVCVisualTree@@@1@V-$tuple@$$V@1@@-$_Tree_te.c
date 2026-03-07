__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v7; // r9
  __int64 v8; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>();
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v7 + 32) = **a5;
  *(_OWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 60) = 0LL;
  v8 = 0LL;
  *(_OWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 68) = 0LL;
  *(_OWORD *)(v7 + 72) = 0LL;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_WORD *)(v7 + 56) = 256;
  *(_BYTE *)(v7 + 76) = 0;
  *(_QWORD *)(v7 + 80) = 0LL;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v8++ + 24) = 0;
  while ( v8 < 2 );
  return a1;
}
