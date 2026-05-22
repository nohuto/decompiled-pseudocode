/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180146184
 * Callers:
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180145F28 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_tagRECT_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__tagRECT____0___::_Copy_assign_::_1_::catch$18 @ 0x18014615B (_std--_Hash_std--_Umap_traits_unsigned___int64_tagRECT_std--_Uhash_compare_unsigned_ea_18014615B.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAAXXZ @ 0x1801461D8 (-clear@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagRECT@@@std@@@2@@std@@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::clear(
        _QWORD *a1)
{
  void *v2; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx

  std::list<std::pair<unsigned __int64 const,tagRECT>>::clear(a1 + 1);
  v2 = (void *)a1[3];
  result = a1[1];
  v4 = (unsigned __int64)(a1[4] - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > a1[4] )
    v4 = 0LL;
  if ( v4 )
    memset64(v2, result, v4);
  return result;
}
