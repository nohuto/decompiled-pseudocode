/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18010AE44
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@1@AEB_K@Z @ 0x18010CC64 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010D01C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$alloca.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18010D0A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU-$_Tree.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

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
