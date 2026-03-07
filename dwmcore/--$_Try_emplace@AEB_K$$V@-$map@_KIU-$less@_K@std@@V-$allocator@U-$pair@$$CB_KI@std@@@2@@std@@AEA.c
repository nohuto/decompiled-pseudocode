__int64 __fastcall std::map<unsigned __int64,unsigned int>::_Try_emplace<unsigned __int64 const &,>(
        __int64 *a1,
        __int64 a2)
{
  int v4; // r9d
  _QWORD *v5; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // [rsp+30h] [rbp-38h] BYREF
  void *v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    &v12);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v14 = v5;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *>>>(
           (unsigned int)&v10,
           (_DWORD)a1,
           v7,
           v4,
           (__int64)&v14);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( v11 )
      std::_Deallocate<16,0>(v11, 0x30uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Insert_node(
                      a1,
                      &v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
