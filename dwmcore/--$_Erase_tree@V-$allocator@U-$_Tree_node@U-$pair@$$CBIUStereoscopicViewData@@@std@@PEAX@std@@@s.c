void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, 0xE0uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
