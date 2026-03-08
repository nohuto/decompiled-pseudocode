/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18024F960
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18024F814 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@1@V-$tuple@$$V@1@@-$_Tree_temp_n_ea_18024F814.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x18024F910 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18024FC08 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@.c)
 */

__int64 __fastcall std::map<unsigned __int64,std::shared_ptr<unsigned char [0]>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
    a1,
    (__int64)&v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    v14 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
           v11,
           (__int64)a1,
           v7,
           v5,
           &v14);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(v11);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
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
