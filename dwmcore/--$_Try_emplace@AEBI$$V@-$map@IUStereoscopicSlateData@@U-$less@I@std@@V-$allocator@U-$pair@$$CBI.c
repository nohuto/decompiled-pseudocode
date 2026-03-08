/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802A3320
 * Callers:
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A3C14 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802A30B4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_no_ea_1802A30B4.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1802A32D0 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall std::map<unsigned int,StereoscopicSlateData>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  void *v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  _DWORD *v15; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)&v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_DWORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v15 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *>>>(
           &v11,
           (__int64)a1,
           v7,
           v5,
           &v15);
    v9 = v8[1];
    v8[1] = 0LL;
    if ( v12 )
      std::_Deallocate<16,0>(v12, 0x68uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
