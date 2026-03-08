/*
 * XREFs of ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x1801A3AC0
 * Callers:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A3BE4 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_lower_bound@PEAX@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@AEBQEAX@Z @ 0x18012980E (--$_Find_lower_bound@PEAX@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocat.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801A39DC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allo.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  void *v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  _QWORD *v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = a1;
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Find_lower_bound<void *>(
    (__int64)a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *v5 < *(_QWORD *)(v12 + 32) )
  {
    if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) == 0x2AAAAAAAAAAAAAALL )
      std::_Throw_tree_length_error();
    v13 = v5;
    v6 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
           &v9,
           (__int64)&CPointerDeviceCache::s_deviceCache,
           CPointerDeviceCache::s_deviceCache,
           v4,
           &v13);
    v7 = v6[1];
    v6[1] = 0LL;
    if ( v10 )
      std::_Deallocate<16,0>(v10, 0x60uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      &CPointerDeviceCache::s_deviceCache,
                      &v11,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
