/*
 * XREFs of ??$_Try_emplace@AEBQEAVCSceneNode@@$$V@?$map@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@_N@1@AEBQEAVCSceneNode@@@Z @ 0x180267D14
 * Callers:
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801B9474 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@1@V-$tuple@$$V@1@@-$_Tree_temp_n.c)
 *     ??$_Find_lower_bound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@@1@AEBQEAVCSceneNode@@@Z @ 0x180267CC4 (--$_Find_lower_bound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCS.c)
 */

__int64 __fastcall std::map<CSceneNode *,void *>::_Try_emplace<CSceneNode * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v5; // r9
  __int64 *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  void *v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 *v15; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find_lower_bound<CSceneNode *>(
    a1,
    (__int64)&v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || (unsigned __int64)*v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v15 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>(
           &v11,
           (__int64)a1,
           v7,
           v5,
           &v15);
    v9 = v8[1];
    v8[1] = 0LL;
    if ( v12 )
      std::_Deallocate<16,0>(v12, 0x30uLL);
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
