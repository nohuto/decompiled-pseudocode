/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x1801B5050
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x1801B4AC0 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1E04 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx

  appended = std::_Fnv1a_append_bytes(a1, a2 + 16, 8uLL);
  v5 = v4[3];
  v6 = 2 * (v4[6] & appended);
  if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended)) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(unsigned __int8 **)(v5 + 16 * (v4[6] & appended)) == a2 )
  {
    *(_QWORD *)(v5 + 16 * (v4[6] & appended)) = *(_QWORD *)a2;
  }
  v8 = *(_QWORD *)a2;
  --v4[2];
  **((_QWORD **)a2 + 1) = v8;
  *(_QWORD *)(v8 + 8) = *((_QWORD *)a2 + 1);
  v9 = *((_QWORD *)a2 + 3);
  if ( v9 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v8;
}
