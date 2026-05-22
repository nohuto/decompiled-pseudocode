/*
 * XREFs of ??$emplace@AEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180169610
 * Callers:
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18016AA84 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x1800C5618 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x180169488 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::emplace<unsigned long const &,std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // r8
  _QWORD *v9; // [rsp+38h] [rbp-20h]

  v6 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *((_DWORD *)v9 + 8) = *a3;
  std::wstring::wstring((__int64)(v9 + 5));
  *v9 = v6;
  v9[1] = v6;
  v9[2] = v6;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Insert_nohint<std::pair<unsigned long const,std::wstring> &,std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *> *>(
    a1,
    a2,
    v7,
    (_DWORD *)v9 + 8,
    (__int64)v9);
  return a2;
}
