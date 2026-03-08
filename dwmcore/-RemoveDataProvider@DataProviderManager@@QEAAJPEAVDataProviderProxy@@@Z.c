/*
 * XREFs of ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x1801B4AC0
 * Callers:
 *     ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801DE360 (-Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoData.c)
 *     ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x1801E1540 (-OnDisconnected@DataProviderProxy@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801B46D8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x1801B5050 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_.c)
 */

__int64 __fastcall DataProviderManager::RemoveDataProvider(DataProviderManager *this, struct DataProviderProxy *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)a2 + 8;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 72LL))((char *)a2 + 8);
  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL))(v2);
  v8 = v4;
  v9 = *(_DWORD *)(v5 + 4);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::find<void>(
    (_QWORD *)this + 5,
    &v10,
    (const unsigned __int8 *)&v8);
  if ( v10 == *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase((char *)this + 40);
    return 0LL;
  }
}
