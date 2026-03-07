__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 **a5)
{
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
    a1,
    a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = **a5;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 32) = v8;
  v9 = 0LL;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
