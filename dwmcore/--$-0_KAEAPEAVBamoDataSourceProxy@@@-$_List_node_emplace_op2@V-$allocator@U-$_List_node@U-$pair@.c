/*
 * XREFs of ??$?0_KAEAPEAVBamoDataSourceProxy@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0C20
 * Callers:
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801E0E00 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  v8 = *a4;
  *(_QWORD *)(v7 + 24) = *a4;
  if ( v8 )
    (**v8)(v8);
  return a1;
}
