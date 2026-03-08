/*
 * XREFs of ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x180213434
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x180012AF4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBI@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@AEBI@Z @ 0x1802131D8 (--$-0AEBI@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // r9d
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  void *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v4 = *a1;
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  v14 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v14 = v7;
      if ( *(_DWORD *)(v7 + 28) >= v8 )
      {
        v6 = v7;
        v15 = 1;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v15 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_DWORD *)(v6 + 28) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>(
           &v12,
           (__int64)a1,
           v4,
           a3);
    v10 = v9[1];
    v9[1] = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 0x20uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
