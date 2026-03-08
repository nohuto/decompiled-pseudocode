/*
 * XREFs of ??$_Emplace@AEB_K@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@_KPEAX@std@@_N@1@AEB_K@Z @ 0x1800363A8
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180036374 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@Q.c)
 * Callees:
 *     ??$?0AEB_K@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@PEAU?$_Tree_node@_KPEAX@1@AEB_K@Z @ 0x180036480 (--$-0AEB_K@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@_KPEAX@std@@@std@@@std@@QEAA@AEAV-$alloc.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@U?$_Tree_id@PEAU?$_Tree_node@_KPEAX@std@@@2@QEAU32@@Z @ 0x180036B2C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@U-$_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

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
