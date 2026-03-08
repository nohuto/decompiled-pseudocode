/*
 * XREFs of ??0?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x180024990
 * Callers:
 *     _dynamic_initializer_for__CWeakResourceReference::s_weakReferenceMap__ @ 0x180001330 (_dynamic_initializer_for__CWeakResourceReference--s_weakReferenceMap__.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@1@AEBV?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@1@@Z @ 0x1800249C0 (--0-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVCRes.c)
 */

int *__fastcall std::unordered_map<CResource const *,CWeakResourceReference *>::unordered_map<CResource const *,CWeakResourceReference *>(
        __int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>(
    a1,
    &v2);
  return &CWeakResourceReference::s_weakReferenceMap;
}
