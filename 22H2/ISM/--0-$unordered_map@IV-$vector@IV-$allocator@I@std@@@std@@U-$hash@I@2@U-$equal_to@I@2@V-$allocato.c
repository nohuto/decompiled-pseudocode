/*
 * XREFs of ??0?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180024B60
 * Callers:
 *     _dynamic_initializer_for__Win32kInterop::s_frameIdToPointerIdMap__ @ 0x1800016F0 (_dynamic_initializer_for__Win32kInterop--s_frameIdToPointerIdMap__.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@1@@Z @ 0x180024D10 (--0-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-$hash@I@st.c)
 */

int *__fastcall std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map<unsigned int,std::vector<unsigned int>>(
        __int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>(
    a1,
    &v2);
  return &Win32kInterop::s_frameIdToPointerIdMap;
}
