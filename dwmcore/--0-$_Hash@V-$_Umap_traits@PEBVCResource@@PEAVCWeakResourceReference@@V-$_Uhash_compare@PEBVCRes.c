/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@1@AEBV?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@1@@Z @ 0x1800249C0
 * Callers:
 *     ??0?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x180024990 (--0-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U-$hash@PEBVCResource@@@std@@U-$eq.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180024768 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  _QWORD *v3; // rax
  __m128i si128; // xmm1

  v2 = *a2;
  qword_1803E3068 = 0LL;
  qword_1803E3070 = 0LL;
  CWeakResourceReference::s_weakReferenceMap = v2;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *v3 = v3;
  v3[1] = v3;
  qword_1803E3078 = 0LL;
  xmmword_1803E3080 = 0LL;
  CWeakResourceReference::s_weakReferenceMap = (int)FLOAT_1_0;
  qword_1803E3068 = (__int64)v3;
  xmmword_1803E3090 = (__int128)si128;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>>::_Assign_grow(
    (unsigned __int64 **)&qword_1803E3078,
    0x10uLL,
    (unsigned __int64)v3);
  return &CWeakResourceReference::s_weakReferenceMap;
}
