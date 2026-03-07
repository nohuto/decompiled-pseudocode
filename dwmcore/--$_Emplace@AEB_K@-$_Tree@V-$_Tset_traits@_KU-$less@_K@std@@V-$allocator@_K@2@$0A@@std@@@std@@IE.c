__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Emplace<unsigned __int64 const &>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v4 = *a1;
  v6 = v4;
  v7 = (__int64 *)v4[1];
  v14 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v14 = v7;
      if ( v7[4] >= v8 )
      {
        v6 = v7;
        v15 = 1;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v15 = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < v6[4] )
  {
    if ( a1[1] == (__int64 *)0x666666666666666LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned __int64,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned __int64,void *>>>(
           v12,
           a1,
           v4,
           a3);
    v10 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 40LL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Insert_node(a1, &v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
