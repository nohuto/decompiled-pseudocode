_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v7; // rax
  StereoscopicViewData *v8; // rbx
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xE0uLL);
  a1[1] = v7;
  v8 = (StereoscopicViewData *)(v7 + 32);
  *(_DWORD *)(v7 + 28) = **a5;
  memset_0((void *)(v7 + 32), 0, 0xC0uLL);
  StereoscopicViewData::StereoscopicViewData(v8);
  *(_QWORD *)a1[1] = a3;
  v9 = 0LL;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
